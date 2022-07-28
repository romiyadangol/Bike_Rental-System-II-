#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<unistd.h>
using namespace std;
/******************************************************FunctionDeclaration************************************************/
void adminlogin();
void userregister();
void userlogin();
/******************************************************ClassCreationForAdmin**************************************************/
class bbike
{
	public:
		int ch;
		void input(); 
		void add_bikes();
		void show_bikes();
		void check_bikes();
		void update_bikes();
		void del_bikes();
};
/******************************************************MemberFunctionDefinition**************************************************/
void bbike::input()
{
	system("cls");
	cout<<"\n\n\t\t\t\tMENU";
	cout<<"\n\n 1. Add New Bikes";
	cout<<"\n 2. Display Bikes";
	cout<<"\n 3. Check Specific Bikes";
	cout<<"\n 4. Update Bikes";
	cout<<"\n 5. Delete Bikes";
	cout<<"\n 6. Exit";
}
void bbike::add_bikes()
{
	label0:
	system("cls");
	cout<<"\n\n******Adding new bike to the system****** "<<endl;
	cout<<"\nChoose which bike you would like to add below........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		fstream file1;
		int year1,max_power1,max_torque1;
		string name1;
		cout<<"\n******Getting Details for new petrol medium bike******"<<endl;
		cout<<"\n\n Enter Bike name: ";
		cin>>name1;
		fflush(stdin);
		cout<<"\n Enter year: ";	
		cin>>year1;
		fflush(stdin);
		cout<<"\n Enter max_power: ";
		cin>>max_power1;
		cout<<"\n Enter max-torque: ";
		cin>>max_torque1;
		file1.open("D://petrolBike.txt",ios::out|ios::app);
		file1<<" "<<name1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
		file1.close();
	}
	else if (ch==2)
	{
		system("cls");
		fstream file2;
		int year2,range2;
		string name2;
		cout<<"\n******Getting Details for new electric medium bike******"<<endl;
		cout<<"\n\n Enter Bike name: ";
		cin>>name2;
		fflush(stdin);
		cout<<"\n Enter year: ";	
		cin>>year2;
		fflush(stdin);
		cout<<"\n Enter range: ";
		cin>>range2;
		file2.open("D://electricBike.txt",ios::out|ios::app);
		file2<<" "<<name2<<" "<<year2<<" "<<range2<<" "<<"\n";
		file2.close();	
	}
	else
	{
		cout<<"\n!!!Invalid Input!!!";
		cout<<"\n!!!Try Again!!!";
		sleep(3);
		goto label0;
	}
}	
void bbike::show_bikes()
{
	label1:
	system("cls");
	cout<<"\n******Displaying bike******"<<endl;
	cout<<"\nChoose which bike list would you like to display........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch == 1)
	{	
		system("cls");
		fstream file1;
		int year1,max_power1,max_torque1;
		string name1;
		file1.open("D://petrolBike.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name    Year    Max_power    Max_torque\n\n";
			file1>>name1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				cout<<"   "<<name1<<"     "<<year1<<"     "<<max_power1<<"\t\t"<<max_torque1<<"\n\n";
				file1>>name1>>year1>>max_power1>>max_torque1;
			}
				file1.close();
		}
	}
	else if (ch==2)
	{		
		system("cls");
		fstream file2;
		int year2,range2;
		string name2;
		file2.open("D://electricBike.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name    Year    Range\n\n";
			file2>>name2>>year2>>range2;
			while(!file2.eof())
			{
				cout<<"   "<<name2<<"     "<<year2<<"     "<<range2<<"\t\t"<<"\n\n";
				file2>>name2>>year2>>range2;
			}
			file2.close();
		}
	}
	else
	{
		cout<<"\n!!!Invalid Choice!!!";
		sleep(3);
		goto label1;
	}	
}
void bbike::check_bikes()
{
	label2:
	system("cls");
	cout<<"\n******Checking Bike******";
	cout<<"\nChoose which bike would you like to check........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch == 1 )
	{
		system("cls");
		fstream file1;
		int year1,max_power1,max_torque1,count1=0;
		string name1,namee1;
		file1.open("D://petrolBike.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name: : ";
			cin>>namee1;
			file1>>name1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(namee1 == name1)
				{
					system("cls");
					cout<<"\n\n\t\t\tBike Name : "<<name1;
					cout<<"\n\n\t\t\tYear : "<<year1;
					cout<<"\n\n\t\t\tMax_power : "<<max_power1;
					cout<<"\n\n\t\t\tMax_torque : "<<max_torque1;
					count1++;
					break;	
				}
				file1>>name1>>year1>>max_power1>>max_torque1;
			}
			file1.close();
			if(count1 == 0)
			cout<<"\n\n Bike name Not Found...";
		}
	}
	else if( ch ==2)
	{ 
		system("cls");
		fstream file2;
		int year2,max_power2,range2,count2=0;
		string name2,namee2;
		file2.open("D://electricBike.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name: : ";
			cin>>namee2;
			file2>>name2>>year2>>range2;
			while(!file2.eof())
			{
				if(namee2 == name2)
				{
					system("cls");
					cout<<"\n\n\t\t\tBike Name : "<<name2;
					cout<<"\n\n\t\t\tYear : "<<year2;
					cout<<"\n\n\t\t\tRange : "<<range2;
					count2++;
					break;	
				}
				file2>>name2>>year2>>range2;
			}
			file2.close();
			if(count2 == 0)
			cout<<"\n\n Bike name Not Found...";
		}
	}
	else 
	{
		cout<<"\n!!!Invalid Input!!!";
		sleep(2);
		goto label2;
	}
}	
void bbike::update_bikes()
{
	label3:
	system("cls");
	cout<<"\n******Updating Bike******"<<endl;
	cout<<"\nChoose which bike would you like to update........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		fstream file1,temp1;
		int year1,yr1,max_power1,mp1,max_torque1,mt1,count1=0;
		string name1,namee1;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		temp1.open("D://petrolBike1.txt",ios::app|ios::out);
		file1.open("D://petrolBike.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>name1;
			file1>>namee1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(name1 == namee1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
					cout<<"\n\n\t\t\tYear : ";
					cin>>yr1;
					cout<<"\n\n\t\t\tMax_power: ";
					cin>>mp1;
					cout<<"\n\n\t\t\tMax_torque: ";
					cin>>mt1;
					temp1<<" "<<name1<<" "<<yr1<<" "<<mp1<<" "<<mt1<<"\n";
					count1++;
				}
				else
				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
				file1>>namee1>>year1>>max_power1>>max_torque1;
			}
			if(count1 == 0)
			cout<<"\n\n Bike ID Not Found...";
		}
		file1.close();
		temp1.close();
		remove("D://petrolBike.txt");
		rename("D://petrolBike1.txt","D://book.txt");
	}
	else if ( ch == 2)
	{
		system("cls");
		fstream file2,temp2;
		int year2,yr2,range2,r2,count2=0;
		string name2,namee2;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		temp2.open("D://electricBike1.txt",ios::app|ios::out);
		file2.open("D://electricBike.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>name2;
			file2>>namee2>>year2>>range2;
			while(!file2.eof())
			{
				if(name2 == namee2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
					cout<<"\n\n\t\t\tYear : ";
					cin>>yr2;
					cout<<"\n\n\t\t\tRange: ";
					cin>>r2;
					temp2<<" "<<name2<<" "<<yr2<<" "<<r2<<"\n";
					count2++;
				}
				else
				temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
				file2>>namee2>>year2>>range2;
			}
			if(count2 == 0)
			cout<<"\n\n Bike ID Not Found...";
		}
		file2.close();
		temp2.close();
		remove("D://electricBike.txt");
		rename("D://electricBike1.txt","D://book.txt");
	}
	else 
	{
		cout<<"\n!!!Invalid Choice!!!";
		sleep(2);
		goto label3;
	}
}
	
void bbike::del_bikes()
{
	label4:
	system("cls");
	cout<<"******Delete Bike******"<<endl;
	cout<<"\nChoose which bike would you like to delete........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if( ch==1)
	{
		fstream file1,temp1;
		int year1,max_power1,max_torque1,count1=0;
		string name1,namee1;
		temp1.open("D://petrolBike1.txt",ios::app|ios::out);
		file1.open("D://petrolBike.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>namee1;
			file1>>namee1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(name1 == namee1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tDelete Bike Record";
					cout<<"\n\n One Bike is Deleted Successfully...";
					count1++;
				}
				else
				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
				file1>>namee1>>year1>>max_power1>>max_torque1;
			}
			if(count1 == 0)
			cout<<"\n\n Bike Name Not Found...";
		}
		file1.close();
		temp1.close();
		remove("D://petrolBike.txt");
		rename("D://petrolBike1.txt","D://book.txt");
	}
	else if (ch == 2)
	{
		system("cls");
		fstream file2,temp2;
		int year2,range2,count2=0;
		string name2,namee2;
		temp2.open("D://electricBike1.txt",ios::app|ios::out);
		file2.open("D://electricBike.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
		cout<<"\n\n Bike Name : ";
		cin>>namee2;
		file2>>namee2>>year2>>range2;
		while(!file2.eof())
		{
			if(name2 == namee2)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tDelete Bike Record";
				cout<<"\n\n One Bike is Deleted Successfully...";
				count2++;
			}
			else
			temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
			file2>>namee2>>year2>>range2;
		}
		if(count2 == 0)
		cout<<"\n\n Bike Name Not Found...";
	}
	file2.close();
	temp2.close();
	remove("D://petrolBike.txt");
	rename("D://petrolBike1.txt","D://book.txt");
	}
	else
	{
		cout<<"\n!!!Invalid Input!!!";
		sleep(2);
		goto label4;
	}
}
int main()
{
	int c;
	cout<<"\n\t\t\t\t\t\t**************************************************************";
	cout<<"\n\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\xdb|      _________        ___________          ________      |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |         |     |    ___    |        /         \\     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |   ___   |     |   |   |   |       |    __    |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |   |  |     |   |   |   |       |   |  |___|     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |   |  |     |   |___|   |       |   |_____       |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |  /  /      |    _______|       |         \\      |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |  \\  \\      |   | \\   \\          \\______   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |   |  |     |   |  \\   \\               |   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |  |___|  |     |   |   \\   \\        ______/   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |         |     |   |    \\   \\      |          |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\xdb|     |_________|     |___|     \\___\\     |_________/      |\xdb";
	cout<<"\n\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    PRESS ANY KEY TO CONTINUE\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t**************************************************************";
	sleep(6);
	system("cls");                                                      
	cout<<"\n\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      Press 1 for ADMIN LOGIN     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      Press 2 for REGISTER        |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      Press 3 for USER LOGIN      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      Enter your choice :         |\xdb";
	cout<<"\n\t\t\t\t\t\t\t-------------------------------------"<<endl;
	cin>>c;
	cout<<endl;
	
	switch(c)
	{
		case 1:
			adminlogin();
			break;
			
		case 2 :
			userregister();
			break;
			
		case 3 :
			userlogin();
			break;	
			
		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above!!! \n"<<endl;
			main();
	}
}
/******************************************************FunctionDefinition**************************************************/
/******************************************************AdminLogin**************************************************/
void adminlogin()
{
   system("cls");
   string pass ="";
   char ch;
   cout<<"\n\t\t\t\t\t\t\t\t\xdb|     Admin Login     |\xdb";	
   cout<<"\n\n\t\t\t\t\t\t\t Enter the password:";
   ch = getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "pass")
   {
      cout << "\n\n\n\t\t\t\t\t\t\t\t\xdb|     Access Granted!     |\xdb\n";
   }
   else
   {
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      exit (0);
   }
   
   
}
/******************************************************UserRegister**************************************************/
void userregister()
{
	string ruserID,rpassword,rid,rpass;
	system("cls");
	cout<<"\t\t\t Enter the username : ";
	cin>>ruserID;
	cout<<"\t\t\t Enter the password : ";
	cin>>rpassword;
	
	
	ofstream f1("record.txt",ios::app);
	f1<<ruserID<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t Registration is succesfull! \n ";
	
}
/******************************************************UserLogin**************************************************/
void userlogin()
{
	int count;
	string userID,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please enter the username and password: ";
	cout<<"\t\t\t USERNAME : ";
	cin>>userID;
	cout<<"\t\t\t PASSWORD : ";
	cin>>password;
	
	ifstream input("record.txt");//to check whether username and pass already exist in our records
	while(input>>id>>pass)//
	{
		if(id==userID && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1)
	{
		cout<<userID<<"\n Your LOGIN is succesfull! \n";
		
	}
	else
	{
		cout<<"\n LOGIN ERROR!! \n Please check your username and password\n";
		main();
	}
}
