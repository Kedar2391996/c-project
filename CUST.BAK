
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>
int k;
class customer
{
	long int mobileno;
	public:int custno;
  public:	char custnm[10];
	double outbalance;
	public :
		void getcustdetails();
		void displaycustdetails();
};
void read()
{
customer c1;
fstream file;
file.open("customer.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);
cout<<"****************************Customer Information*******************************"<<endl;
cout<<"Customer No\tCustomer Namr\t\tMobile No\tBalance"<<endl;
cout<<"*******************************************************************************"<<endl;
while(   file.read((char *) & c1,sizeof(c1)))
{
	 c1.displaycustdetails();
}
	file.close();

}
char* custsearch(int n)
{
int f=0;
 customer c1;
fstream file;
file.open("customer.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);

while(   file.read((char *) & c1,sizeof(c1)))
	{
		if(c1.custno==n)
		{
		f=1;
		return (c1.custnm);
		}

	}


	if(f==0)
	{
		cout<<"Enter correct customer number."<<endl;
		}
	file.close();

}
int custno1(void)              //auto increment customer number
{
       customer c1;
	fstream file;
	file.open("customer.txt",ios::in | ios::out |ios::end);
	 int pos= sizeof(c1);
	file.seekg(-pos,ios::end);
	file.read((char *) & c1,sizeof(c1));
	int k=c1.custno;
	      //	b.putdata();
		file.close();
		return(k+1);

}

/*void autog()
{
 fstream file;
 customer c1;
 file.close();
file.open("customer.txt", ios::in| ios::app);
//	 file.seekg(0);
//int last = file.tellg();
int n=sizeof(c1);
//int l=last-sizeof(c1);
cout<<n;
file.seekg(-n,ios::end);
//file.seekp(n,ios::end);
file.read((char *) & c1,sizeof(c1)) ;
	 c1.displaycustdetails();
k = c1.custno+1;
cout<<"no="<<k;
} */



void customer::getcustdetails()
{
	cout<<"Enter customer number";
	cin>>custno;
   //  autog();
	cout<<"Enter customer name";
	gets(custnm);
	cout<<"Enter customer mobile number";
	cin>>mobileno;
	cout<<"Enter outstanding balance";
	cin>>outbalance;

}
void save(customer c)
{
fstream file;
	file.open("customer.txt",ios::in| ios::out| ios::app);
	file.write((char *) & c,sizeof(c));
	file.close();

}
void customer::displaycustdetails()
{
	cout<<setiosflags(ios::left)
	<<setw(5)<<custno
	<<setiosflags(ios::right)
	<<setw(22)<<custnm
	<<setiosflags(ios::right)
	<<setw(20)<<mobileno
	<<setiosflags(ios::right)
	<<setw(15)<<outbalance
	<<endl;

}

/*int main()
{
	customer c;
	int n;
	int c1;
	cout<<"please select option"<<endl;
	cout<<"1.Insert New Record"<<endl;
	cout<<"2.Search"<<endl;
	cout<<"3.Display All records"<<endl;
	cin>>c1;
	switch(c1)
	{
	case 1: {
		c.getcustdetails();
		save(c);
		break;
		}
	case 2: {

		cout<<"enter no";
		cin>>n;
		search(n);
		break;
		}
	case 3: {
		read();
		break;
		}
	case 4:
	       {
	      autog();
		break;
		}
	   default:
	   {
	   cout<<"Enter coorect choice";
	    }
	}
	getch();

} */