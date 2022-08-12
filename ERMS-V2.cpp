#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

class employee
{
 int id;
 char name[30];
 char gender;
 int years;
 char address[30];
 char position[30];
 
  
 public:
  void getData();
  void showData();
  int getid(){return id;}
}s;

void employee::getData()
{
	
 cout<<"\n\nEnter Employee Details......\n";
 cout<<"Enter ID No.               : "; 
 while(!(cin>>id))
 {
 	cout<<"ERROR!! Please enter a valid input      "<<endl;
 	cin.clear();
 	cin.ignore(22,'\n');
 }
 
 cout<<"Enter Full Name            : "; cin.ignore(); cin.getline(name,30);
 cout<<"Enter Gender (M/F)         : "; cin>>gender;
 cout<<"Enter Years of Experience  : ";
 while(!(cin>>years))
 {
 	cout<<"ERROR!! Please enter a valid input      "<<endl;
 	cin.clear();
 	cin.ignore(22,'\n');
 }
 
 cout<<"Enter Address		   : "; 	cin.ignore(); cin.getline(address,30);
 cout<<"Enter Position		   : ";		cin>>position;
 cout<<endl;

}

void employee::showData()
{
 cout<<"\n\n.......Employee Details......\n";
 cout<<"ID No.    	  : "<<id<<endl;
 cout<<"Full Name         : "<<name<<endl;
 cout<<"Gender            : "<<gender<<endl;
 cout<<"Experience[years] : "<<years<<endl;
 cout<<"Address		  : " 	<<address<<endl;
 cout<<"Position	  : "	<<position<<endl;
 

 cout<<endl;
}

void addData()
{
 ofstream fout;
 fout.open("emp.dat",ios::binary|ios::out|ios::app);
 s.getData();
 fout.write((char*)&s,sizeof(s));
 fout.close();
 cout<<"\n\nData Successfully Saved to File....\n";
}

void displayData()
{
 ifstream fin;
 fin.open("emp.dat",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void searchData()
{
 int n, flag=0;
 ifstream fin;
 fin.open("emp.dat",ios::in|ios::binary);
 cout<<"Enter ID Number you want to search : ";
 cin>>n;
 
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getid())
  {
   cout<<"The Details of ID No. "<<n<<" shown below:\n";
   s.showData();
   flag++;
  }
 }
 fin.close();
 if(flag==0)
  cout<<"The ID No. "<<n<<" not found....\n\n";
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void deleteData()
{
 int n, flag=0;
 ifstream fin;
 ofstream fout,tout;

 fin.open("emp.dat",ios::in|ios::binary);
 fout.open("Tempemp.dat",ios::out|ios::app|ios::binary);
 tout.open("Trashemp.dat",ios::out|ios::app|ios::binary);


 cout<<"Enter ID Number you want to move to Trash : ";
 cin>>n;
 
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getid())
  {
   cout<<"The Following ID No. "<<n<<" has been moved to Trash:\n";
   s.showData();
   tout.write((char*)&s,sizeof(s));
   flag++;
  }
  else
  {
   fout.write((char*)&s,sizeof(s));
  }
 }
 fout.close();
 tout.close();
 fin.close();
 if(flag==0)
  cout<<"The ID No. "<<n<<" not found....\n\n";
 remove("emp.dat");
 rename("tempemp.dat","emp.dat");
}

void getTrash()
{
 ifstream fin;
 fin.open("Trashemp.dat",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from Trash File Successfully Done....\n";
}

void modifyData()
{
 int n, flag=0, pos;
 fstream fio;

 fio.open("emp.dat",ios::in|ios::out|ios::binary);
 
 cout<<"Enter ID Number you want to Modify : ";
 cin>>n;
 
 while(fio.read((char*)&s,sizeof(s)))
 {
  pos=fio.tellg();
  if(n==s.getid())
  {
   cout<<"The Following ID No. "<<n<<" will be modified with new data:\n";
   s.showData();
   cout<<"\n\nNow Enter the New Details....\n";
   s.getData();
   fio.seekg(pos-sizeof(s));
   fio.write((char*)&s,sizeof(s));
   flag++;
  }
 }
 fio.close();
 
 if(flag==0)
  cout<<"The ID No. "<<n<<" not found....\n\n";
}

void project()
{
 int ch;
 do
 {
  system("cls");
  cout<<"...............EMPLOYEE MANAGEMENT SYSTEM..............\n";
  
  cout<<"====Project by Aayush, Bijay, Nayan and Sohan=========\n";
  cout<<"======================================================\n";
  cout<<"1. Enter new Employee Record\n";
  cout<<"2. List Employee Records\n";
  cout<<"3. Search Employee Records\n";
  cout<<"4. Delete Employee Records\n";
  cout<<"5. Get Deleted Records from Trash file\n";
  cout<<"6. Modify Employee Records\n";
  cout<<"0. Exit from Program\n";
  cout<<"Enter your choice  : ";
  cin>>ch;
  system("cls");
  switch(ch)
  {
   case 1: addData(); break;
   case 2: displayData(); break;
   case 3: searchData(); break;
   case 4: deleteData(); break;
   case 5: getTrash(); break;
   case 6: modifyData(); break;
  }
  system("pause");
 }while(ch);
}

int main()
{
 project();
}
