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
/*****************************************************ClassCreationForMain**************************************************/
class bike{
    public :
    string customer_name;
    int contact_no;
    int citizenship_no;
    int customer_age;
    int ch1;
    int ch2;
};
class rent : public bike{
    public :
    int rentDay;
    int amt;
    int rentFee1;
    int rentFee2;
    int advanceAmt;
    void calcuRent1()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\nEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch1==1)
        {
            rentFee1=rentDay*1800;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==2)
        {
            rentFee1=rentDay*1500;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==3)
        {
            rentFee1=rentDay*1700;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==4)
        {
            rentFee1=rentDay*1400;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==5)
        {
            rentFee1=rentDay*2000;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==6)
        {
            rentFee1=rentDay*2200;
            amt=rentFee1-advanceAmt;  
        }
        if(ch1==7)
        {
        	rentFee1=rentDay*1800;
        	amt=rentFee1-advanceAmt;
		}
		if(ch1==8)
		{
			rentFee1=rentDay*1500;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==9)
		{
			rentFee1=rentDay*1700;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==10)
		{
			rentFee1=rentDay*1400;
			amt=rentFee1-advanceAmt;
		}
    }
    void calcuRent2()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\nEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch2==1)
        {
            rentFee2=rentDay*2200;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==2)
        {
            rentFee2=rentDay*2000;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==3)
        {
            rentFee2=rentDay*1700;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==4)
        {
            rentFee2=rentDay*1500;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==5)
        {
            rentFee2=rentDay*1700;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==6)
        {
            rentFee2=rentDay*1500;
            amt=rentFee2-advanceAmt;
            
        }
    }
};
class normal : public rent{
    public:
    void get_bike1()
    {
    	system("cls");
        cout<<"You have chosen normal bike for the rental.....";
        label1:
        sleep(1);
        cout<<"\nThe list of bike we have are :"<<endl;
        cout<<"1.Yamaha XTZ 150"<<endl;
        cout<<"2.Honda XR 150L"<<endl;
        cout<<"3.Hero Xpulse"<<endl;
        cout<<"4.Tracker 250"<<endl;
        cout<<"5.Royal Enfield Classic 350"<<endl;
        cout<<"6.Jawa Classic"<<endl;
        cout<<"7.Pulsar NS 200"<<endl;
        cout<<"8.Honda Hornet"<<endl;
        cout<<"9.Apache RTR 200"<<endl;
        cout<<"10.Yamaha FZS  v2"<<endl;
        cout<<"\n...............................................................";
        cout<<"\n\nEnter your choice from(1-10):";
        cin>>ch1;
        system("cls");
        switch(ch1)
        {
            case 1:   
            		
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Yamaha XTZ 150";
					cout<<"\nYear : 2020";
                    cout<<"\nBike no = 3";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : Rs 1800";
					cout<<"\n\nTotal rent is :"<<1800*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 2:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda XR150L";
                    cout<<"\nYear : 2018";
                    cout<<"\nBike no = 4";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : Rs 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 3:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Hero Xpulse";
                    cout<<"\nYear : 2020";
                    cout<<"\nBike no = 5";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : Rs 1700";
                    cout<<"\n\nTotal rent is :"<<1700*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 4:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Tracker 250";
                    cout<<"\nYear : 2021";
                    cout<<"\nBike no = 6";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : Rs 1400";
                    cout<<"\n\nTotal rent is :"<<1400*rentDay;
                    calcuRent1();
                    warning1();
                   
                break;
             case 5:
        	        cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Royal Enfield Classic 350";
					cout<<"\nYear : 2018";
                    cout<<"\nBike no = 5";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : Rs 2000";
					cout<<"\n\nTotal rent is :"<<2000*rentDay;
					calcuRent1();
                    warning1();
                    
				break ; 
            case 6:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Jawa Classic";
					cout<<"\nYear : 2020";
                    cout<<"\nBike no = 6";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : Rs 2200";
					cout<<"\n\nTotal rent is :"<<2200*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 7:  
					
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Pulsar NS 200";
					cout<<"\nYear : 2020";
                    cout<<"\nBike no = 7";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : 1800";
					cout<<"\n\nTotal rent is :"<<1800*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 8:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda Hornet";
                    cout<<"\nYear : 2017";
                    cout<<"\nBike no = 8";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 9:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Apache RTR 200";
                    cout<<"\nYear : 2022";
                    cout<<"\nBike no = 9";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1700";
                    cout<<"\n\nTotal rent is :"<<1700*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 10:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Yamaha FZS V2";
                    cout<<"\nYear : 2018";
                    cout<<"\nBike no = 10";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 30,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1400";
                    cout<<"\n\nTotal rent is :"<<1400*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;    
            default :
            	
                cout<<"You have entered Invalid choice !!!";
                cout<<"!!!Try again!!!";
                goto label1;
            break;
        }        
    }
    void warning1()
    {
    	system("cls");
        cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
        cout << "\t\t	| MINIMUM RENT TIME IS 3 HRS                              |"<<endl;
        cout << "\t\t	| INCASE ACCIDENT , ALL COSTING IS PAID BY DRIVER         |"<<endl;
        cout << "\t\t	| PREPARE HARDCOPY DOCUMENT OF THE ITEM AS BELOW          |"<<endl;
        cout << "\t\t	| DOCUMENT IS NECESSARY WHILE TAKING CHARGE OF BIKE       |"<<endl;
        cout << "\t\t	| \t\tORIGINAL LICENCE                          |"<<endl;
        cout << "\t\t	| \t\tCOPY OF LICENCE                           |"<<endl;
        cout << "\t\t	| \t\tCOPY OF CITIZENSHIP                       |"<<endl;
        cout << "\t\t	| \t\tDEPOSIT BASED ON(BIKE TYPE)               |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| \t\t      !!!Safe drive!!!                    |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        sleep(12);
        display1();
    }
    void display1()
    {
		system("cls");
		cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch1<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentDay<<" |"<<endl;
        cout << "\t\t	| Your Advance Amount is :"<<"-------|"<<setw(10)<<advanceAmt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total (Due) Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    }
};
class electric : public rent{
    public :    
    void get_bike2()
    {
    	system("cls");
        cout<<"You have chosen electric bike for the rental....";
        label2:
        sleep(2);
        cout<<"\nThe list of bike we have are :"<<endl;
        cout<<"1.Yatri bike "<<endl;
        cout<<"2.Super Soco bike "<<endl;
        cout<<"3.NIU scooter"<<endl;
        cout<<"4.Bella scooter"<<endl;
        cout<<"5.Yadea G5 scooter"<<endl;
        cout<<"6.Doohan scooter"<<endl;
        cout<<"\n...............................................................";
        cout<<"\n\nEnter your choice from(1-6):";
        cin>>ch2;
        system("cls");
        switch(ch2)
        {
        case 1:
        	        cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Yatri p1";
					cout<<"\nYear : 2021";
					cout<<"\nMax range = 110km";
                    cout<<"\nBike no = 1";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : Rs 2200";
					cout<<"\n\nTotal rent is :"<<2200*rentDay;
					calcuRent2();
                    warning2();
                    
				break ; 
            case 2:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Super soco TSX";
					cout<<"\nYear : 2020";
					cout<<"\nMax range = 80 km";
                    cout<<"\nBike no = 2";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : Rs 2000";
					cout<<"\n\nTotal rent is :"<<2000*rentDay;
					calcuRent2();
                    warning2();
                    
                break;
            case 3:  
					
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : NIU scooter";
					cout<<"\nYear : 2020";
					cout<<"\nMax range = 90-130km";
                    cout<<"\nBike no = 3";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
					cout<<"\n\nPer day rent is : 1700";
					cout<<"\n\nTotal rent is :"<<1700*rentDay;
					calcuRent2();
                    warning2();
                    
                break;
            case 4:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Bella scooter";
                    cout<<"\nYear : 2018";
                    cout<<"\nMax range = 75 km";
                    cout<<"\nBike no = 4";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent2();
                    warning2();
                    
                break;
            case 5:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Yadea G5 Scooter ";
                    cout<<"\nYear : 2021";
                    cout<<"\nMax range = 80 km";
                    cout<<"\nBike no = 5";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1500";
                    cout<<"\n\nTotal rent is :"<<1700*rentDay;
                    calcuRent2();
                    warning2();
                    
                break;
            case 6:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Doohan Scooter";
                    cout<<"\nYear : 2022";
                    cout<<"\nMax range = 50 km";
                    cout<<"\nBike no = 6";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\n|**************************|";
                    cout<<"\n|Deposit amount = Rs 20,000|";
                    cout<<"\n|**************************|";
                    cout<<"\n\nPer day rent is : 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent2();
                    warning2();
                    
                break;    
            default :
            	
                cout<<"You have entered Invalid choice !!!";
                cout<<"!!!Try again!!!";
                goto label2;
            break; 
        }
    }
    void warning2()
    {	
    	system("cls");
    	cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
        cout << "\t\t	| MINIMUM RENT TIME IS 3 HRS                              |"<<endl;
        cout << "\t\t	| INCASE ACCIDENT , ALL COSTING IS PAID BY DRIVER         |"<<endl;
        cout << "\t\t	| PREPARE HARDCOPY DOCUMENT OF THE ITEM AS BELOW          |"<<endl;
        cout << "\t\t	| DOCUMENT IS NECESSARY WHILE TAKING CHARGE OF BIKE       |"<<endl;
        cout << "\t\t	| \t\tORIGINAL LICENCE                          |"<<endl;
        cout << "\t\t	| \t\tCOPY OF LICENCE                           |"<<endl;
        cout << "\t\t	| \t\tCOPY OF CITIZENSHIP                       |"<<endl;
        cout << "\t\t	| \t\tDEPOSIT BASED ON(BIKE TYPE)               |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| \t\t      !!!Safe drive!!!                    |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        sleep(12);
        display2();
    }
    void display2()
    {
        system("cls");
        cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch2<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentDay<<" |"<<endl;
        cout << "\t\t	| Your Advance Amount is :"<<"-------|"<<setw(10)<<advanceAmt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total (Due) Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    }
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
	
	cout<<"\n\t\t\t\t\t\t\t**************************************************************";
	cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      _________       ___________          ________       |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |    ___    |        /         \\     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |   ___   |     |   |   |   |       |    __    |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |   |   |       |   |  |___|     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |___|   |       |   |_____       |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  /  /      |    _______|       |         \\      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  \\  \\      |   | \\   \\          \\______   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |  \\   \\               |   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |___|  |     |   |   \\   \\        ______/   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |   |    \\   \\      |          |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |_________|     |___|     \\___\\     |_________/      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    PRESS ANY KEY TO CONTINUE\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t\t**************************************************************";
	sleep(6);
	system("cls");                                                      
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 1 for ADMIN LOGIN     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 2 for REGISTER        |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 3 for USER LOGIN      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Enter your choice :         |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------"<<endl;
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
			cout<<"\t\t\t\t\t\t\t\tPlease select from the options given above!!! \n"<<endl;
			main();
	}
}
/******************************************************FunctionDefinition**************************************************/
/******************************************************AdminLogin**************************************************/
void adminlogin()
{
   system("cls");
   bbike b;
   int choice;
   char x;
   string pass ="";
   char ch;
   cout<<"\n\t\t\t\t\t\t\t\t\xdb|     Admin Login     |\xdb";	
   cout<<"\n\n\t\t\t\t\t\t\tEnter the password:";
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
      label:
      b.input();
      cout<<"\n\n\t\t\t\t\t\t\t\xdb|Your Choice :|\xdb";
	  cin>>choice;
	  switch(choice)
	{
		case 1:
			do
			{
			b.add_bikes();
			cout<<"\n\n\t\t\t\t\t\t\t\tDo You Want to Add another Bike (y,n) : ";
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
			cout<<"\n\n\t\t\t\t\t\t\t\t\xdbInvalid Value...Please Try Again...\xdb";
	}
	getch();
	goto label;
   }
   else
   {
      cout <<"\n\n\t\t\t\t\t\t\t\xdb Access Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n\xdb";
      exit (0);
   }
   
   
}
/******************************************************UserRegister**************************************************/
void userregister()
{
	string ruserID,rpassword,rid,rpass;
	system("cls");
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the username : ";
	cin>>ruserID;
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the password : ";
	cin>>rpassword;
	
	
	ofstream f1("record.txt",ios::app);
	f1<<ruserID<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t\t\t\t\t\t\xdbRegistration is succesfull!\xdb";
	
}
/******************************************************UserLogin**************************************************/
void userlogin()
{
	int count;
	int num;
    int choice;
    normal n1;
    electric e1;
	string userID,password,id,pass;
	system("cls");
	cout<<"\n\t\t\t\t\t\t\t\t\xdbPlease enter the username and password\xdb";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tUSERNAME : ";
	cin>>userID;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tPASSWORD : ";
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
		cout<<userID<<"\n\t\t\t\t\t\tYour LOGIN is succesfull! \n";
		sleep(1);
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t**************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
		cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\xdb|      _________       ___________          ________        |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |    ___    |        /         \\     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |   ___   |     |   |   |   |       |    __    |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |   |   |       |   |  |___|     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |___|   |       |   |_____       |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  /  /      |    _______|       |         \\      |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  \\  \\      |   | \\   \\          \\______   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |  \\   \\               |   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |___|  |     |   |   \\   \\        ______/   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |   |    \\   \\      |          |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |_________|     |___|     \\___\\     |_________/      |\xdb";
		cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    PRESS ANY KEY TO CONTINUE\t\t  \xdb\xdb\xdb\xdb";
		cout<<"\n\t\t\t\t\t\t\t**************************************************************";
		sleep(3);
		system("cls");
		up:
		cout<<"\n\nWe have two categories in Bike Rental System";
		cout<<"\n1.Normal Bike";
		cout<<"\n2.Electric Bike";
		cout<<"\nchoose a category (1 or 2) :";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			//cout<<"\nEnter how many vehicle you want to take in rent :";
			//cin>>num;
			//fflush(stdin);
			cout<<"\nEnter for how many days you want to rent the vehicle:";
			cin>>n1.rentDay;
			fflush(stdin);
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>n1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>n1.customer_age;
			fflush(stdin);
			cout<<"\nEnter the contact no :";
			cin>>n1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
			cin>>n1.citizenship_no;
			fflush(stdin);
		    cout<<"\n\n\nLOADING................";
			sleep(3);
		    n1.get_bike1();
		}
		 else if(choice==2)
		{
			system("cls");
			//cout<<"\nEnter how many vehicle you want to take in rent :";
			//cin>>num;
			//fflush(stdin);
			cout<<"\nEnter for how many days you want to rent the vehicle:";
			cin>>e1.rentDay;
			fflush(stdin);
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>e1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>e1.customer_age;
			fflush(stdin);
			cout<<"\nEnter the contact no :";
			cin>>e1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
		 	cin>>e1.citizenship_no;
			fflush(stdin);
		    cout<<"\n\n\nLOADING................";
			sleep(3);
		    e1.get_bike2();
		}
		else
		{
			cout<<"!!!Invalid Choice!!!";
			goto up;
		}
		
	}
	else
	{
		cout<<"\n LOGIN ERROR!! \n Please check your username and password\n";
		main();
	}
}
