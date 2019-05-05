#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
class dealer
{
	long int mobileno;
 public:	char dealernm[50];
    public:	int dealerid;
	public:
		void getdealer();
		void display();
};
void dealer::getdealer()
{
	cout<<"Enter dealer name";
	gets(dealernm);
	cout<<"Enter dealer id";
	cin>>dealerid;
	cout<<"Enter dealer mobile number";
	cin>>mobileno;
}
void dealer::display()
{
	cout<<setiosflags(ios::left)
	<<setw(20)<<dealernm
	<<setiosflags(ios::right)
	<<setw(5)<<dealerid
	<<setiosflags(ios::right)
	<<setw(25)<<mobileno
	<<endl;

}
void save(dealer d)
{
	fstream file;
	file.open("dealer.txt " , ios::in | ios::out | ios::app);
	file.write((char *) & d,sizeof(d));
	file.close();
}
void dread()
{
	fstream file;
	dealer d;
file.open("dealer.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);
   cout<<"************************Dealer Information************************"<<endl;
   cout<<"Dealer Name\t\tDealer Id\tMobile No"<<endl;
   cout<<"*******************************************************************"<<endl;
while(   file.read((char *) & d,sizeof(d)))
{
	 d.display();
}
	file.close();

}
void dsearch(int n)
{
	dealer d ;
	fstream file;
	file.open("dealer.txt",ios::in | ios::out | ios::app);
	file.seekg(0);
	while( file.read((char *) & d,sizeof(d)))
	{
		if(d.dealerid==n)
		{
			d.display();
		}
		file.close();

}
}
char* dealersearch(int n)
{
int f=0;
 dealer d;
fstream file;
file.open("dealer.txt", ios::in | ios::out | ios::app);
	 file.seekg(0);

while(   file.read((char *) & d,sizeof(d)))
	{
		if(d.dealerid==n)
		{
		f=1;
		return (d.dealernm);
		}

	}


	if(f==0)
	{
		cout<<"Enter correct dealer id number."<<endl;
		}
	file.close();

}
/*fstream file;
int main()
{
    dealer d;
    file.open("dealer.txt", ios::in | ios::out | ios::app);
    file.write((char *) & d,sizeof(d));
} */