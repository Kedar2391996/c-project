#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
class bill
{
     public:	int billno;
   public:	char date[10];
   public:		float price;
    public:	int quantity;
    public:	int custno;
    public:	int bookno;
    public:	int status;
	public :void get();
	public :void display();
};
void bill::get()
{
	cout<<"Enter bill number"<<endl;
	cin>>billno;
	cout<<"Enter book number"<<endl;
	cin>>bookno;
	cout<<"Enter status"<<endl;
	cin>>status;
	cout<<"Enter today's date"<<endl;
	cin>>date;
       //	cout<<"Enter customer name"<<endl;
       //	gets(customernm);
	cout<<"Enter quantity"<<endl;
	cin>>quantity;
}
void bill::display()
{
		cout<<setiosflags(ios::left)
	    //	<<setw(10)<<billno
	       //	<<setiosflags(ios::right)
	      //	<<setw(25)<<customernm
		<<setiosflags(ios::right)
		<<setw(5)<<bookno
		<<setiosflags(ios::right)
		<<setw(13)<<quantity
		<<setiosflags(ios::right)
		<<setw(25)<<price
		<<setiosflags(ios::right)
		<<setw(12)<<(quantity*price);
		//<<setiosflags(ios::right)
	       //	<<setw(10)<<date;
}

void billsave(bill bl)
{
fstream file;
	file.open("bill.txt",ios::in| ios::out| ios::app);
	file.write((char *) & bl,sizeof(bl));
	file.close();

}
void updatebillstatus(int n,int m)    //for updating status
{
	int f=0;
	int p=0;
	bill bl;
	fstream file;
	file.open("bill.txt",ios::in | ios::out);
	file.seekg(0);

	while(file.read((char *) & bl,sizeof(bl)))
       {
       p=p+1;
       if(bl.custno==n && bl.status==0 && bl.billno==m)
	{
			f=1;
				int k=bl.status;
		   bl.status=k+1;
		//   b.cost=pz;
			 int pos=(1)*sizeof(bl);
	       //		file.seekg(pos,ios::beg);
			file.seekg(-pos,ios::cur);


		     //	cr.display();
		     //	b.getdata();

			// file.seekp(-pos,ios::cur);
		     //	file.seekp(file.tellg()-sizeof(b));
			file.write((char *)& bl,sizeof(bl));
			file.close();
      //	exit(0);
	}
      }
	if(f==0)

	       {
			cout<<"Enter correct bill number."<<endl;
		}

		file.close();

}
void billread(int no)
{
fstream file;
int f=0;
float sum=0;
bill bl;
file.open("bill.txt",ios::in| ios::out |ios::app);
file.seekg(0);

     cout<<"Billno ="<<no;
     cout<<"\n-------------------Bill Information---------------------"<<endl;
     cout<<"Bookno\t\tQuantity\t\tPrice\tTotal"<<endl;
     cout<<"-----------------------------------------------------------"<<endl;
       while(	file.read((char *) & bl,sizeof(bl)))
       {
		if(bl.billno==no)
		{
		f=1;
		sum=sum+(bl.price*bl.quantity);
		bl.display();
		cout<<"\n";
		}
	}

	 if(f==1)
	 {
	  cout << "\nFinal Total="<<sum<<endl;
	 }
		if(f==0)
		{
		cout<<"Bill Number is not present";
		}
       }

int billno1(void)
{
       bill bl;
	fstream file;
	file.open("bill.txt",ios::in | ios::out |ios::end);
	 int pos= sizeof(bl);
	file.seekg(-pos,ios::end);
	file.read((char *) & bl,sizeof(bl));
	int k=bl.billno;
	      //	b.putdata();
		file.close();
		return(k+1);

}
/*int main()
{
	fstream file;
	bill bl[5];

	clrscr();
	file.open("bill.txt", ios::in | ios::out | ios::app);
	cout<<"Enter details for 3 books \n";

     /*	for(int i=0;i<3;i++)
	{
		bl[i].get();
		billsave(bl[i]);
	}
	billread(1);
	file.close();
	return 0;
}*/