#include<iostream.h>
#include<iomanip.h>
#include<fstream.h>
#include<time.h>
#include<string.h>
#include<conio.h>
class credit
{
       public:	char date[10];
       public:	int quantity;
 public:	float price;
public:	int status;
      public:	int custno;
  public:	int bookno;
  public :int billno;
	public:
		void getcredit();
		void display();

};
void creditsave(credit cr)
{

	    fstream file;
	    file.open("credit.txt", ios::in | ios::out | ios::app);
	    file.write((char *) & cr,sizeof(cr));
	     file.close();
      /*	credit item[5];
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
	}*/

      /*	fstream file;
	file.open(" " , ios::in | ios::out | ios::app);
	file.write((char *) & item,sizeof(item));
	file.close(); */
}
void readcust(int n)
{
	credit cr;
	int sum=0;
	fstream file;
       file.open("credit.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);
 cout<<"************************Credit Payment*****************************"<<endl;
 cout<<"Status\tBook No\tQuantity\tDate\tPrice\tBill No"<<endl;
 cout<<"*******************************************************************"<<endl;
	while(   file.read((char *) & cr,sizeof(cr)))
{
	if(cr.custno==n && cr.status==0)
	{
	  cr.display();
			sum=sum+(cr.price*cr.quantity);
			//cr.display();
			cout<<"Total:"<<setw(10)<<(cr.price*cr.quantity)
			<<endl;
	}
}
 cout<<"Pending Bill Amount"<<sum<<endl;
	file.close();

}
void updatestatus(int n,int m)    //for updating status
{
	int f=0;
	int p=0;
	credit cr;
	fstream file;
	file.open("credit.txt",ios::in | ios::out);
	file.seekg(0);
 cout<<"************************Credit Payment*****************************"<<endl;
 cout<<"Status\tBook No\tQuantity\tDate\tPrice\tBill No"<<endl;
 cout<<"*******************************************************************"<<endl;
	while(file.read((char *) & cr,sizeof(cr)))
       {
       p=p+1;
       if(cr.custno==n && cr.status==0 && cr.billno==m)
	{
			f=1;
				int k=cr.status;
		   cr.status=k+1;
		//   b.cost=pz;
			 int pos=(1)*sizeof(cr);
	       //		file.seekg(pos,ios::beg);
			file.seekg(-pos,ios::cur);



		     //	b.getdata();

			// file.seekp(-pos,ios::cur);
		     //	file.seekp(file.tellg()-sizeof(b));
			file.write((char *)& cr,sizeof(cr));
			file.close();
      //	exit(0);
	}
		cr.display();
      }

	if(f==0)

	       {
			cout<<"Enter correct customer number."<<endl;
		}

		file.close();

}
/*void search(int n)
{
	credit ;
	fstream file;
	file.open("creditdetails.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
	while( file.read((char *) & b,sizeof(b)))
	{
		if(.custno==n)
		{
			b.putdata();
		}
		file.close();

} */
void credit::getcredit()
{
    //cout<<"Enter date";
   // cin>>date;
    //cout<<"Enter customer number";
    //cin>>custno;
    cout<<"Enter status of payment";
    cin>>status;
    cout<<"Enter book number";
    cin>>bookno;
    cout<<"Enter Qauntity";
    cin>>quantity;
}
void searchcrcust(int n)       //for display
{
	int f=0;
	credit cr;
	int sum=0;
      //	bill bl;
      //	int p= billno1();
      //	cout<<p;

	  fstream file;
	file.open("credit.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
 cout<<"************************Credit Payment*****************************"<<endl;
 cout<<"Status\tBook No\tQuantity\tDate\tPrice\tBill No"<<endl;
 cout<<"*******************************************************************"<<endl;
	while( file.read((char *) & cr,sizeof(cr)))
	{
		if(cr.custno==n && cr.status==0)
		{
		       f=1;
			sum=sum+(cr.price*cr.quantity);
			cr.display();
			cout<<"Total:"<<setw(10)<<(cr.price*cr.quantity)
			<<endl;
			    //	bl.billno=p;
		      //	strcpy( bl.date,"2/11/18");//todays date
			 // bl.bookno=cr.bookno;
			 //  bl.quantity=cr.quantity;
			 //	bl.price=cr.price;
			   //  billsave(bl);
		      //	return(cr);
		}
		 cout<<"Pending Bill Amount"<<sum<<endl;
		}
		 if(f==0)
		{
			cout<<"Enter correct customer number."<<endl;
		}


		file.close();


}
void credit::display()
{
	cout<<setiosflags(ios::left)
	<<setw(5)<<status
	<<setiosflags(ios::right)
	<<setw(8)<<bookno
	<<setiosflags(ios::right)
	<<setw(8)<<quantity
	<<setiosflags(ios::right)
	<<setw(17)<<date
	<<setiosflags(ios::right)
	<<setw(6)<<price
	<<setiosflags(ios::right)
	<<setw(5)<<billno
	<<endl;

}

/*int main()
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
} */
