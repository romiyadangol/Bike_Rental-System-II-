#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class bbike
{
	public:
		int ch,ch1;
		void input(); 
		void add_bikes();
		void show_bikes();
		void check_bikes();
		void update_bikes();
		void del_bikes();
};
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
		first:
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
			goto first;
		}
	}
	
	void bbike::show_bikes()
	{
		second:
		system("cls");
		cout<<"\n******Displaying bike******"<<endl;
		cout<<"\nChoose which bike list would you like to display........";
		cout<<"\n\n1.Petrol Bike"<<endl;
		cout<<"\n2.Electric Bike"<<endl;
		cout<<"\nEnter your choice :";
		cin>>ch1;
		if(ch1 == 1)
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
		else if (ch1==2)
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
			goto second;
		}	
	}
	void bbike::check_bikes()
	{
		system("cls");
		fstream file;
		int year,max_power,max_torque,count=0;
		string name,namee;
		file.open("D://bike.txt",ios::in);
		if(!file)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name: : ";
			cin>>namee;
			file>>name>>year>>max_power>>max_torque;
			while(!file.eof())
			{
				if(namee == name)
				{
					system("cls");
					cout<<"\n\n\t\t\tBike Name : "<<name;
					cout<<"\n\n Year : "<<year;
					cout<<"\n\n\t\t\tMax_power : "<<max_power;
					cout<<"\n\n\t\t\tMax_torque : "<<max_torque;
					count++;
					break;	
				}
				file>>name>>year>>max_power>>max_torque;
			}
			file.close();
			if(count == 0)
			cout<<"\n\n Bike name Not Found...";
		}
	}
	
	void bbike::update_bikes()
	{
		system("cls");
		fstream file,file1;
		int year,yr,max_power,mp,max_torque,mt,count=0;
		string name,namee;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		file1.open("D://bike1.txt",ios::app|ios::out);
		file.open("D://bike.txt",ios::in);
		if(!file)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>name;
			file>>namee>>year>>max_power>>max_torque;
			while(!file.eof())
			{
				if(name == namee)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
					cout<<"\n\n\t\t\tYear : ";
					cin>>yr;
					cout<<"\n\n Max_power: ";
					cin>>mp;
					cout<<"\n\n Max_torque: ";
					cin>>mt;
					file1<<" "<<name<<" "<<yr<<" "<<mp<<" "<<mt<<"\n";
					count++;
				}
				else
				file1<<" "<<namee<<" "<<year<<" "<<max_power<<" "<<max_torque<<"\n";
				file>>namee>>year>>max_power>>max_torque;
			}
			if(count == 0)
			cout<<"\n\n Bike ID Not Found...";
		}
		file.close();
		file1.close();
		remove("D://bike.txt");
		rename("D://bike1.txt","D://book.txt");
	}
	
	void bbike::del_bikes()
	{
		system("cls");
		fstream file,file1;
		int year,max_power,max_torque,count=0;
		string name,namee;
		file1.open("D://bike1.txt",ios::app|ios::out);
		file.open("D://bike.txt",ios::in);
		if(!file)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>namee;
			file>>namee>>year>>max_power>>max_torque;
			while(!file.eof())
			{
				if(name == namee)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tDelete Bike Record";
					cout<<"\n\n One Bike is Deleted Successfully...";
					count++;
				}
				else
				file1<<" "<<namee<<" "<<year<<" "<<max_power<<" "<<max_torque<<"\n";
				file>>namee>>year>>max_power>>max_torque;
			}
			if(count == 0)
			cout<<"\n\n Bike Name Not Found...";
		}
		file.close();
		file1.close();
		remove("D://bike.txt");
		rename("D://bike1.txt","D://book.txt");
	}
main()
{
	int choice;
	char x;
	bbike b;
	label:
	b.input();
	cout<<"\n\n Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			do
			{
			b.add_bikes();
			cout<<"\n\n Do You Want to Add another Bike (y,n) : ";
			cin>>x;
		    }while(x == 'y');
			break;
		case 2:
			b.show_bikes();
			break;
		case 3:
			b.check_bikes();
			break;
		case 4:
			b.update_bikes();
			break;
		case 5:
			b.del_bikes();
			break;
		case 6:
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	getch();
	goto label;
}
