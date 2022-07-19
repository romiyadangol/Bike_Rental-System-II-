#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;

void adminlogin();
void userregister();
void userlogin();

int main()
{
	int c;
	cout<<"\t\t\t-------------------------------------------------------\n\n\n";
	cout<<"\t\t\t-------------------WELCOME-----------------------------\n\n\n";
	cout<<"\t\t\t-------------------MENU-----------------------------\n\n\n";
	cout<<"                                                         \n";
	cout<<"\t |Press 1 for ADMIN LOGIN |"<<endl;   
	cout<<"\t |Press 2 for REGISTER |"<<endl; 
	cout<<"\t |Press 3 for USER LOGIN |"<<endl;
	cout<<"\n\t\t Please enter your choice : ";
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
void adminlogin()
{

   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       BIKE RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t    ADMIN LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
   }
   else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
   }
   main();
}

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
	main();
}
  
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
		main();
	}
	else
	{
		cout<<"\n LOGIN ERROR!! \n Please check your username and password\n";
		main();
	}
}