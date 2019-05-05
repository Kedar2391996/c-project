#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>
class purchase
{
  public:	int bookno;
  public:	char status[5];
  public:	int dealerid;
  public:	int orderno;
   public:  int quantity;
    public:  float price;
	public:
		void getpurchase();
		void putpurchase();

};
void purchase::getpurchase(void)
{
	cout<<"Enter dealer id";
	cin>>dealerid;
	cout<<"Enter book number";
	cin>>bookno;
     /*	cout<<"Enter status of order";
	cin>>status;*/
	cout<<"Enter quantity:"<<endl;
	cin>>quantity;
	cout<<"Enter price of book :"<<endl;
	cin>>price;
	cout<<"Enter order number";
	cin>>orderno;
}
void purchase::putpurchase(void)
{
	cout<<setiosflags(ios::left)
	<<setw(10)<<dealerid
	<<setiosflags(ios::right)
	<<setw(10)<<bookno
	<<setiosflags(ios::right)
	<<setw(10)<<status
	<<setiosflags(ios::right)
	<<setw(10)<<orderno
	<<endl;
}
fstream file;
void purchasesave(purchase p)
{
fstream file;
	file.open("purchase.txt",ios::in| ios::out| ios::app);
	file.write((char *) & p,sizeof(p));
	file.close();

}
/*int main()
{
	purchase item[5];
	file.open("purchaseorder.txt", ios::in| ios::out | ios::app);
	cout<<"Enter book numbers to order";
	for(int i=0;i<5;i++)
	{
		item[i].getpurchase();
		file.write((char *) & item[i],sizeof(item[i]));
		}
} */