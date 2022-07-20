#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip>
#include<unistd.h>
using namespace std;
class bike{
    public:
    string customer_name;
    int contact_no;
    int citizenship_no;
    int customer_age;
    int ch1;
    int ch2;
};
class rent : public bike{
    public:
    int rentDay;
    int amt;
    int rentFee1;
    int rentFee2;
    int advanceAmt;
    void calcuRent1()
    {
    	cout<<"\n\n****************************************************************";
    	cout<<"\n\nRent calculation for Dirt Bike.........................."<<endl;
    	sleep(3);
        cout<<"\n\nEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch1==1)
        {
            rentFee1=rentDay*2200;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==2)
        {
            rentFee1=rentDay*2100;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==3)
        {
            rentFee1=rentDay*1800;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==4)
        {
            rentFee1=rentDay*1500;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==5)
        {
            rentFee1=rentDay*1700;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==6)
        {
            rentFee1=rentDay*1400;
            amt=rentFee1-advanceAmt;
            
        }
    }
    void calcuRent2()
    {
    	cout<<"\n\n****************************************************************";
    	cout<<"\n\nRent calculation for Standard Bike.........................."<<endl;
    	sleep(3);
        cout<<"\n\nEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch2==1)
        {
            rentFee2=rentDay*2000;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==2)
        {
            rentFee2=rentDay*2200;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==3)
        {
            rentFee2=rentDay*1800;
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
            rentFee2=rentDay*1400;
            amt=rentFee2-advanceAmt;
            
        }
    }
};
class dirt : public rent{
    public: 
    void get_bike1()
    {
    	system("cls");
        cout<<"You have chosen dirt bike for the rental.....";
        label1:
        sleep(2);
        cout<<"\nThe list of bike we have are :"<<endl;
        cout<<"1.Cross X 250R"<<endl;
        cout<<"2.Crosssfire RM"<<endl;
        cout<<"3.yamaha XTZ 150"<<endl;
        cout<<"4.Honda XR 150L"<<endl;
        cout<<"5.Hero Xpulse"<<endl;
        cout<<"6.Tracker 250"<<endl;
        cout<<"\n...............................................................";
        cout<<"\n\nEnter your choice from(1-6):";
        cin>>ch1;
        system("cls");
        switch(ch1)
        {
            case 1:
            		
        	        cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Cross X 250R";
					cout<<"\nYear : 2019";
					cout<<"\nMax power = 31.9 hp";
					cout<<"\nMax torque = 29.8 nm";
                    cout<<"\nBike no = 1";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : Rs 2200";
					calcuRent1();	
                    display1();						
				break ; 
            case 2:
            		
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Crossfire RM";
					cout<<"\nYear : 2018";
					cout<<"\nMax power = 25.83 ps";
					cout<<"\nMax torque = 22.5 nm";
                    cout<<"\nBike no = 2";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : Rs 2100";
					calcuRent1();
                    display1();
                break;
            case 3:   
            		
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Yamaha XTZ 150";
					cout<<"\nYear : 2020";
					cout<<"\nMax power = 12.5 ps";
					cout<<"\nMax torque = 13.1 nm";
                    cout<<"\nBike no = 3";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : Rs 1800";
					calcuRent1();
                    display1();
                break;
            case 4:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda XR150L";
                    cout<<"\nYear : 2018";
                    cout<<"\nMax power = 12.14 hp";
                    cout<<"\nMax torque = 12.5 nm";
                    cout<<"\nBike no = 4";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : Rs 1500";
                    calcuRent1();
                    display1();
                break;
            case 5:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Hero Xpulse";
                    cout<<"\nYear : 2020";
                    cout<<"\nMax power = 17.8 bhp";
                    cout<<"\nMax torque = 16.44 nm";
                    cout<<"\nBike no = 5";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : Rs 1700";
                    calcuRent1();
                    display1();
                break;
            case 6:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Tracker 250";
                    cout<<"\nYear : 2021";
                    cout<<"\nMax power = 20 bhp";
                    cout<<"\nMax torque = 17 nm";
                    cout<<"\nBike no = 6";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : Rs 1400";
                    calcuRent1();
                    display1();
                break;
            default :
            	
                cout<<"You have entered Invalid choice !!!";
                cout<<"!!!Try again!!!";
                goto label1;
            break;
        }        
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
class standard : public rent{
    public:
    void get_bike2()
    {
    	system("cls");
        cout<<"You have chosen standard bike for the rental....";
        label2:
        sleep(2);
        cout<<"\nThe list of bike we have are :"<<endl;
        cout<<"1.Royal Enfield Classic 350"<<endl;
        cout<<"2.Jawa Classic"<<endl;
        cout<<"3.Pulsar NS 200"<<endl;
        cout<<"4.Honda Hornet"<<endl;
        cout<<"5.Apache RTR 200"<<endl;
        cout<<"6.Yamaha FZS  v2"<<endl;
        cout<<"\n...............................................................";
        cout<<"\n\nEnter your choice from(1-6):";
        cin>>ch2;
        system("cls");
        switch(ch2)
        {
        case 1:
        	        cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Royal Enfield Classic 350";
					cout<<"\nYear : 2018";
					cout<<"\nMax power = 20.4 ps";
					cout<<"\nMax torque = 27 nm";
                    cout<<"\nBike no = 1";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : Rs 2000";
					calcuRent2();
                    display2();
				break ; 
            case 2:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Jawa Classic";
					cout<<"\nYear : 2020";
					cout<<"\nMax power = 26.51 ps";
					cout<<"\nMax torque = 28 nm";
                    cout<<"\nBike no = 2";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : Rs 2200";
					calcuRent2();
                    display2();
                break;
            case 3:  
					
                    cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Pulsar NS 200";
					cout<<"\nYear : 2020";
					cout<<"\nMax power = 24.4 ps";
					cout<<"\nMax torque = 18.5 nm";
                    cout<<"\nBike no = 3";
					cout<<"\nWell conditioned with insurance.";
					cout<<"\n\nPer day rent is : 1800";
					calcuRent2();
                    display2();
                break;
            case 4:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name :Honda Hornet";
                    cout<<"\nYear : 2017";
                    cout<<"\nMax power = 17.26 bhp";
                    cout<<"\nMax torque = 16.1 nm";
                    cout<<"\nBike no = 4";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : 1500";
                    calcuRent2();
                    display2();
                break;
            case 5:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Apache RTR 200";
                    cout<<"\nYear : 2022";
                    cout<<"\nMax power = 20.2 ps";
                    cout<<"\nMax torque = 16.8 nm";
                    cout<<"\nBike no = 5";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : 1700";
                    calcuRent2();
                    display2();
                break;
            case 6:
            		
                    cout<<"\nYou have successfully chosen a bike :";
                    cout<<"\nBike name : Yamaha FZS V2";
                    cout<<"\nYear : 2018";
                    cout<<"\nMax power = 13.1 ps";
                    cout<<"\nMax torque = 12.8 nm";
                    cout<<"\nBike no = 6";
                    cout<<"\nWell conditioned with insurance.";
                    cout<<"\n\nPer day rent is : 1400";
                    calcuRent2();
                    display2();
                break;
            default :
            	
                cout<<"You have entered Invalid choice !!!";
                cout<<"!!!Try again!!!";
                goto label2;
            break; 
        }
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
    dirt d1;
    standard s1;
    cout<<"\n\n\n\n\n\n\n.......................Welcome to our system........................";
    sleep(3);
    system("cls");
    up:
    cout<<"\n\nWe have two categories in Bike Rental System";
    cout<<"\n1.Dirt Bike";
    cout<<"\n2.Standard Bike";
    cout<<"\nchoose a category (1 or 2) :";
    cin>>choice;
    if(choice==1)
    {
    	system("cls");
    	//cout<<"\nEnter how many vehicle you want to take in rent :";
    	//cin>>num;
    	//fflush(stdin);
    	cout<<"\nEnter for how many days you want to rent the vehicle:";
    	cin>>d1.rentDay;
    	fflush(stdin);
    	cout<<"\nCollecting personal details...............";
    	sleep(1);
    	system("cls");
    	cout<<"\nEnter your name :";
    	cin>>d1.customer_name;
    	fflush(stdin);
    	cout<<"\nEnter your age :";
    	cin>>d1.customer_age;
    	fflush(stdin);
    	cout<<"\nEnter the contact no :";
    	cin>>d1.contact_no;
    	fflush(stdin);
    	cout<<"\nEnter the citizenship no :";
    	cin>>d1.citizenship_no;
    	fflush(stdin);
    	sleep(3);
        d1.get_bike1();
    }
   	 else if(choice==2)
    {
    	system("cls");
    	//cout<<"\nEnter how many vehicle you want to take in rent :";
    	//cin>>num;
    	//fflush(stdin);
    	cout<<"\nEnter for how many days you want to rent the vehicle:";
    	cin>>s1.rentDay;
    	fflush(stdin);
    	cout<<"\nCollecting personal details...............";
    	sleep(1);
    	system("cls");
    	cout<<"\nEnter your name :";
    	cin>>s1.customer_name;
    	fflush(stdin);
    	cout<<"\nEnter your age :";
    	cin>>s1.customer_age;
    	fflush(stdin);
    	cout<<"\nEnter the contact no :";
    	cin>>s1.contact_no;
    	fflush(stdin);
    	cout<<"\nEnter the citizenship no :";
   	 	cin>>s1.citizenship_no;
    	fflush(stdin);
    	sleep(3);
        s1.get_bike2();
    }
    else
	{
		cout<<"!!!Invalid Choice!!!";
		goto up;
	}
    return 0;
}
