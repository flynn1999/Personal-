// ... ... ... REAL ESTATE PROJECT ... ... ... //
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<dos.h>
//............CLASS FOR FLAT............
class flat
{
char name[30], address[100], occupation[20];
char phone[11];
int flatno;
int no1,no2,no3;

public:
flat()
{
  no1=300;
  no2=300;
  no3=300;
}
void setflatno(int x)
{
     flatno=x;
}
void setno1()
{
  no1=no1-1;
}
void setno2()
{
  no2=no2-1;
}
void setno3()
{
  no3=no3-1;
}
int retsetno1()
{
	return no1;
	}
	int retsetno2()
	{
	return no2;
	}
	int retsetno3()
	{
	return no3;
	}
//.......TO GET DETAILS FROM USER....//
	void getdata()
	{
	cout<<"\nEnter Name: ";
	gets(name);
	cout<<"\nEnter Address: ";
	gets(address);
	cout<<"\nEnter Mobile Number: ";
	gets(phone);

	while(strlen(phone)!=10)
	{
		cout<<"\nPhone number should be of 10 digits";
		cout<<"\Enter phone number again: ";
		gets(phone);
	}
	for(int i=0; i<10; i++)
	{
		if(!isdigit(phone[i]))
		{
			cout<<"\nPhone number should";
			cout<<" contain digits only";
			cout<<"\nEnter phone number again: ";
			gets(phone);
		}
	}
	cout<<"\nEnter Occupation:";
	gets(occupation);
	for(i=0; i<strlen(occupation); i++)
	{
		if(!isalpha(occupation[i]))
		{
			cout<<"\nOccupation should";
			cout<<" contain alphabets only";
			cout<<"\nEnter occupation again: ";
			gets(occupation);
		}
		}

	}
//.....TO SHOW DETAILS.....//
void show()
{
	cout<<"\nName: "<<name;
	cout<<"\nAddress: "<<address;
	cout<<"\nMobile number: "<<phone;
	cout<<"\nOccupation: "<<occupation;
	cout<<"\nFlat Number: "<<flatno;
}
//.....TO RETURN FLAT NUMBER.....//
	int retflatno()
	{
	return flatno;
	}
};
//.....INFORMATION ABOUT 1 BHK FLAT.....//
void onebhk()
{       flat f;
ifstream fin("one.dat",ios::in|ios::binary);
cout<<"\n\t\tONE BHK FLAT";
cout<<"\n\n\tNumber of halls=1";
cout<<"\n\tNumber of bedrooms=1";
cout<<"\n\tNumber of kitchens=1";
cout<<"\n\tArea of flat= 1600 sq ft";
cout<<"\n\tPrice= Rs.7500000";
while(fin.read((char *)&f,sizeof(f)))
{
cout<<"\n\tNumber of flats available="<<f.retsetno1();
fin.close();
}
//.....INFORMATION ABOUT 2 BHK FLAT.....//
void twobhk()
{       flat f;
ifstream fin("two.dat",ios::in|ios::binary);
cout<<"\n\t\tTWO BHK FLAT";
cout<<"\n\n\tNumber of halls=1";
cout<<"\n\tNumber of bedrooms=2";
cout<<"\n\tNumber of kitchens=1";
cout<<"\n\tArea of flat= 2500 sq ft";
cout<<"\n\tPrice= Rs.20000000";
while(fin.read((char *)&f,sizeof(f)))
{
cout<<"\nNumber of flats available="<<f.retsetno2();
fin.close();
}
//.....INFORMATION ABOUT 3 BHK FLAT.....//
void threebhk()
{       flat f;
ifstream fin("three.dat",ios::in|ios::binary);
cout<<"\n\t\tTHREE BHK FLAT";
cout<<"\n\n\tNumber of halls=1";
cout<<"\n\tNumber of bedrooms=3";
cout<<"\n\tNumber of kitchens=1";
cout<<"\n\tArea of flat= 5000 sq ft";
cout<<"\n\tPrice= Rs.45000000";
while(fin.read((char *)&f,sizeof(f)))
cout<<"\nNumber of flats available="<<f.retsetno3();
fin.close();
}
//......INFORMATION ABOUT FLATS......//
void info()
{
clrscr();
cout<<"\nInformation:\n";
int ch1;
cout<<"\n1 : Information about 1 bhk";
cout<<"\n2 : Information about 2 bhk";
cout<<"\n3 : Information about 3 bhk";
cout<<"\n\nEnter your choice : ";
cin>>ch1;
switch(ch1)
{
	case 1: onebhk();
	break;
	case 2: twobhk();
	break;
	case 3: threebhk();
	break;
	default: cout<<"\nWrong Choice";
}
	return;
}
//.....FUNCTION FOR REGISTRATION OF 1 BHK FLAT.....//
void reg1()
{
	flat one;
	ifstream fin;
	fin.open("one.dat", ios::binary|ios::in);
	int x=0, a=0, i;
	while(fin.read((char *)&one, sizeof(flat)))
	 {

	x= one.retflatno();
	 }
	 if(x<300)
	 {
	x++;
	one.setflatno(x);
	one.setno1();
	fin.close();
	cout<<"\nEnter details for registration\n";
	one.getdata();
	cout<<"\n\nFlat Registered\n";
	cout<<"\nFlat No="<<x;
	ofstream fout;
	fout.open("one.dat", ios::binary|ios::app);
	fout.write((char *)&one,sizeof(flat));
	fout.close();
	 }
	 else
	 {
	cout<<"\n\nSORRY... No more flats available...!!!";
	 }
	 getch();
	 return;
}
//.....FUNCTION FOR REGISTRATION OF 2 BHK FLAT.....//
void reg2()
{
	flat two;
	cout<<"\nEnter details for registration\n";
	ifstream fin;
	fin.open("two.dat", ios::binary|ios::in);
	int x=0;
	while(fin.read((char *)&two, sizeof(flat)))
	 {
	x= two.retflatno();
	 }
	 if(x<300)
	 {
	x++;
	two.setflatno(x);
	two.setno2();
	fin.close();
	two.getdata();
	cout<<"\n\nFlat Registered\n";
	cout<<"\nFlat No="<<x;
	ofstream fout;
	fout.open("two.dat", ios::binary|ios::app);
	fout.write((char *)&two,sizeof(flat));
	fout.close();
	 }
	 else
	 {
	cout<<"\n\nSORRY... No more flats available...!!!";
	 }
	 getch();
	 return;
}
//.....FUNCTION FOR REGISTRATION OF 3 BHK FLAT.....//
void reg3()
{
flat three;
cout<<"\nEnter details for registration\n";
ifstream fin;
fin.open("three.dat", ios::binary|ios::in);
int x=0;
while(fin.read((char *)&three, sizeof(flat)))
 {
x= three.retflatno();
 }
 if(x<300)
 {
	x++;
	three.setflatno(x);
	three.setno3();
	fin.close();
	three.getdata();
	cout<<"\n\nFlat Registered\n";
	cout<<"\nFlat No="<<x;
	ofstream fout;
	fout.open("three.dat", ios::binary|ios::app);
	fout.write((char *)&three,sizeof(flat));
	fout.close();
 }
	 else
	 {
	cout<<"\n\nSORRY... No more flats available...!!!";
	 }
	 getch();
	 return;
}
//......FUNCTION FOR REGISTRATION......//
void reg()
{
clrscr();
cout<<"\nRegistration:\n";
char num;
cout<<"\nEnter flat to be registered(1/2/3 bhk)= ";
cin>>num;
switch (num)
{
	case '1': reg1();
	  break;
	case '2': reg2();
	  break;
	case '3': reg3();
	  break;
	default : cout<<"\nWrong Chgoice!!";
}
	return;
}
//.....FUNCTION TO DISPLAY DETAILS OF 1 BHK FLAT.....//
void disp1()
{
ifstream fin;
fin.open("one.dat", ios::binary);
if(!fin)
{
	cout<<"\nError in displaying details";
	return;
}
flat temp;
while(fin.read((char*)&temp, sizeof(temp)))
{
	cout<<endl;
	temp.show();
}

fin.close();
 }
 //.....FUNCTION TO DISPLAY DETAILS OF 2 BHK FLAT.....//
 void disp2()
 {
ifstream fin;
fin.open("two.dat", ios::binary);
if(!fin)
{
	cout<<"\nError in displaying details";
	return;
}
flat temp;
while(fin.read((char*)&temp, sizeof(temp)))
{
	cout<<endl;
	temp.show();
}
	fin.close();
}
//.....FUNCTION TO DISPLAY DETAILS OF 3 BHK FLAT.....//
void disp3()
{
ifstream fin;
fin.open("three.dat", ios::binary);
if(!fin)
{
	cout<<"\nError in displaying details";
	return;
}
flat temp;
while(fin.read((char*)&temp, sizeof(temp)))
{
	cout<<endl;
	temp.show();
}
	fin.close();
}
//......FUNCTION TO DISPLAY DETAILS OF FLATS BOOKED......//
void display()
{
	clrscr();
	char num;
	cout<<"\nDisplaying Details:\n";
	cout<<"\nEnter flat type whose details have to be displayed(1/2/3)= ";
	cin>>num;
	switch (num)
	{
	case '1': disp1();
                break;
	case '2': disp2();
	break;
	case '3': disp3();
	break;
	default: cout<<"\nWrong Choice!!";
	}
	return;
}
//.....FUNCTION TO DISPLAY DETAILS OF A PARTICULAR 1 BHK FLAT.....//
void search1(int fnum)
{
	ifstream fin;
	flat temp;
	fin.open("one.dat", ios::binary);
	int f=0;
	if(!fin)
	{
	cout<<"\nError!!!!";
	return;
	}
	while(fin.read((char*)&temp, sizeof(temp)))
	{
	if(temp.retflatno()==fnum)
	{
	temp.show();
	f=1;
	}
	}
	if(f==0)
	cout<<"\nThis flat is not booked yet!!";
	return;
}
//.....FUNCTION TO DISPLAY DETAILS OF A PARTICULAR 2 BHK FLAT.....//
void search2(int fnum)
{
ifstream fin;
flat temp;
fin.open("two.dat", ios::binary);
int f=0;
if(!fin)
{
	cout<<"\nError!!!!";
	return;
}
while(fin.read((char*)&temp, sizeof(temp)))
{
	if(temp.retflatno()==fnum)
	{
		temp.show();
		f=1;
	}
}
	if(f==0)
	cout<<"\nThis flat is not booked yet!!";
	return;
}
//.......FUNCTION TO DISPLAY DETAILS OF A PARTICULAR THREE BHK FLAT......
void search3(int fnum)
{
ifstream fin;
flat temp;
fin.open("three.dat", ios::binary);
int f=0;
if(!fin)
{
	cout<<"\nError!!!!";
	return;
}
while(fin.read((char*)&temp, sizeof(temp)))
{
	if(temp.retflatno()==fnum)
	{
	temp.show();
	f=1;
	}
	}
	if(f==0)
	cout<<"\nThis flat is not booked yet!!";
	return;
}
//......FUNCTION TO DISPLAY DETAILS OF A PARTICULAR FLAT.........
void parflat()
{
clrscr();
int flatnum,no;
cout<<"\nShowing Particular Details:\n";
cout<<"\nEnter type of flat(1/2/3 bhk):";
cin>>no;
if(no==1||no==2||no==3)
{
	cout<<"\n\nEnter the flat number whose details";
	cout<<" you want to see:";
	cin>>flatnum;
	switch(no)
	{
		case 1:search1(flatnum);
		break;
		case 2:search2(flatnum);
		break;
		case 3:search3(flatnum);
		break;
	}
	}
	else
	{
	cout<<"\nWrong choice!!";
	}
}
//......FUNCTION TO CANCEL A ONE BHK FLAT....
void cancel1()
{
ifstream fin;
int flatnum,f=0;
flat tem;
ofstream fout;
fin.open("one.dat",ios::binary);
fout.open("temp.dat",ios::binary|ios::app);
if(!fin)
{
	cout<<"\nError!!";
	getch();
	return;
}
cout<<"\n\nEnter flat number to be cancelled:";
cin>>flatnum;
while(fin.read((char*)&tem,sizeof(tem)))
{
	if(tem.retflatno()!=flatnum)
	{
	fout.write((char*)&tem,sizeof(tem));
}
	else
	{
	f=1;
	}
	}
	fin.close();
	fout.close();
	remove("one.dat");
	rename("temp.dat","one.dat");
	if(f==0)
	{
	   cout<<"\n Flat not booked yet";
	   getch();
	}
	else
	{
	   cout<<"\nThe flat has been cancelled";
	}
	getch();
}
//..FUNCTION TO CANCEL A TWO BHK FLAT........
void cancel2()
{
ifstream fin;
int flatnum,f=0;
flat tem;
ofstream fout;
fin.open("two.dat",ios::binary);
fout.open("temp.dat",ios::binary|ios::app);
if(!fin)
{
	cout<<"\nError!!";
	getch();
	return;
}
cout<<"\n\nEnter flat number to be cancelled:";
cin>>flatnum;
while(fin.read((char*)&tem,sizeof(tem)))
{
	if(tem.retflatno()!=flatnum)
	{
	fout.write((char*)&tem,sizeof(tem));
	}
	else
	{
	f=1;
	}
	}

	fin.close();
	fout.close();
	remove("two.dat");
	rename("temp.dat","two.dat");
	if(f==0)
	{
	   cout<<"\n Flat not booked yet";
	   getch();
	}
	else
	{
	   cout<<"\nThe flat has been cancelled";
	}
	getch();
}
//.......FUNCTION TO CANCEL A THREE BHK FLAT........
void cancel3()
{
ifstream fin;
int flatnum,f=0;
flat tem;
ofstream fout;
fin.open("three.dat",ios::binary);
fout.open("temp.dat",ios::binary|ios::app);
if(!fin)
{
	cout<<"\nError!!";
	getch();
	return;
}
cout<<"\n\nEnter flat number to be cancelled:";
cin>>flatnum;
while(fin.read((char*)&tem,sizeof(tem)))
{
	if(tem.retflatno()!=flatnum)
	{
	fout.write((char*)&tem,sizeof(tem));
	}
	else
	{
	f=1;
	}
}
fin.close();
fout.close();
remove("three.dat");
rename("temp.dat","three.dat");
if(f==0)
{
   cout<<"\n Flat not booked yet";
   getch();
}
	else
	{
	   cout<<"\nThe flat has been cancelled";
	}
	getch();
}
//......function for cancellation of flat.........
void cancel()
{
clrscr();
int type;
cout<<"\nFor Cancellation:\n";
cout<<"\nEnter the type of flat to be cancelled(1/2/3)= ";
cin>>type;
if(type==1||type==2||type==3)
{
	switch(type)
	{
	case 1:cancel1();
	break;
	case 2:cancel2();
	break;
	case 3:cancel3();
	break;
	}
	}
	else
	{
	cout<<"\nWrong choice!!....";
	}
}
//...........FUNCTION TO DISPLAY DETAILS OF COMPANY.........//
void company()
{
clrscr();
cout<<"\n\n\n\tDetails of our company:\n";
gotoxy(10,10);
cout<<"\n\t\t\t   APN CO. was founded by ";
cout<<"\n\t\t  Abhyuday Gaur, ";
cout<<"  Nakshtra Sharma and Parv Jain";
cout<<"\n\t\t\t   in the year 2017 with ";
cout<<"\n\t     a view of providing quality affordably,which were  ";
cout<<"\n\t      essentially missing for a middle and upper class ";
cout<<"\n\t    families. APN housing society is one of the top names ";
cout<<"\n\t\t         in the field of real estate. ";
getch();
}
//.............MAIN FUNCTION..................
void main()
{
       //textcolor(WHITE);
       //textbackground(BLACK);
	clrscr();
	char ch;
	int ch2;
	do
	{
	clrscr();
	cout<<"\n\n\n\n Welcome To A P N \n\n\n\n";
	system("pause");
	clrscr();
	cout<<"\n\t\t\t*****WELCOME TO APN CITY*****";
	cout<<"\n\n\tSELECT YOUR CHOICE\n\n";
	cout<<"\n\t\t1:Details of Our Company";
	cout<<"\n\t\t2:Information about Flats";
	cout<<"\n\t\t3:Book Flats";
	cout<<"\n\t\t4:Display Details of Flats Booked";
	cout<<"\n\t\t5:Show Particular Details of a Flat";
	cout<<"\n\t\t6:For Cancellation of Flat";
	cout<<"\n\t\t7:Exit";
	cout<<"\n\t\t\tEnter Your Choice: ";
	cin>>ch2;
	switch(ch2)
	{
		case 1:	company();
			break;
		case 2: info();
			break;
		case 3:	reg();
			break;
		case 4: display();
			break;
		case 5: parflat();
			break;
		case 6: cancel();
			break;
		case 7:exit(0);
		default:cout<<"\nWrong choice!!";
			break;
	}
	cout<<"\n\nDo you want to continue(y/n) ?  ";
	cin>>ch;
}while(ch=='y'||ch=='Y');
getch();
}