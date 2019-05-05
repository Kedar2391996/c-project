#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>

class customer
{
	clrscr();
	long int mobileno;
	int custno;
	char custnm[10];
	double outbalance;
	public :
		void getcustdetails();
		void displaycustdetails();

};
void customer::getcustdetails()
{
	cout<<"Enter customer number";
	cin>>custno;
	cout<<"Enter customer name";
	gets(custnm);
	cout<<"Enter customer mobile number";
	cin>>mobileno;
	cout<<"Enter outstanding balance";
	cin>>outbalance;
}
void customer::displaycustdetails()
{
	cout<<setiosflags(ios::left)
	<<setw(50)<<custnm
	<<setiosflags(ios::right)
	<<setw(10)<<mobileno
	<<setiosflags(ios::right)
	<<setw(10)<<outbalance
	<<endl;

}
fstream file;
int main()
{
	customer c;
	c.getcustdetails();
	file.open("customer.txt",ios::in| ios::out| ios::app);
	file.write((char *) & c,sizeof(c));
	file.close();

}