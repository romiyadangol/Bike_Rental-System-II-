#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip>
#include<unistd.h>
using namespace std;
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
        sleep(2);
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
					cout<<"\nMax power = 12.5 ps";
					cout<<"\nMax torque = 13.1 nm";
                    cout<<"\nBike no = 3";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
					cout<<"\n\nPer day rent is : Rs 1800";
					cout<<"\n\nTotal rent is :"<<1800*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 2:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda XR150L";
                    cout<<"\nYear : 2018";
                    cout<<"\nMax power = 12.14 hp";
                    cout<<"\nMax torque = 12.5 nm";
                    cout<<"\nBike no = 4";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
                    cout<<"\n\nPer day rent is : Rs 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 3:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Hero Xpulse";
                    cout<<"\nYear : 2020";
                    cout<<"\nMax power = 17.8 bhp";
                    cout<<"\nMax torque = 16.44 nm";
                    cout<<"\nBike no = 5";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
                    cout<<"\n\nPer day rent is : Rs 1700";
                    cout<<"\n\nTotal rent is :"<<1700*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 4:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Tracker 250";
                    cout<<"\nYear : 2021";
                    cout<<"\nMax power = 20 bhp";
                    cout<<"\nMax torque = 17 nm";
                    cout<<"\nBike no = 6";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
                    cout<<"\n\nPer day rent is : Rs 1400";
                    cout<<"\n\nTotal rent is :"<<1400*rentDay;
                    calcuRent1();
                    warning1();
                   
                break;
             case 5:
        	        cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Royal Enfield Classic 350";
					cout<<"\nYear : 2018";
					cout<<"\nMax power = 20.4 ps";
					cout<<"\nMax torque = 27 nm";
                    cout<<"\nBike no = 5";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
					cout<<"\n\nPer day rent is : Rs 2000";
					cout<<"\n\nTotal rent is :"<<2000*rentDay;
					calcuRent1();
                    warning1();
                    
				break ; 
            case 6:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Jawa Classic";
					cout<<"\nYear : 2020";
					cout<<"\nMax power = 26.51 ps";
					cout<<"\nMax torque = 28 nm";
                    cout<<"\nBike no = 6";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
					cout<<"\n\nPer day rent is : Rs 2200";
					cout<<"\n\nTotal rent is :"<<2200*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 7:  
					
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Pulsar NS 200";
					cout<<"\nYear : 2020";
					cout<<"\nMax power = 24.4 ps";
					cout<<"\nMax torque = 18.5 nm";
                    cout<<"\nBike no = 7";
					cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
					cout<<"\n\nPer day rent is : 1800";
					cout<<"\n\nTotal rent is :"<<1800*rentDay;
					calcuRent1();
                    warning1();
                    
                break;
            case 8:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda Hornet";
                    cout<<"\nYear : 2017";
                    cout<<"\nMax power = 17.26 bhp";
                    cout<<"\nMax torque = 16.1 nm";
                    cout<<"\nBike no = 8";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
                    cout<<"\n\nPer day rent is : 1500";
                    cout<<"\n\nTotal rent is :"<<1500*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 9:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Apache RTR 200";
                    cout<<"\nYear : 2022";
                    cout<<"\nMax power = 20.2 ps";
                    cout<<"\nMax torque = 16.8 nm";
                    cout<<"\nBike no = 9";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
                    cout<<"\n\nPer day rent is : 1700";
                    cout<<"\n\nTotal rent is :"<<1700*rentDay;
                    calcuRent1();
                    warning1();
                    
                break;
            case 10:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Yamaha FZS V2";
                    cout<<"\nYear : 2018";
                    cout<<"\nMax power = 13.1 ps";
                    cout<<"\nMax torque = 12.8 nm";
                    cout<<"\nBike no = 10";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\nDeposit amount = Rs 100,000";
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
        cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
                    cout<<"\nDeposit amount = Rs 50,000";
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
        cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
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
int main()
{
    int num;
    int choice;
    normal n1;
    electric e1;
    cout<<"\n\n\n\n\n\n\n.......................Welcome to our system........................";
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
    return 0;
}
