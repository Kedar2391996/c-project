#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include "c:\\tc\\bookshop\\cust.cpp"
#include "c:\\tc\\bookshop\\dealer.cpp"
#include "c:\\tc\\bookshop\\creditsa.cpp"
#include "c:\\tc\\bookshop\\bookmast.cpp"
#include "c:\\tc\\bookshop\\bill.cpp"
#include "c:\\tc\\bookshop\\purchase.cpp"
//fstream file;
int ch;
int did;
int custno;
char status[10];
int billno;
int q;
char booknm[50];
char dealernm[50];
int qty;
char n1[50];
int bk;
float pz;
int n;
 char custnm[50];
void main()
{
	int z;
	purchase p;
	customer c1;
	credit cr;
	bill bl;
	int i;
	book b ;
       credit c;
       dealer d;
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
   int gd = DETECT, gm;
       int x,y;
    // location of left, top, right, bottom
   int left = 150, top = 100;
   int right = 450, bottom = 350;
    int left1 = 155, top1 = 105;
    int right1 = 445, bottom1 = 345;
    char username[10];
     char pass[10];
     int k,m;
     x = getmaxx()/2 ;
   y = getmaxy()/2;
   cout<<x<<"---"<<"\n";
   cout<<y;



    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "C:\\TC\\bgi");

    // rectangle function
  rectangle(left, top, right, bottom);
     rectangle(left1, top1, right1, bottom1);
   gotoxy(30,10);
      cout<<"User Name";
    gotoxy(41,10);
    cin>>username;
     cout<<"\n";
   gotoxy(30,12);
   cout<<"Enter Password";
   gotoxy(45,12);
    gets(pass);
      k=strcmp(pass,"admin");
      if(k==1)
	 {
		gotoxy(65,12);
	cout<<"Fail...";
	 }
	 else
       {
		gotoxy(35,12);
		cout<<"\n";
		cout<<"Sucess !!!";
		clrscr();
cout<<"**********************BOOKSTORE INVENTORY AND BILLING SYSTEM****************"<<endl;


cout<<"****************************************************************************"<<endl;
		do
		{
		z=1;
		cout<<"Enter choice: "<<endl;
		cout<<"1. Sale "<<endl;
		cout<<"2. Bill information"<<endl;
		cout<<"3.Customer Information"<<endl;
		cout<<"4.Book Information"<<endl;
		cout<<"5.Dealer Information"<<endl;
		cout<<"6.Purchase Books"<<endl;
		cin>>m;
		switch(m)
		{
		case 1: {
			   int m1;
		cout<<"1.Credit Customer:"<<endl;
		cout<<"2.Receive payment of credit customer:"<<endl;
		cout<<"3.Not a credit customer:"<<endl;
		cout<<"Enter your choice :";
		cin>>m1;
		switch(m1)
		{
			case 1:
			{
		      cout<<"Enter credit customer number: "<<endl;
		      cin>>custno;
		      strcpy(custnm,custsearch(custno));
		      cout<<custnm<<endl;
		      int n;
		      cout<<"Enter how many books do you want :";
		      cin>>n;
		      if(n>11)
		      {
			  cout<<"Maximum 10 at a time"<<endl;

		      }
		      else
		      {         int p= billno1();
				cr.billno=p;
				bl.billno=p;
				cout<<p;
				for(i=1;i<=n;i++)
			{

			 cout<<"Enter book number"<<endl;
			 cin>>bk;
			 strcpy(booknm,booknmsearch(bk));
			cout<<booknm<<endl;
		 // cout<<"\n\tEnter Book name ";
		 //	 cin>>n1;
		 //	n=booknosearch(n1);
		 //	cout<<"Bookno"<<n;
		  //	bk=n;
			 q=find(bk);
		       //	  cout<<" quantity :"<<q<<endl;
			  cout<<"Enter quantity you want :"<<endl;
			  cin>>qty;
			  if(q>=qty)
			  {
			  pz=searchprice(bk);
			  cout<<"Price is :"<<pz<<endl;
			  cr.custno=custno;
			   strcpy( cr.date,"26/11/18");
			  cr.bookno=bk;
			  cr.quantity=qty;
			  cr.price=pz;
			  cr.status=0;
			  cout<<(qty*pz)<<endl;
			  creditsave(cr);
			  bl.custno=custno;
			  bl.bookno=bk;
			  bl.quantity=qty;
			  bl.price=pz;
			  bl.status=0;
			  billsave(bl);
			  updatebook(bk,qty);
			   }

			    else
			   {
			   cout<<"Stock is unavailable"<<endl;
			   }
			   }
			   }
		     break;
		     }
		  case 2:
		  {
		      cout<<"Enter credit customer number :";
		      cin>>custno;
		     // strcpy(custnm,,custsearch(custno));
		     readcust(custno);
		     cout<<"Enter credit bill number you are paying :";
		      cin>>billno;
		    updatestatus(custno,billno);
		    updatebillstatus(custno,billno);
		     break;
		  }

		      case 3:
		      {
		      int n;
		      cout<<"Enter how many books do you want :";
		      cin>>n;
		      if(n>11)
		      {
			  cout<<"Maximum 10 at a time"<<endl;

		      }
		       else
			{
		      int p= billno1();
			bl.billno=p;
			cout<<p;
			for(i=1;i<=n;i++)
			{
				 cout<<"Enter book number"<<endl;
				 cin>>bk;
				 strcpy(booknm,booknmsearch(bk));
				 cout<<booknm<<endl;
		      /*	 cout<<"\n\tEnter Book name ";
			 cin>>n1;
			n=booknosearch(n1);
			cout<<"Bookno"<<n<<endl;
			bk=n;*/
				 q=find(bk);
				 cout<<"Enter quantity you want :"<<endl;
				 cin>>qty;
				   if(q>=qty)
				 {
				pz=searchprice(bk);
			       cout<<"Price is :"<<pz<<endl;

				strcpy( bl.date,"23/10/18");
				 bl.bookno=bk;
				bl.quantity=qty;
				bl.price=pz;
				bl.status=1;
				 cout<<(qty*pz)<<endl;
				billsave(bl);
				 }
				 else
				 {
		      //	   cout<<" quantity :"<<q<<endl;
				  cout<<"Stock is unavailable"<<endl;
				}
			}
			  //   billread(4);
			   }


		 }
		 }
		  break;
		 }
	       case 2: {
			int z;
			credit cr;
		  //	bill b1;
			cout<<"1.Credit Customer payment"<<endl;
			cout<<"2. Display Bill Information"<<endl;
			cout<<"Enter your choice...: "<<endl;
			cin>>z;
			switch(z)
			{
			case 1:
			{
			 cout<<"Enter credit customer number:";
			 cin>>n;
			 searchcrcust(n);
		      //	int p= billno1();
		       //	bl.billno=p;

			 //	strcpy( bl.date,"23/10/18");//todays date
			// bl.bookno=cr.bookno;
			//bl.quantity=cr.quantity;
		       //	bl.price=cr.price;
		     // billsave(bl);


			 break;
			}
			case 2:
			{
			cout<<"Enter Bill number to display";
		      cin>>billno;
		       billread(billno);
			break;
			}
			}
			break;
			}
	      case 3:
		    {

			customer c;
			int n;
			int c1;
			cout<<"please select option\t\n"<<endl;
			cout<<"1.Insert New Customer"<<endl;
			cout<<"2.Search customer"<<endl;
			cout<<"3.Display All Customers"<<endl;
			cout<<"enter your choice";
			cin>>c1;
				switch(c1)              //customer switch//
				{
			case 1:
			{
				c.getcustdetails();
				save(c);
				break;
			}
			case 2:
			 {

				cout<<"enter no";
				cin>>n;
				custsearch(n);
				break;
			}
			case 3: {
				read();
				break;
				}
			default:
			{
			cout<<"Enter coorect choice";
			}
			}
			break;
		 }
	    case 4 : {
			int ch;
			cout<<"Enter your choice";  //book switch case//
			cout<<"\n\t 1. Enter Book Details";
			cout<<"\n]t 2.Read Deatils";
			cout<<"\n\t 3.Search Record";
			cout<<"\n4.Search Book No";
			cin>>ch;
			switch(ch)
			{
			case 1:
			{
				b.getdata();
				save(b);
				break;
			}
			case 2:
			{
			  readbook();

				break;
			}
			case 3:
			{
				file.close();
				cout<<"\n\tEnter Book number to search";
				cin>>n;
				searchbook(n);
				break;
		       }
		       case 4:
			{
				file.close();
				cout<<"\n\tEnter Book name to search";
				cin>>n1;
			n=booknosearch(n1);
			cout<<"Bookno"<<n;
				break;
		       }
		       }
		     break;
		     }
	   case 5: {
		int d1;         //dealer switch//
		cout<<"Enter your choice"<<endl;
		cout<<"1.Enter new Dealer\t\n"<<endl;
		cout<<"2.Enter dealer number to search\t\n"<<endl;
		cout<<"3.Display all dealer records\t\n"<<endl;
		cin>>d1;
		switch(d1)
		{
			case 1:{
				d.getdealer();
				save(d);
				break;
				}
			case 2:
			{
				cout<<"Enter number";
				dsearch(n);
				break;
			}
			case 3:
			{
				dread();
				break;
			}
			default  :
			{
				cout<<"Enter correct choice number";
				break;
			}

		}
		break;
	      }
		case 6:
			{
			 cout<<"Enter book number"<<endl;
			 cin>>bk;
			 strcpy(booknm,booknmsearch(bk));
			cout<<booknm<<endl;

			 cout<<"Enter dealer id :"<<endl;
			 cin>>did;
			 strcpy(dealernm,dealersearch(did));
			cout<<dealernm<<endl;
			 cout<<"Enter Quantity to purchase :"<<endl;
			 cin>>qty;
			 cout<<"Enter price of book :"<<endl;
			 cin>>pz;
			 purchasesave(p);
			 modifybook(bk,qty,pz);

			}
		}
		cout<<"Do you want to continue :"<<endl;
		cin>>z;
		}while(z==1);
	 getch();
	 clrscr();

	 }


    getch();

    // closegraph function closes the graphics
    // mode and deallocates all memory allocated
    // by graphics system .
    closegraph();

}


