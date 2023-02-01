#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<istream>
#include<unistd.h>
#include<windows.h>
#include<ctime>
using namespace std;
/******************************************************FunctionDeclaration************************************************/
void adminlogin();
void userregister();
void userlogin();
void fullscreen();
void load_EXIT();
void exitArt();
void gotoxy(int , int );
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
    string customer_gender;
    double contact_no;
    double citizenship_no;
    int customer_age;
    int ch1,ch2;
    /******************************************************Welcome************************************************/
    void welcome()
    {
    	gotoxy(10,10);
    	ifstream ifs ("welcome.txt");
    	string lines ="";
    	if(ifs)
    	{
    		while(ifs.good())
    		{
    			string  tempLine;
    			getline(ifs,tempLine);
    			tempLine += "\n";
    			lines +=tempLine;
			}
			cout<< lines ;
		}
		ifs.close();
	}
};
class rent : public bike{
    public :
    int rentHr;
    int amt;
    int rentFee1;
    int rentFee2;
    int advanceAmt;
    void time1()
    {
    	time_t timetoday;
   		time (&timetoday);
   		cout<<asctime(localtime(&timetoday));
	}
    void calcuRent1()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\n\t\tEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch1==1)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==2)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==3)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==4)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==5)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==6)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;  
        }
        if(ch1==7)
        {
        	rentFee1=rentHr*110;
        	amt=rentFee1-advanceAmt;
		}
		if(ch1==8)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==9)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==10)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
    }
    void calcuRent2()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\n\t\tEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch2==1)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==2)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==3)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==4)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==5)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==6)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
    }
};
class normal : public rent{
    public:
    int id1;
    string name1;
    int year1;
    int max_torque1,max_power1;
    void get_bike1()
    {
    	system("cls");
    	time1();
    	gotoxy(40,10);
        cout<<"\t\tYou have chosen normal/petrol bike for the rental.....";
        label1:
        sleep(1);
        cout<<"\n\t\tThe list of bike we have are :"<<endl;
        cout<<"\t\t1.Yamaha XTZ 150"<<endl;
        cout<<"\t\t2.Honda XR 150L"<<endl;
        cout<<"\t\t3.Hero Xpulse"<<endl;
        cout<<"\t\t4.Tracker 250"<<endl;
        cout<<"\t\t5.Royal Enfield Classic 350"<<endl;
        cout<<"\t\t6.Jawa Classic"<<endl;
        cout<<"\t\t7.Pulsar NS 100"<<endl;
        cout<<"\t\t8.Honda Hornet"<<endl;
        cout<<"\t\t9.Apache RTR 200"<<endl;
        cout<<"\t\t10.Yamaha FZS  v2"<<endl;
        cout<<"\t\t\n...............................................................";
        cout<<"\t\t\n\nEnter your choice from(1-10):";
        cin>>ch1;
        system("cls");
        switch(ch1)
        {
            case 1:   
            
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Yamaha XTZ 150";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 3";
					cout<<"\n\t\tWell conditioned with insurance.";
					cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 2:
            	
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Honda XR150L";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 4";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 3:
            		
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Hero Xpulse";
                    cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 5";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 4:
            	
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Tracker 250";
                    cout<<"\n\t\tYear : 2021";
                    cout<<"\n\t\tBike no = 6";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                   
                break;
             case 5:
             	
             		time1();
             		gotoxy(40,10);
        	        cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Royal Enfield Classic 350";
					cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 5";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 300";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
				break ; 
            case 6:
            	
            		time1();
					gotoxy(40,10);
					cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Jawa Classic";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 6";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 7:  
            		time1();
					gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Pulsar NS 200";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 7";
					cout<<"\n\t\tWell conditioned with insurance.";
					cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 8:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Honda Hornet";
                    cout<<"\n\t\tYear : 2017";
                    cout<<"\n\t\tBike no = 8";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 9:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Apache RTR 200";
                    cout<<"\n\t\tYear : 2022";
                    cout<<"\n\t\tBike no = 9";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 10:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Yamaha FZS V2";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 10";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;    
            default :
            	gotoxy(40,10);
                cout<<"\n\t\tYou have entered Invalid choice !!!";
                cout<<"\n\t\t!!!Try again!!!";
                goto label1;
            break;
        }        
    }
    void warning1()
    {
    	system("cls");
    	int ch1;
    	gotoxy(40,10);
        cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        time1();
        gotoxy(40,10);
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
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
    	cout<<"\n\nEnter the choice if your want to cancel the renting process:";
    	cout<<"\n[1].Cancel";
    	cout<<"\n[2].Continue";
    	cout<<"\nEnter your choice :";
    	cin>>ch1;
    	if(ch1==1)
    	{
    		load_EXIT();
		}
		else
		{
			display1();
		}
    }
    void display1()
    {
		system("cls");
		gotoxy(40,10);
		cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        gotoxy(40,10);
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        time1();
		gotoxy(40,10);
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch1<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentHr<<" |"<<endl;
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
	int id2;
    string name2;
    int year2;
    int range2;  
    void get_bike2()
    {
    	system("cls");
    	time1();
    	gotoxy(40,10);
        cout<<"\t\tYou have chosen electric bike for the rental....";
        label2:
        sleep(2);
        cout<<"\n\t\tThe list of bike we have are :"<<endl;
        cout<<"\t\t1.Yatri bike "<<endl;
        cout<<"\t\t2.Super Soco bike "<<endl;
        cout<<"\t\t3.NIU scooter"<<endl;
        cout<<"\t\t4.Bella scooter"<<endl;
        cout<<"\t\t5.Yadea G5 scooter"<<endl;
        cout<<"\t\t6.Doohan scooter"<<endl;
        cout<<"\n\t\t...............................................................";
        cout<<"\n\n\t\tEnter your choice from(1-6):";
        cin>>ch2;
        system("cls");
        switch(ch2)
        {
        case 1:
        	
        			time1();
        			gotoxy(40,10);
        	        cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Yatri p1";
					cout<<"\n\t\tYear : 2021";
					cout<<"\n\t\tMax range = 110km";
                    cout<<"\n\t\tBike no = 1";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
				break ; 
            case 2:
            	
            		time1();
            		gotoxy(40,10);
					cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Super soco TSX";
					cout<<"\n\t\tYear : 2020";
					cout<<"\n\t\tMax range = 80 km";
                    cout<<"\n\t\tBike no = 2";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
                break;
            case 3: 
			 
            		time1();
					gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : NIU scooter";
					cout<<"\n\t\tYear : 2020";
					cout<<"\n\t\tMax range = 90-130km";
                    cout<<"\n\t\tBike no = 3";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
                break;
            case 4:
            	    
					time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Bella scooter";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tMax range = 75 km";
                    cout<<"\n\t\tBike no = 4";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;
            case 5:
            		
					time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Yadea G5 Scooter ";
                    cout<<"\n\t\tYear : 2021";
                    cout<<"\n\t\tMax range = 80 km";
                    cout<<"\n\t\tBike no = 5";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;
            case 6:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Doohan Scooter";
                    cout<<"\n\t\tYear : 2022";
                    cout<<"\n\t\tMax range = 50 km";
                    cout<<"\n\t\tBike no = 6";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;    
            default :
            	time1();
            	gotoxy(40,10);
                cout<<"\n\t\tYou have entered Invalid choice !!!";
                cout<<"\n\t\t!!!Try again!!!";
                goto label2;
            break; 
        }
    }
    void warning2()
    {	
    	system("cls");
    	int ch2;
		gotoxy(40,10);
    	cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        time1();
        gotoxy(40,10);
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
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
    	cout<<"\n\nEnter the choice if your want to cancel the renting process:";
    	cout<<"\n[1].Cancel";
    	cout<<"\n[2].Continue";
    	cout<<"\nEnter your choice :";
    	cin>>ch2;
    	if(ch2==1)
    	{
    		load_EXIT();
		}
		else
		{
			display2();
		}
    }
    void display2()
    {
        system("cls");
        gotoxy(50,10);
        cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        gotoxy(50,10);
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        time1();
        gotoxy(50,10);
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch2<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentHr<<" |"<<endl;
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
	cout<<"\n 1. Add New Bikes";
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
	gotoxy(40,10);
	cout<<"\n\n******Adding new bike to the system****** "<<endl;
	cout<<"\n\t\tChoose which bike you would like to add below........";
	cout<<"\n\n\t\t1.Petrol Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		fstream file1,checkfile;
		normal a1,test1;
		file1.open("NormalBike1.dat",ios::out|ios::app);
		if(!file1){
		cout<<"\n\n\t\tFile Openning Error...";
		}
		system("cls");
		gotoxy(40,10);
		int id1,year1,max_power1,max_torque1;
		string name1;
		ok:
		cout<<"\n\t******Getting Details for new petrol medium bike******"<<endl;
		cout<<"\n\tEnter Bike Id: ";
		cin>>id1;
		fflush(stdin);
		checkfile.open("NormalBike1.dat",ios::in);
		//checkfile.seekg(0,ios::beg);
		while(!checkfile.eof())
			{
				//file6.seekg(0,ios::beg);
				checkfile>>test1.id1>>test1.name1>>test1.year1>>test1.max_power1>>test1.max_torque1;
				if( id1 == test1.id1)
				{
					cout<<"\n\n\t\t The Bike ID already exist in our system. Please Enter Another ID";
					goto ok;
				}
			}
		cout<<"\n\tEnter Bike name: ";
		cin>>name1;
		fflush(stdin);
		cout<<"\n\tEnter year: ";	
		cin>>year1;
		fflush(stdin);
		cout<<"\n\tEnter max_power: ";
		cin>>max_power1;
		fflush(stdin);
		cout<<"\n\tEnter max-torque: ";
		cin>>max_torque1;
		fflush(stdin);
		file1<<endl;
		file1<<id1<<" "<<name1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1;
		file1.close();
	}
	else if (ch==2)
	{
		fstream file2,checkfile2;
		electric a2,test2;
		int id2,year2,range2;
		string name2;
		file2.open("electricBike1.dat",ios::out|ios::app);
		if(!file2){
		cout<<"\n\n\t\tFile Openning Error...";
		}
		system("cls");
		gotoxy(40,10);
		ok1:
		cout<<"\n\t\t******Getting Details for new electric medium bike******"<<endl;
		cout<<"\n\tEnter Bike Id: ";
		cin>>id2;
		fflush(stdin);
		checkfile2.open("electricBike1.dat",ios::in);
		//checkfile2.seekg(0,ios::beg);
		while(!checkfile2.eof())
			{
				//file6.seekg(0,ios::beg);
				checkfile2>>test2.id2>>test2.name2>>test2.year2>>test2.range2;
				if( id2 == test2.id2)
				{
					cout<<"\n\n\t\t The Bike ID already exist in our system. Please Enter Another ID";
					goto ok1;
				}
			}
		cout<<"\n\tEnter Bike name: ";
		cin>>name2;
		fflush(stdin);
		cout<<"\n\tEnter year: ";	
		cin>>year2;
		fflush(stdin);
		cout<<"\n\tEnter range: ";
		cin>>range2;
		fflush(stdin);
		file2<<endl;
		file2<<id2<<" "<<name2<<" "<<year2<<" "<<range2;
		file2.close();	
	}
	else
	{
		cout<<"\n\t\t!!!Invalid Input!!!";
		cout<<"\n\t\t!!!Try Again!!!";
		sleep(3);
		goto label0;
	}
}	
void bbike::show_bikes()
{
	label1:
	system("cls");
	cout<<"\n******Displaying bike******"<<endl;
	cout<<"\n\t\tChoose which bike list would you like to display........";
	cout<<"\n\n\t\t1.Petrol Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice :";
	cin>>ch;
	if(ch == 1)
	{	
		system("cls");
		normal b1;
		gotoxy(40,10);
		fstream file3;
		int id1,year1,max_power1,max_torque1;
		string name1;
		file3.open("NormalBike1.dat",ios::in);
		if(!file3)
		cout<<"\n\n File Openning Error...";
			//file3.seekg(0,ios::beg);
			cout<<"\n\nID\t\tBike Name\t\tYear\t\tMax_power\tMax_torque\n\n";
			do
			{
				file3>>id1>>name1>>year1>>max_power1>>max_torque1;
				cout<<id1<<"\t\t"<<name1<<"\t\t"<<year1<<"\t\t"<<max_power1<<"\t\t"<<max_torque1<<"\n\n";
			}while(!file3.eof());
				file3.close();
	}
	else if (ch==2)
	{		
		system("cls");
		electric b2;
		gotoxy(40,10);
		fstream file4;
		int id2,year2,range2;
		string name2;
		file4.open("electricBike1.dat",ios::in);
		if(!file4)
		cout<<"\n\n File Openning Error...";
			//file4.seekg(0,ios::beg);
			cout<<"\n\n\t\tID\t\tBike Name\tYear\t\tRange\n\n";
			do
			{
				file4>>id2>>name2>>year2>>range2;
				cout<<"\t\t"<<id2<<"\t\t"<<name2<<"\t\t"<<year2<<"\t\t"<<range2<<"\n\n";
			}while(!file4.eof());
			file4.close();
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
	gotoxy(40,10);
	cout<<"\n******Checking Bike******";
	cout<<"\n\t\tChoose which bike would you like to check........";
	cout<<"\n\n\t\t1.Petrol/Normal Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice : ";
	cin>>ch;
	if(ch == 1 )
	{
		system("cls");
		fstream file5;
		normal c1;
		int id1,check_id,year1,max_power1,max_torque1,y=0;
		string name1;
		top:
		file5.open("NormalBike1.dat",ios::in);
		if(!file5)
		cout<<"\n\n\t\tFile Openning Error...";
			cout<<"\n\n Enter The Bike ID You Want To Search : ";
			cin>>check_id;
			file5.seekg(0,ios::beg);
			do
			{
				//file6.seekg(0,ios::beg);
				file5>>c1.id1>>c1.name1>>c1.year1>>c1.max_power1>>c1.max_torque1;
				if(check_id == c1.id1)
				{
					y=1;
					cout<<"\n\n\t\t\tBike ID : "<<c1.id1;
					cout<<"\n\n\t\t\tBike Name : "<<c1.name1;
					cout<<"\n\n\t\t\tYear : "<<c1.year1;
					cout<<"\n\n\t\t\tMax_power : "<<c1.max_power1;
					cout<<"\n\n\t\t\tMax_torque : "<<c1.max_torque1;
				}
			}while(!file5.eof());
			if(y!=1)
				{
					file5.close();
					cout<<"\n\n\t\t\t Bike ID Not Found...!!! Please Enter The Correct Name Again";
					goto top;
				}
			file5.close();
	}
	else if(ch ==2)
	{ 
		system("cls");
		fstream file6;
		electric c2;
		int id2,year2,max_power2,range2,check_id1=0,x=0;
		string name2;
		top1:
		file6.open("electricBike1.dat",ios::in);
		if(!file6)
		cout<<"\n\n\t\tFile Openning Error...";
		cout<<"\n\n Enter The Bike ID You Want To Search : ";
		cin>>check_id1;
			do
			{
				//file6.seekg(0,ios::beg);
				file6>>c2.id2>>c2.name2>>c2.year2>>c2.range2;
				if(check_id1 == c2.id2)
				{
					x=1;
					cout<<"\n\n\t\t\tBike ID : "<<c2.id2;
					cout<<"\n\n\t\t\tBike Name : "<<c2.name2;
					cout<<"\n\n\t\t\tYear : "<<c2.year2;
					cout<<"\n\n\t\t\tRange Per Charge(Km) : "<<c2.range2;
				}
			}while(!file6.eof());
			if(x!=1)	
				{
					file6.close();
					cout<<"\n\n\t\t\t Bike name Not Found...!!! Please Enter The Correct Name Again";
					goto top1;
				}
			file6.close();
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
	gotoxy(40,10);
	cout<<"\n******Updating Bike******"<<endl;
	cout<<"\nChoose which bike would you like to update........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		gotoxy(40,10);
		normal d1,d11;
		fstream file7,file8,myfile1;
		int id1,year1,mp,mt,x=0,i,y;
		int max_power,max_torque;
		int modify_id1;
		string name1,n;
		char k;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		file7.open("NormalBike1.dat",ios::in);
		if(!file7)
		cout<<"\n\n File Openning Error...";
			//file9.seekg(0,ios::beg);
			cout<<"\n\n\t\t\t ******** The Available Bikes We Have On Our DataBase Are ********\n\n";
			cout<<"\n\n\t\tID\t\tBike Name\tYear\t\tRange\n\n";
			while(!file7.eof())
			{
				file7>>d11.id1>>d11.name1>>d11.year1>>d11.max_power1>>d11.max_torque1;
				cout<<"\t\t"<<d11.id1<<"\t\t"<<d11.name1<<"\t\t"<<d11.year1<<"\t\t"<<d11.max_power1<<"\t\t"<<d11.max_torque1<<"\n\n";
			}
		file7.close(); 
		flag:
		cout<<"\n\n\t\t Enter the ID of the Bike You Want To Modify/Update : ";
		cin>>modify_id1;
		myfile1.open("temp1.dat",ios::out| ios::trunc | ios::binary); //write
		file8.open("NormalBike1.dat",ios::in); //read
		while(!file8.eof())
		{
			file8>>d1.id1>>d1.name1>>d1.year1>>d1.max_power1>>d1.max_torque1;
			if(d1.id1 == modify_id1)
			{
					x++;
					if (x>0){
					cout<<"\n\n\t\t ***** Enter the new Bike Details To be Updated *****";
					cout<<"\n\n\t\t\tNew Bike ID : ";
					cin>>i;
					cout<<"\n\n\t\t\tNew Bike Name : ";
					cin>>n;
					cout<<"\n\n\t\t\tNew Manufacture Year : ";
					cin>>y;
					cout<<"\n\n\t\t\tNew Max Power : ";
					cin>>mp;
					cout<<"\n\n\t\t\tNew Max Torque : ";
					cin>>mt;
					if(!file8.eof()){
						myfile1<<i<<" "<<n<<" "<<y<<" "<<mp<<" "<<mt<<" ";
					}
					else{
						myfile1<<i<<" "<<n<<" "<<y<<" "<<mp<<" "<<mt;
					}
				}
				cout<<"\n\n\t\t Record Successfully Updated !!! ";
			}
			else if(d1.id1 != modify_id1 && file8.eof()){
				myfile1<<d1.id1<<" "<<d1.name1<<" "<<d1.year1<<" "<<d1.max_power1<<" "<<d1.max_torque1;
			}
			else if(d1.id1 != modify_id1){
				myfile1<<d1.id1<<" "<<d1.name1<<" "<<d1.year1<<" "<<d1.max_power1<<" "<<d1.max_torque1<<"\n";
			} 
		}
					file8.close();
	  				myfile1.close();
	  				remove("NormalBike1.dat");
        			rename("temp1.dat","NormalBike1.dat");
        			if(x == 0)
        			{
        				cout<<"\n\n\t\t Bike ID Not Found !!! ";
					}
        			cout<<"\n\n\t\t Press Any Key To Go To Main Menu";
}

	else if ( ch == 2)
{
		system("cls");
		electric d2,d22;
		gotoxy(40,10);
		fstream file9,file10,myfile2;
		int x=0;
		int id2,year2,range2,modify_id2=0;
		int i,y,r;
		string n,name;
		char another,k;
		int choice=0,count=0;
		file10.open("electricBike1.dat",ios::in);
		if(!file10)
		cout<<"\n\n File Openning Error...";
			//file9.seekg(0,ios::beg);
			cout<<"\n\n\t\t\t ******** The Available Bikes We Have On Our DataBase Are ********\n\n";
			cout<<"\n\n\t\tID\t\tBike Name\tYear\t\tRange\n\n";
			while(!file10.eof())
			{
				file10>>d22.id2>>d22.name2>>d22.year2>>d22.range2;
				cout<<"\t\t"<<d22.id2<<"\t\t"<<d22.name2<<"\t\t"<<d22.year2<<"\t\t"<<d22.range2<<"\n\n";
			}
		file10.close(); 
		flag1:
		cout<<"\n\n\t\t Enter the ID of the Bike You Want To Modify/Update : ";
		fflush(stdin);
		cin>>modify_id2;
		myfile2.open("temp2.dat",ios::out| ios::trunc | ios::binary); //write
		file9.open("electricBike1.dat",ios::in); //read
		while(!file9.eof()) {
        	file9 >> d2.id2 >> d2.name2 >> d2.year2 >> d2.range2;
			if(d2.id2 == modify_id2)
			{
					x++;
					if (x>0){
					cout<<"\n\n\t\t ***** Enter the new Bike Details To be Updated *****";
					cout<<"\n\n\t\t\tNew Bike ID : ";
					cin>>i;
					cout<<"\n\n\t\t\tNew Bike Name : ";
					cin>>n;
					cout<<"\n\n\t\t\tNew Manufacture Year : ";
					cin>>y;
					cout<<"\n\n\t\t\tNew Range Per Charge(Km) : ";
					cin>>r;
					if(!file9.eof()){
						myfile2<<i<<" "<<n<<" "<<y<<" "<<r<<" ";
					}
					else{
						myfile2<<i<<" "<<n<<" "<<y<<" "<<r;
					}
				} 
				cout<<"\n\n\t\t Record Successfully Updated !!! ";
			}
				if(d2.id2 != modify_id2 && file9.eof()){
				myfile2<<d2.id2<<" "<<d2.name2<<" "<<d2.year2<<" "<<d2.range2;
			}
				else if(d2.id2 != modify_id2){
				myfile2<<d2.id2<<" "<<d2.name2<<" "<<d2.year2<<" "<<d2.range2<<"\n";
			}
		}
					file9.close();
	  				myfile2.close();
	  				remove("electricBike1.dat");
        			rename("temp2.dat","electricBike1.dat");
        			if(x == 0)
        			{
        				cout<<"\n\n\t\t Bike ID Not Found !!! ";
					}
        			cout<<"\n\n\t\t Press Any Key To Go To Main Menu";
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
	gotoxy(40,10);
	cout<<"******Delete Bike******"<<endl;
	cout<<"\nChoose which bike would you like to delete........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if( ch==1)
	{
		system("cls");
		gotoxy(40,10);
		normal e1,e11;
		fstream file11,file12,myfile3;
		int id1,year1,max_power1,max_torque1,count1=0;
		int del_id1;
		string name1;
		char k;
		int count=0;
		file11.open("NormalBike1.dat",ios::in);
		if(!file11)
		cout<<"\n\n File Openning Error...";
			//file9.seekg(0,ios::beg);
			cout<<"\n\n\t\t\t ******** The Available Bikes We Have On Our DataBase Are ********\n\n";
			cout<<"\n\n\t\tID\t\tBike Name\tYear\t\tRange\n\n";
			while(!file11.eof())
			{
				file11>>e11.id1>>e11.name1>>e11.year1>>e11.max_power1>>e11.max_torque1;
				cout<<"\t\t"<<e11.id1<<"\t\t"<<e11.name1<<"\t\t"<<e11.year1<<"\t\t"<<e11.max_power1<<"\t\t"<<e11.max_torque1<<"\n\n";
		}
		file11.close(); 
		cout<<"\n\n\t\t Enter the ID of the Bike You Want To Delete : ";
		cin>>del_id1;
		file12.open("temp1.dat",ios::out); //write
		myfile3.open("NormalBike1.dat",ios::in); //read
		while(!myfile3.eof())
		{
			myfile3>>e1.id1>>e1.name1>>e1.year1>>e1.max_power1>>e1.max_torque1;
			if(e1.id1 == del_id1)
			{
					count=1;
					cout<<"\n\n\t\tThe Selected Record Is Deleted Successfully";
			}
			else if(e1.id1 != del_id1 && myfile3.eof()){
			file12<<e1.id1<<" "<<e1.name1<<" "<<e1.year1<<" "<<e1.max_power1<<" "<<e1.max_torque1;
			}
			else if(e1.id1 != del_id1){
			file12<<e1.id1<<" "<<e1.name1<<" "<<e1.year1<<" "<<e1.max_power1<<" "<<e1.max_torque1<<"\n";
			}
		}
					file12.close();
	  				myfile3.close();
	  				remove("NormalBike1.dat");
        			rename("temp1.dat","NormalBike1.dat");
        			if(count == 0)
        			{
        				cout<<"\n\n\t\t Bike ID Not Found !!! ";
					}
        			cout<<"\n\n\t\t Press Any Key To Go To Main Menu";
	}
	else if (ch == 2)
	{
		system("cls");
		gotoxy(40,10);
		electric e2,e22;
		fstream file13,file14,myfile4;
		int id2,year2,range2;
		int del_id2;
		string name2;
		char k;
		int count1=0;
		file13.open("electricBike1.dat",ios::in);
		if(!file13)
		cout<<"\n\n File Openning Error...";
			//file9.seekg(0,ios::beg);
			cout<<"\n\n\t\t\t ******** The Available Bikes We Have On Our DataBase Are ********\n\n";
			cout<<"\n\n\t\tID\t\tBike Name\tYear\t\tRange\n\n";
			while(!file13.eof())
			{
				file13>>e22.id2>>e22.name2>>e22.year2>>e22.range2;
				cout<<"\t\t"<<e22.id2<<"\t\t"<<e22.name2<<"\t\t"<<e22.year2<<"\t\t"<<e22.range2<<"\n\n";
		}
		file13.close(); 
		cout<<"\n\n\t\t Enter the ID of the Bike You Want To Delete : ";
		cin>>del_id2;
		file14.open("temp2.dat",ios::out | ios::binary); //write
		myfile4.open("electricBike1.dat",ios::in); //read
		while(!myfile4.eof())
		{
			myfile4>>e2.id2>>e2.name2>>e2.year2>>e2.range2;		
			if(e2.id2 == del_id2)
			{
				count1=1;
				cout<<"\n\n\t\tThe Selected Record Is Deleted Successfully";
		    }
			else if(e2.id2 != del_id2 && myfile4.eof()){
			file14<<e2.id2<<" "<<e2.name2<<" "<<e2.year2<<" "<<e2.range2;
			}
			else if(e2.id2 != del_id2){
			file14<<e2.id2<<" "<<e2.name2<<" "<<e2.year2<<" "<<e2.range2<<"\n";
			}
		}
					file14.close();
	  				myfile4.close();
	  				remove("electricBike1.dat");
        			rename("temp2.dat","electricBike1.dat");
        			if(count1 == 0)
        			{
        				cout<<"\n\n\t\t Bike ID Not Found !!! ";
					}
        			cout<<"\n\n\t\t Press Any Key To Go To Main Menu";
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
	system("cls");
	fullscreen();
	int c;
	bike b1;
	b1.welcome();
	sleep(3);
	time_t timetoday;
	time (&timetoday);
	system("cls");
	cout<<asctime(localtime(&timetoday));
	cout<<"\n\t\t\t\t\t\t**************************************************************";
	cout<<"\n\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\xdb|      _________       ___________          ________       |\xdb";
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
    cout<<asctime(localtime(&timetoday));                                   
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 1 for ADMIN LOGIN     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 2 for REGISTER        |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 3 for USER LOGIN      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Enter your choice :         ";
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
			system("cls");
			main();
	}
}
/******************************************************FunctionDefinition**************************************************/
/******************************************************AdminLogin**************************************************/
void adminlogin()
{
	sleep(2);
   system("cls");
   time_t timetoday;
   time (&timetoday);
   cout<<asctime(localtime(&timetoday));
   gotoxy(40,10);
   bbike b;
   label1:
   int choice,in;
   char x;
   char ch;
   string pass;
   cout<<"\n\t\t\t\t\t\t\t\t\xdb|     Admin Login     |\xdb";	
   cout<<"\n\n\t\t\t\t\t\t\tEnter the password : ";
   ch = getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "password")
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
			back:
			cout<<"\n[1].Press for going back";
			cout<<"\n[2].Exit";
			cout<<"\nEnter your choice :";
			cin>>in;
			if(in == 1)
			{
				main();
			}
			else if (in==2)
			{
				load_EXIT();
			}
			else
			{
				cout<<"\nInvalid Input given";
				goto back;
			}
		default:
			cout<<"\n\n\t\t\t\t\t\t\t\t\xdbInvalid Value...Please Try Again...\xdb";
	}
	getch();
	goto label;
   }
   else
   {
      cout <<"\n\n\n\t\t\t\t\t\t\t \xdb Access Aborted...\n\n\n\t\t\t\t\t\t\t Please Try Again \n\n \xdb";
      goto label1;
   }
}
/******************************************************UserRegister**************************************************/
void userregister()
{
	system("cls");

	gotoxy(40,10);
	string ruserID,rpassword,rid,rpass;
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the username : ";
	cin>>ruserID;
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the password : ";
	cin>>rpassword;
	
	
	ofstream f1("record1.txt",ios::app);
	f1<<ruserID<<' '<<rpassword<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\xdbRegistration is succesfull!\xdb";
	userlogin();
	
}
/******************************************************UserLogin**************************************************/
void userlogin()
{
	system("cls");
	int count;
	char ch;
	int num;
    int choice;
    int option;
    int day;
    int d;
    time_t timetoday;
   	time (&timetoday);
    normal n1;
    electric e1;
	string userID,password,id,pass;
	cout<<asctime(localtime(&timetoday));
	flag:
	gotoxy(40,10);
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Please enter the username and password \xdb";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t USERNAME : ";
	cin>>userID;
	cout<<"\n\t\t\t\t\t\t\t\t\t PASSWORD : ";
	cin>>password;
	fstream input("record1.txt",ios::in);//to check whether username and pass already exist in our records
	while(input>>id>>pass)
	{
		if(id==userID && pass==password)
		{
			count=1;
		}
	}
	input.close();
	if(count==1)
	{
		system("cls");
		cout<<"\n\t\xdb WELCOME USER = "<<userID<<" \xdb";
		cout<<"\n\t\t\t\t\t\t\xdbYour LOGIN is succesfull! \xdb\n";
		sleep(1);
		system("cls");
		cout<<asctime(localtime(&timetoday));
		cout<<"\n\t\t\t\t\t\t**************************************************************";
		cout<<"\n\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
		cout<<"\n\t\t\t\t\t\t--------------------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\xdb|      _________       ___________          ________       |\xdb";
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
		sleep(3);
		system("cls");
		cout<<asctime(localtime(&timetoday));
		gotoxy(40,10);
		up:
		cout<<"\n\nWe have two categories in Bike Rental System";
		cout<<"\n1.Normal Bike";
		cout<<"\n2.Electric Bike";
		cout<<"\nchoose a category (1 or 2) :";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			gotoxy(40,10);
			fstream myfile;
			myfile.open("NormalBike.dat",ios::out|ios::app);
			op:
			system("cls");
			cout<<asctime(localtime(&timetoday));
			cout<<"\n\n**********BIKE RENTAL OPTION**********";
			cout<<"\nPlease select the option according to your choice";
			cout<<"\n[1].Days";
			cout<<"\n[2].Hour";
			cout<<"\n";
			cout<<"\nEnter your choice : ";
			cin>>option;
			switch(option)
			{
				case 1:
					cout<<"\nEnter for how many days you want to rent the bike :";
					cin>>day;
					n1.rentHr=day*24;
					break;
					
				case 2:
					cout<<"\nEnter for how many hours you want to rent the bike :";
					cin>>n1.rentHr;
					break;
				default :
					cout<<"\n!!!Invalid Choice!!!";
					goto op;
			}
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>n1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your gender (Male/Female/Others):";
			cin>>n1.customer_gender;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>n1.customer_age;
			fflush(stdin);
			if(n1.customer_age < 18)
			{
				cout<<"\n!!! You are not eligible for renting bike !!!";
				exit (0);
			}
			cout<<"\nEnter the contact no :";
			cin>>n1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
			cin>>n1.citizenship_no;
			fflush(stdin);
			myfile<<n1.customer_name<<" "<<n1.customer_gender<<" "<<n1.customer_age<<" "<<n1.contact_no<<" "<<n1.citizenship_no<<"\n";
 			myfile.close();
		    cout<<"\n\n\nLOADING................";
			sleep(3);
			fflush(stdin);
		    n1.get_bike1();
		    cout<<"\n Do you want to rent another Bike?(Y/N): ";
		  	cin>>ch;
		  	if(ch=='y' || ch=='Y')
			{
		  		goto op;
			}
			else
			{
				exitArt();
			}
		}	
		else if(choice==2)
		{
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			fstream myfile1;
			myfile1.open("electricBike.dat",ios::out|ios::app);
			op1:
			system("cls");
			cout<<asctime(localtime(&timetoday));
			cout<<"\n\n**********BIKE RENTAL OPTION**********";
			cout<<"\nPlease select the option according to your choice";
			cout<<"\n[1].Days";
			cout<<"\n[2].Hour";
			cout<<"\n";
			cout<<"\nEnter your choice :";
			cin>>option;
			switch(option)
			{
				case 1:
					cout<<"\nEnter for how many days you want to rent the bike :";
					cin>>day;
					e1.rentHr=day*24;
					break;
				case 2:
					cout<<"\nEnter for how many hours you want to rent the bike :";
					cin>>e1.rentHr;
					break;
				default :
					cout<<"\n!!!Invalid Choice!!!";
					goto op1;
			}
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>e1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your gender (Male/Female/others) :";
			cin>>e1.customer_gender;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>e1.customer_age;
			if(e1.customer_age < 18)
			{
				cout<<"\n!!! You are  not eligible for renting bike !!!";
				exit (0);
			}
			fflush(stdin);
			cout<<"\nEnter the contact no :";
			cin>>e1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
		 	cin>>e1.citizenship_no;
			fflush(stdin);
			myfile1<<e1.customer_name<<" "<<e1.customer_gender<<" "<<e1.customer_age<<" "<<e1.contact_no<<" "<<e1.citizenship_no<<"\n";
 			myfile1.close();
		    cout<<"\n\n\nLOADING................";
			sleep(3);
		    e1.get_bike2();
		    cout<<"\n Do you want to rent another Bike?(Y/N): ";
		  	cin>>ch;
		  	if(ch=='y' || ch=='Y')
			{
		  		goto op1;
			}
			else
			{
				exitArt();
			}
		}
		else
		{
			cout<<"!!!Invalid Choice!!!";
			goto up;
		}
	}
}
/******************************************************fullScreen************************************************/
void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
/******************************************************FunctionDefination************************************************/
void gotoxy(int x, int y)
{

 COORD coord;

 coord.X = x;

 coord.Y = y;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
/******************************************************LOAD_EXIT************************************************/
void load_EXIT()
{
	system("cls");
    int row,col,r,c,q;
    int timer = rand()%5+1;
    gotoxy(60,14);
    printf("LOGGING OFF...");
    gotoxy(60,16);
    for(r=1;r<=timer;r++)
	{
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",177);
	}
    exit(0);
}
/******************************************************exitArt************************************************/
void exitArt()
{
	system("cls");
	gotoxy(0, 10);
	ifstream ifs ("exit art.txt");    
	string Lines = " ";
    
    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";
	    
	    	Lines += TempLine;
		}
		
	cout << Lines;
	
	}
    cout<<"\n\t  |\t\t\t\t\t\t\t";
    ifs.close ();
    Sleep(3000);
    load_EXIT();
    exit(0);
}

/******************************************************End_Of_Code************************************************/
