#include<iostream>
using namespace std;
class Bike
{
    string name;
    int citizenship_no;
    int ph_no;
    public:
    void get_details(string a ,int cn, int ph)
    {
        name=a;
        citizenship_no=cn;
        ph_no=ph;
    }
    void select();
    void display()
    {
        cout<<"\n\t\t\t\tThe details of the customer are :";
        cout<<"\n\t\t\t\tName of the customer :"<<name;
        cout<<"\n\t\t\t\tCitizenship of the customer :"<<citizenship_no;
        cout<<"\n\t\t\t\tContact no of the customer :"<<ph_no;
    }

};
void Bike::select()
{
	int n,num;
	string ch;
	cout<<"\n\t\t\t\tPlease select a bike of your choice";
	cout<<"\n\t\t\t\tA.Dirt bike";
	cout<<"\n\t\t\t\tB.Normal bike";
	cout<<"\n\t\t\t\tEnter your choice :";
	getline(cin,ch);
	if(ch=="A")
	{
		cout<<"\n\t\t\t\tList of dirt bikes";
		cout<<"\n\t\t\t\tChoose bike you want for the rental!";
		cout<<"\n\t\t\t\t1.CX 250 SE";
		cout<<"\n\t\t\t\t2.Crossfire RM";
		cout<<"\n\t\t\t\t3.XR";
		cout<<"\n\t\t...............................................................";
		cout<<"\n\t\t\t\tEnter the choice :";
		cin>>n;
		switch(n)
		{
			case 1:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : CX 250 SE";
					cout<<"\nYear : 2019";
					cout<<"\nMax power=30 bhp";
					cout<<"\nMax torque= 28 nm";
					cout<<"\nWell condition";
					cout<<"\n\n Per day rent is : 2600";							
				break ;
			case 2:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : Crossfire RM";
					cout<<"\nYear : 2018";
					cout<<"\nMax power=29 bhp";
					cout<<"\nMax torque= 27 nm";
					cout<<"\nWell condition";
					cout<<"\n\n Per day rent is : 2500";							
			break ;
			case 3:
					cout<<"\nYou have sucessfully chosen a bike :";
					cout<<"\nBike name : XR";
					cout<<"\nYear : 2020";
					cout<<"\nMax power=18 bhp";
					cout<<"\nMax torque= 17 nm";
					cout<<"\nWell condition";
					cout<<"\n\n Per day rent is : 2200";							
			break ;
			default:
				cout<<"\n\t\t\t\tInvalid choice!!!";
			break;
		}
	}
	
	if (ch=="B")
	{
		cout<<"\n\t\t\t\tList of normal bikes";
		cout<<"\n\t\t\t\tChoose bike you want for the rental!";
		cout<<"\n\t\t\t\t1.Jawa Classic ";
		cout<<"\n\t\t\t\t2.Royal Enfield";
		cout<<"\n\t\t\t\t3.Pulsar NS 200";
		cout<<"\n\t\t...............................................................";
		cout<<"\n\t\t\t\tEnter the choice :";
		cin>>num;
		switch(num)
		{
			case 1:
					cout<<"\n\t\t\t\ttYou have sucessfully chosen a bike :";
					cout<<"\n\t\t\t\tBike name :Jawa Classic";
					cout<<"\n\t\t\t\tYear : 2019";
					cout<<"\n\t\t\t\tMax power=18 bhp";
					cout<<"\n\t\t\t\tMax torque= 19 nm";
					cout<<"\n\t\t\t\tWell condition";
					cout<<"\n\n\t\t\t\tPer day rent is : 2300";							
				break ;
			case 2:
					cout<<"\n\t\t\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\t\t\tBike name : Royal Enfield";
					cout<<"\n\t\t\t\tYear : 2017";
					cout<<"\n\t\t\t\tMax power=16 bhp";
					cout<<"\n\t\t\t\tMax torque= 17 nm";
					cout<<"\n\t\t\t\tWell condition";
					cout<<"\n\n\t\t\t\tPer day rent is : 2100";							
			break ;
			case 3:
					cout<<"\n\t\t\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\t\t\tBike name :Pulsar NS 200";
					cout<<"\n\t\t\t\tYear : 2020";
					cout<<"\n\t\t\t\tMax power=17bhp";
					cout<<"\n\t\t\t\tMax torque= 16nm";
					cout<<"\n\t\t\t\tWell condition";
					cout<<"\n\n\t\t\t\tPer day rent is : 2400";							
			break ;
			default :
				cout<<"\n\t\t\t\tInvalid choice!!!";
			break ;
		}
	}
	else
	{
		cout<<"Invalid choice";
	}
}
int main()
{
    Bike b1;
    b1.select();
    system("cls");
    string n;
    int c_no,p_no;
    cout<<"\n\t\t\t\tEnter your personal details :"<<endl;
    cout<<"\n\t\t\t\tEnter your name :";
    getline(cin,n);
    cout<<"\n\t\t\t\tEnter your citizenship no :";
    cin>>c_no;
    cout<<"\n\t\t\t\tEnter your Contact number :";
    cin>>p_no;
    b1.get_details(n,c_no,p_no);
    b1.display();
    return 0;
}
