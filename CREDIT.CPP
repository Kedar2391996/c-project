#include<iostream.h>
#include<iomanip.h>
#include<fstream.h>
#include<time.h>
#include<string.h>
#include<conio.h>
class credit
{
       public:	char date[10];
	int quantity;
	float price;
      public:	int custno;
	int bookno;
	public:
		void getcredit();
		void display();

};
void credit::getcredit()
{
    //cout<<"Enter date";
   // cin>>date;
    //cout<<"Enter customer number";
    //cin>>custno;
    cout<<"Enter book number";
    cin>>bookno;
    cout<<"Enter Qauntity";
    cin>>quantity;
}
void credit::display()
{
	cout<<setiosflags(ios::left)
	<<setw(10)<<custno
	<<setiosflags(ios::right)
	<<setw(10)<<bookno
	<<setiosflags(ios::right)
	<<setw(10)<<quantity
	<<setiosflags(ios::right)
	<<setw(10)<<date
	<<endl;
}
fstream file;
int main()
{
	credit item[5];
	int n;
	int a;
	clrscr();
		cout<<"enter customer no";
	cin>>a;

	cout<<"Enter how may books you want to order :=";
	cin>>n;
	if(n>5)
	{
	cout<<"maximun 5 types of books at time";
	}
	else
	{
	file.open("creditdetails.txt", ios::in | ios::out | ios::app);
	cout<<"Enter details for 3 books \n";

	for(int i=0;i<n;i++)
	{
		item[i].custno=a;
		strcpy(item[i].date,"1-1-2018");
		item[i].getcredit();
		file.write((char *) & item[i],sizeof(item[i]));
	}
	}
	file.close();
	return 0;
}