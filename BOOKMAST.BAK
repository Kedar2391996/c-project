#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
int find(int);
class book
{
       public:	int bookno;
	char bookname[50];
	char authorname[50];
      public:	int stock;
	int edition;
	char type[50];
      public:	float cost;
	public: void getdata();
	public: void putdata();
};
void book::getdata()
{
	cout<<"enter book number";
	cin>>bookno;
	cout<<"enter book name";
	gets(bookname);
	cout<<"enter author name";
	cin>>authorname;
	cout<<"enter stock";
	cin>>stock;
	cout<<"enter edition";
	cin>>edition;
	cout<<"enter type of book";
	gets(type);
	cout<<"enter cost of book";
	cin>>cost;
}
void searchbook(int n)
{
	int f=0;
	book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
	while( file.read((char *) & b,sizeof(b)))
	{
		if(b.bookno==n)
		{
		       f=1;
			b.putdata();
		}
		}
		 if(f==0)
		{
			cout<<"Enter correct book number."<<endl;
		}
		file.close();


}
void modifybook(int n,int m,float pz)
{
      int f=0;
	int p=0;
	book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out);
	file.seekg(0);

	while(file.read((char *) & b,sizeof(b)))
       {
       p=p+1;
       if(b.bookno==n)
	{
			f=1;
				int k=  b.stock;
		   b.stock=k+m;
		   b.cost=pz;
			 int pos=(1)*sizeof(b);
	       //		file.seekg(pos,ios::beg);
			file.seekg(-pos,ios::cur);
			clrscr();

		       //	b.putdata();
		     //	b.getdata();

			// file.seekp(-pos,ios::cur);
		     //	file.seekp(file.tellg()-sizeof(b));
			file.write((char *)& b,sizeof(b));
			file.close();
	exit(0);
	}
       }

		if(f==0)
		{
			cout<<"Enter correct book number."<<endl;
		}
		file.close();

}
//}
int bookno1(void)
{
       book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out |ios::end);
	 int pos= sizeof(b);
	file.seekg(-pos,ios::end);
	file.read((char *) & b,sizeof(b));
	int k=b.bookno;
	      //	b.putdata();
		file.close();
		return(k+1);

}
void updatebook(int n,int m)    //for decreasing stock
{
	int f=0;
	int p=0;
	book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out);
	file.seekg(0);

	while(file.read((char *) & b,sizeof(b)))
       {
       p=p+1;
       if(b.bookno==n)
	{
			f=1;
				int k=b.stock;
		   b.stock=k-m;
		//   b.cost=pz;
			 int pos=(1)*sizeof(b);
	       //		file.seekg(pos,ios::beg);
			file.seekg(-pos,ios::cur);
			clrscr();

		       //	b.putdata();
		     //	b.getdata();

			// file.seekp(-pos,ios::cur);
		     //	file.seekp(file.tellg()-sizeof(b));
			file.write((char *)& b,sizeof(b));
			file.close();
      //	exit(0);
	}
      }
	if(f==0)

	       {
			cout<<"Enter correct book number."<<endl;
		}

		file.close();

}
char* booknmsearch(int n)           //for retrieving book name
{
int f=0;
 book b;
fstream file;
file.open("book.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);

while(   file.read((char *) & b,sizeof(b)))
	{
		if(b.bookno==n)
		{
		f=1;
		return (b.bookname);
		}

	}


	if(f==0)
	{
		cout<<"Enter correct book number."<<endl;
		}
	file.close();

}
int booknosearch(char *s)           //for retrieving book name
{
int f=0;
 book b;
fstream file;
file.open("book.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);

while(   file.read((char *) & b,sizeof(b)))
	{
		if(strcmp(b.bookname,s)==0)
		{
		f=1;
		return (b.bookno);
		}

	}


	if(f==0)
	{
		cout<<"Enter correct book number."<<endl;
		}
	file.close();

}
float searchprice(int n)
{
	int f=0;
	book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
	while( file.read((char *) & b,sizeof(b)))
	{
		if(b.bookno==n)
		{
		     f=1;
			return (b.cost);
		}
      }
		if(f==0)
		{
		cout<<"Enter correct book number to search"<<endl;
		}
file.close();

}

void readbook()
{
book b;
fstream file;
file.open("book.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);
 cout<<"**************************Book Information***********************"<<endl;
 cout<<"Book No\tBook Name\tAuthor Name\tStock\tEdition\tType\tCost"<<endl;
 cout<<"******************************************************************"<<endl;
while(   file.read((char *) & b,sizeof(b)))
{
	 b.putdata();
	 cout<<"\n";
}
	file.close();

}
void save(book b)
{
fstream file;
	file.open("book.txt",ios::in| ios::out| ios::app);
	file.write((char *) & b,sizeof(b));
	file.close();

}
void book::putdata()
{
	cout<<setiosflags(ios::left)
	<<setw(5)<<bookno
	<<setiosflags(ios::right)
	<<setw(10)<<bookname
	<<setiosflags(ios::right)
	<<setw(20)<<authorname
	<<setiosflags(ios::right)
	<<setw(10)<<stock
	<<setiosflags(ios::right)
	<<setw(10)<<edition
	<<setiosflags(ios::right)
	<<setw(5)<<type
	<<setiosflags(ios::right)
	<<setw(8)<<cost
	<<endl;
}
int find(int n)
{
	int f=0;
	book b;
	fstream file;
	file.open("book.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
	while( file.read((char *) & b,sizeof(b)))
	{
		if(b.bookno==n)
		{
			f=1;
			return (b.stock);
		}
	}
		if(f==0)
		{
		cout<<"Enter correct book number "<<endl;
		}
	file.close();

}


       //	fstream file;
/*int main()
{
	book b,b1;
	 int ch,no;
int n=1;
do
{
clrscr();
cout<<"\n\t 1. Enter Book Details";
cout<<"\n]t 2.Read Deatils";
 cout<<"\n\t 3.Search Record";
    cin>>ch;
  switch(ch)
{
case 1: {

	b.getdata();
	save(b);
	break;
	}
case 2:{

	read();
	break;
}
case 3: {
 file.close();
     cout<<"\n\tEnter Book number to search";
     cin>>n;
     search(n);
     break;
}}

cout<<"\n\tDo you want to continue press 1";
cin>>n;
}
while(n==1);


} */