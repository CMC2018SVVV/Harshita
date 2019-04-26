//compile on turbo
#include <iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip.h>
//using namespace std;
void cash();
void Deposit();
void Withdraw();
void Choice();
void employee();
void userpart(void);
void partu(void);
void rec(void);
void load(void);
void loginin(void);
void loginm(void);
void p1(void);
void logom(void);
void layout(void);
void layout1();
void part(void);
void part2(void);
void logou(void);
void text(void);
void logoe(void);
void Page1();
void Forms();
void Formc();
int captcha();
void faltu();
void Emp();
void user();
void login();
void login2();
void create(void);
void userdetail();
void userbal();
void welcome();
//loan
void lpage1();
   void lformh();
   void lforme();
   void lformb();
   void lformp();
   int lcaptcha();
   void loption();
   void llogin();
   void ldetail();
   void showLD();
   void createpart();
     void partc();
     void create_nc();
     void create_ncc();
     void logo();
     void userh();
     void userdetail1();
     void userdetail2();
     void fdmain();
     void lpart2();
     void ltext();
     void part1();
     void part1a();
     void part12();
     void part12a();
   //void lcopy();
   //void ldisplay();
int f=0,v,c=0;
long int damounti;
char dobi[9],Phonei[11],adharnoi[13],pannoi[11],voternoi[11],drivingnoi[16];
char namei[10],fnamei[10],addressi[10];
char codei[15],passi[9];

char acc[15],pa[9];
class Bank{
public:
	long int damount;
	char dob[9],Phone[11],adharno[13],panno[11],voterno[11],drivingno[16];
	char name[10],fname[10],address[10];
	char code[15],pass[9];
	//public: int dob,Phone,damount,adharno,panno,voterno,drivingno;
	//char name[10],fname[10],address[10];
	//long long accountno;
	void read();
	void display();
	void accgen();
	void password();
	void searchdata(char *,char *);
	void searchdata2(char *,char *);
  void searchdata3(char *,char *);
  void searchdata4(char*);
	int storedata();
	void display2();
  void display3();
	void dname();
  void ldisplay();
	int accver(char *,char*);
  void lsearchdata(char *,char *);
  
  void deposit_withdraw(char *, int );
  void dep(int );
  void draw(int );
  int retdeposit();
};

class Loan:public Bank
{
    public:

    /*int damount;
    char name[10],fname[10],address[10],code[14],dob[9],phone[11],adharno[13],
    panno[11],voterno[11],drivingno[16],pw[9];*/
    long int lamount;
    char accno[15];
    //char name[20];
    void lread();
    //void ldisplay();
    void lloana();
   // void lsearchdata(char *,char *);
    //void ldisplay();
  //  void accgen();
  int lstoredata();
    void lcopy();
    void searchdata3(char *,char *);
    void ldisplay3();
};


 class fdacc : public Bank{
 void fdgen();
 public:
   void calculator();
  void storedata();
  void searchdataFD(char *);
  void displayFD();
  void readFd();
  void storedata1();
  

public:// char *fcode;    // fd no. have to given by bank;
  int fdtimep;
  int amt;
  int intamt;
  int intrest;
  int totalAmt;
 char fcode[6];
};



void Bank::searchdata(char *t,char *p)
{
 int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
   if(!strcmp(pass,p))
   {
  // cout<<"hello";
   //getch();
    display();
    co++;
   }
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}

}

 void Bank::searchdata2(char *t,char *p)
{
  cleardevice();
 int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
   if(!strcmp(pass,p))
   {
  // cout<<"hello";
   //getch();
    display2();
    co++;
   }
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}

}
void Bank::lsearchdata(char *t,char *p)
{
int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
   if(!strcmp(pass,p))
   {
   //cout<<"hello";
   //getch();
  ldisplay();
    co++;
   }
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}


}

void Bank::ldisplay()
{
  //cleardevice();
   gotoxy(27,10);
   puts(name);
 gotoxy(27,12);
 puts(fname);
 gotoxy(27,14);
 cout<<dob;
 gotoxy(27,16);
 puts(address);
 gotoxy(27,18);
 cout<<Phone;
 gotoxy(37,10);
 cout<<adharno;
 gotoxy(37,10);
 cout<<panno;

}
void Loan::ldisplay3()
{ cout<<"Hello";
getch();
cout<<"lamount";
cout<<lamount;
}
int Bank::accver(char *t,char *p)
{          int f=0;
  // int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
   if(!strcmp(pass,p))
   {
   f=1;
   return f;
    //co++;
   }
   }
   fin.read((char*)this,sizeof(*this));
  }
  /*if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  } */
}
return 0;
}

int Bank::storedata()
{
 /*if(bookid==0&&price==0)
 {
  cout<<"book data not ini";
  return 0;
 } */
  ofstream fout;
  fout.open("abcd.dat",ios::app|ios::binary);
  fout.write((char*)this,sizeof(*this));
  fout.close();
  return 1;

}


int Loan::lstoredata()
{
 /*if(bookid==0&&price==0)
 {
  cout<<"book data not ini";
  return 0;
 } */


  ofstream fout;
  fout.open("aloan.dat",ios::app|ios::binary);
  fout.write((char*)this,sizeof(*this));
  fout.close();
  return 1;

}


 void Bank::read()
 {
	fflush(stdin);
	gotoxy(19,11);
	gets(name);
	fflush(stdin);
	gotoxy(19,13);
	gets(fname);
	fflush(stdin);
	gotoxy(19,15);
	gets(dob);
	fflush(stdin);
	gotoxy(19,17);
	gets(address);
	fflush(stdin);
	//getch(  );
	gotoxy(19,19);
	gets(Phone);
	fflush(stdin);
	gotoxy(19,21);
	cin>>damount;
	fflush(stdin);
	gotoxy(59,11);
	gets(adharno);
	fflush(stdin);
	gotoxy(59,13);
	gets(panno);
	fflush(stdin);
	gotoxy(59,15);
	gets(voterno);
	fflush(stdin);
	gotoxy(59,17);
	gets(drivingno);

   }
void Bank::display(){
 cleardevice();
   layout1();
   userdetail1();
   gotoxy(32,12);
   puts(name);
 gotoxy(32,14);
 puts(fname);
 gotoxy(32,16);
 cout<<dob;
 gotoxy(32,19);
 puts(address);
 gotoxy(32,21);
 cout<<Phone;
 gotoxy(32,24);
 cout<<damount;
 getch();
 cleardevice();
 layout1();
 userdetail2();
 gotoxy(32,12);
 cout<<adharno;
 gotoxy(32,14);
 cout<<panno;
 gotoxy(32,16);
 cout<<voterno;
 gotoxy(32,18);
 cout<<drivingno;
 getch();
}

void Bank::display2()
{
   cleardevice();
   layout1();
   setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(170,80,"Balance History");
setcolor(15);
setfillstyle(1,LIGHTGRAY);
rectangle(11,120,629,428);
floodfill(12,130,15);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,155,"Name");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,155,500,175);
floodfill(201,165,0);
settextstyle(3,0,3);
outtextxy(20,195,"Account No");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,195,500,215);
floodfill(201,205,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,235,"Balance");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,235,500,255);
floodfill(201,245,0);
   gotoxy(20,10);
   puts(name);
   gotoxy(20,13);
   puts(code);
   gotoxy(20,16);
   cout<<damount;

}

void Bank::dname()
{
cleardevice();
layout1();
/*setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
setcolor(15);
settextstyle(4,0,8);
outtextxy(80,0,"Svvv Bank");
logo();
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,430,632,466);
floodfill(9,440,14);
*/user();
  gotoxy(36,20);
cout<<name;
getch();
}

void fdacc::readFd(){
  settextstyle(8,0,2);
  outtextxy(100,118,"Enter details");
   outtextxy(100,148,"Account no.:");
   gotoxy(45,11);
  cout<<acc;
   outtextxy(100,180,"FD no.:");//should be autometically genrated by bank
       //work on it
   gotoxy(45,13);
   fdgen();

   outtextxy(100,212,"Enter FD time period (In years) : ");
   gotoxy(45,15);

   cin>>fdtimep;
outtextxy(100,255,"Amount Should Not Equal To Total Balance In Account");
   outtextxy(100,244,"Enter amount :");
   gotoxy(45,17);
   cin>>amt;
   if(amt>=damount){
    clrscr();
    cout<<"This Amount Is Not Avalaible In Your Account";
    cout<<"Press Any Key To Go Back To Main Fd Menu";
   fdmain();
   }
   else{
    cout<<"Intrest rate will be : 2% ";
    calculator();
   /* intrest = amt*(2);
  totalAmt=amt+intrest;
   cout<<"Intrest will be:";
   gotoxy(45,20);
   
   cout<<intrest;
   outtextxy(100,332,"total amount will be:");
   gotoxy(45,23);
   cout<<totalAmt;*/
   // should be provided by bank
  // calculator();
  /* totalAmt = amt*pow((1 + 2/25),(4*fdtimep));
     intrest=totalAmt-amt;
     cout<<"Intrest amount will be:"<<intrest<<endl;
get`` ch();*/
   storedata1();
   getch();
clrscr();
fdmain();
}}
  
  void fdmain(){
    cleardevice();
    layout1();
    fdacc k;
//   cout<<"";
int choice;
cout<<"\n";
    cout<<"1.CREAT FD"<< endl;
      cout<<"2.DETAIL OF FD"<< endl;
      cout<<"3.EXIT"<< endl;
      cout<<"Enter 1 to 3 "<< endl;
      cin>>choice;
      switch(choice){
     case 1:k.readFd();
    break;
      case 2:k.searchdataFD(acc);
    break;
    case 3:
    
    //main page of bank management system
    cout<<"main page  ka function aayega";
    getch();
    exit(0);
    break;
      default:
    {cout<<"YOU ENTER WRONG CHOICE"<<endl;
    cout<<"Enter any key to go choose again";
    getch();
    cout<<"\n";
      fdmain();
    }
      }
  };

  void fdacc::searchdataFD(char *t)
{

 int co=0;
 ifstream fin;
 fin.open("fdFile.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(t,acc))
   {
    displayFD();
    co++;
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}

}
void fdacc::storedata1()
{
  ofstream fout;
  fout.open("fdFile.dat",ios::out|ios::binary);
  fout.write((char*)this,sizeof(*this));
  fout.close();
}

void fdacc::displayFD(){
Bank kk;
 cleardevice();
 clrscr();
 cout<<"account no."<<acc<<endl;
cout<<"FD no."<<fcode<<endl;
cout<<"Name";
kk.searchdata3(acc,pa);


//cout<<name<<endl;
 cout<<"time in years"<<fdtimep<<endl;
 cout<<"amount"<<amt<<endl;
 cout<<"Intrest will be:"<<intrest<<endl;
 cout<<"Total Amount Will Be:"<<totalAmt<<endl;
 cout<<"Enter any key to go back";
 getch();
 fdmain();
}

void fdacc::calculator()
{
   totalAmt = amt*pow((1 + 2/25),(4*fdtimep));
     intrest=totalAmt-amt;
     cout<<"Intrest amount will be:"<<intrest<<endl;
     cout<<"Total amount will be:"<<totalAmt<<endl;
 
  }
  void fdacc::fdgen() {
char ch;
int n=0;
//randomize();
while(n<5)
{
ch=(char)random(127);
//if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
 if(ch>='1'&&ch<='9')
{
fcode[n++]=ch;
}
}
fcode[n]='\0';
cout<<fcode;

}

void Bank::searchdata3(char *t,char *p)
{
 int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
   if(!strcmp(pass,p))
   {
   cout<<"hello";
   getch();
    display3();
    co++;
   }
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}

}

void Bank::display3()
{
   cleardevice();
   layout();
   cout<<name;
   //puts(code);
   //cout<<damount;

}




void logo(void)
{
//small logo start code
     rectangle(500,69,545,74); //upper rectangle
     rectangle(493,74,552,79); //lower rectangle
     line(495,38,550,38);  // big triangle base line
     line(495,38,522.5,15); //big triangle left
     line(550,38,522.5,15);  //big rectangle right
     line(507,34,538,34);     //small triangle base line
     line(507,34,522.5,21);   //small triangle left
     line(538,34,522.5,21);  //small triangle right
     line(503,69,503,38);  // 1st line
     line(542,69,542,38);   //last line
     line(509,69,509,38);  //2nd line
     line(536,69,536,38);    //2nd last line
     line(514,69,514,61);    // 3rd line lower
     line(514,38,514,47);   //3rd line upper
     line(520,69,520,63);  //4th line lower
     line(520,38,520,42);   //4th line upper
     line(526,69,526,64);  //5thline lower
     line(526,38,526,43);      //5th line upper
     line(531,69,531,59);    // 6th line lower
     line(531,38,531,47);    //6th line upper
     circle(522.5,53.5,10);
     arc(519.5,53.5,297,58,4);
     line(519.5,56.5,523,60); // r ke niche wali line
     line(518,49,524.5,49);   //top line
     line(520,53.5,524.5,53.5);    //middle
     //small logo ends
}
void user(void)
{
  setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(170,80,"User Detail Menu");
   setcolor(15);
 setfillstyle(1,MAGENTA);
 rectangle(180,150,420,380);
 floodfill(191,160,15);
 setcolor(0);
 settextstyle(7,0,4);
 outtextxy(250,180,"HELLO");

    setcolor(15);
 setfillstyle(1,YELLOW);
 circle(295,240,10);
 floodfill(296,240,15);
 arc(295,270,0,180,20);
 line(277,270,313,270);



}


void Bank::accgen() {
  /*  setbkcolor(11);
    setcolor(15);
    rectangle(4,4,635,475);
    rectangle(5,5,634,474);
    rectangle(9,9,630,470);
    rectangle(10,10,629,469);
 //setcolor(6);//setbkcolor(7);// setfillstyle(11,14); //floodfill(11,11,RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
  // while(!kbhit()){// delay(400);// setcolor(rand()%9);
    setcolor(6);
    outtextxy(200,13,"SVVV Bank");
    line(10,14,629,14);
     line(10,80,629,80);
*/
//char code[14],
char ch;
int n=0;
//randomize();
while(n<14)
{
ch=(char)random(127);
//if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
 if(ch>='1'&&ch<='9')
{
code[n++]=ch;
}
}
code[n]='\0';
//gotoxy(7,14);
//cout<<"your accont number is:";
//textcolor(11);
//cprintf(code);
setcolor(11);
gotoxy(11,15);
cout<<code;

}
void Bank::password()
{
 //char code[14],
 char ch;
int n=0;
//randomize();
//gotoxy(7,17);
//cout<<"generate your 8 digit  password:";
while(n<8)
{
//int i=0;
//gotoxy(7+i,18);
ch=getch();
//gotoxy(11,18);
cout<<ch;
//i++;
if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
// if(ch>='1'&&ch<='9')
{
pass[n++]=ch;
}
}
pass[n]='\0';
// gotoxy(7,18);
//cout<<ch;
}


void lformh()
  { 
    cleardevice();
    layout1();
   setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Home Loan Application Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Father Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
//  outtextxy(15,315,"Deposit");
  // outtextxy(15,335,"Amount");
 // setcolor(15);
// setfillstyle(1,WHITE);
// rectangle(130,320,310,340);
// floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Loan Amount");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Captcha ");

 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);


  
  }
  void lforme()
  {  cleardevice();
    layout();
    setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Education Loan Application Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Father Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
//  outtextxy(15,315,"Deposit");
  // outtextxy(15,335,"Amount");
 // setcolor(15);
// setfillstyle(1,WHITE);
// rectangle(130,320,310,340);
// floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Loan Amount");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Captcha ");

 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);


  
  }
  void lformb()
  {    cleardevice();
      layout();
      setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Bussiness Loan Application Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Father Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
//  outtextxy(15,315,"Deposit");
  // outtextxy(15,335,"Amount");
 // setcolor(15);
// setfillstyle(1,WHITE);
// rectangle(130,320,310,340);
// floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Loan Amount");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Captcha");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);


  
    }
  void lformp()
  {    cleardevice();
      layout();
       setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Personal Loan Application Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Father Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
//  outtextxy(15,315,"Deposit");
  // outtextxy(15,335,"Amount");
 // setcolor(15);
// setfillstyle(1,WHITE);
// rectangle(130,320,310,340);
// floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Loan Amount");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Captcha ");

 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);


    /*  
  rectangle(4,4,635,475);
  rectangle(5,5,634,474);
  rectangle(9,9,630,470);
  rectangle(10,10,629,469);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
  setcolor(6);
  outtextxy(200,13,"SVVV BANK");
  line(10,14,629,14);
  line(10,80,629,80);
  settextstyle(1,0,4);
  outtextxy(11,80,"personal loan application form");
  setcolor(6);
  gotoxy(5,10);
  cout<<"Enter your name";
  gotoxy(5,11);
  cout<<"Enter your Father name";
  gotoxy(5,12);
  cout<<"Enter Date of Birth";
  gotoxy(5,13);
  cout<<"Address";
  gotoxy(5,14);
  cout<<"Phone/Mobile number";
  gotoxy(5,15);
  cout<<"Aadhar number";
  gotoxy(5,16);
  cout<<"Pan number";
  gotoxy(5,17);
  cout<<"Captcha";
  */
  }

void Loan::lcopy()
{
strcpy(accno,acc);

}
void ldetail()
{ cleardevice();
  layout1();
  setcolor(15);
setfillstyle(1,LIGHTGREEN);
rectangle(10,85,630,120);
floodfill(11,95,15);
setcolor(0);
settextstyle(3,0,4);
outtextxy(210,85,"Loan Application");
setcolor(15);
setfillstyle(1,LIGHTGRAY);
rectangle(10,122,630,440);
floodfill(11,132,15);
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,130,450,155);
floodfill(201,140,0);
setcolor(0);
settextstyle(3,0,2);
outtextxy(225,130,"Interest Rate Details");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(20,170,610,190);
floodfill(26,180,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(50,166,"For amount between 0 to 49000 ,Interest =");
settextstyle(3,0,2);
outtextxy(520,166,"2%");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(15,200,625,220);
floodfill(26,210,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(25,195,"For amount between 50000 to 199999 ,Interest =");
settextstyle(3,0,2);
outtextxy(525,195,"5%");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(15,230,625,250);
floodfill(26,240,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(25,225,"For amount between 200000 to 499999 ,Interest =");
settextstyle(3,0,2);
outtextxy(540,225,"7%");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(15,260,625,280);
floodfill(26,270,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(20,255,"For amount between 500000 to 999999 ,Interest =");
settextstyle(3,0,2);
outtextxy(540,255,"10%");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(15,290,625,310);
floodfill(26,300,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(20,285,"For amount between 1000000 to 1999999 ,Interest =");
settextstyle(3,0,2);
outtextxy(540,285,"15%");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(15,320,625,340);
floodfill(26,330,0);
setcolor(0);
settextstyle(3,0,1);
outtextxy(55 ,315,"For amount above 2000000 ,Interest =");
settextstyle(3,0,2);
outtextxy(460,315,"20%");


  /*
cout<<"loan details";
cout<<"if(lamount>0&&lamount<49000)";
cout<<"Loan interest rate is 2%";
cout<<"ifif(lamount>50000&&lamount<199999)";
cout<<"Loan interest rate is 5%";
cout<<"if(lamount>200000&&lamount<499999)";
cout<<"Loan interest rate is 7%";
cout<<"if(lamount>500000&&lamount<999999)";
cout<<"Loan interest rate is 10%";
cout<<"if(lamount>1000000&&lamount<199999)";
cout<<"Loan interest rate is 15%";
cout<<"(lamount>2000000)";
cout <<"Loan interest rate is 20%";
*/
getch();

}
   
void Loan::searchdata3(char *t,char *p)
{

 int co=0;
 ifstream fin;
 fin.open("aloan.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(accno,t))
   {
 //  if(!strcmp(pass,p))
   //{
   cout<<"hello";
   getch();
    ldisplay3();
    co++;
   //}
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}
}


 void Loan::lloana()
{
   // cout<<"enter loan amount";
  gotoxy(37,16);
    cin>>lamount;
    getch();

}
   /*void Loan::searchdata3(char *t,char *p)
{

 int co=0;
 ifstream fin;
 fin.open("aloan.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(accno,t))
   {
 //  if(!strcmp(pass,p))
   //{
   cout<<"hello";
   getch();
    ldisplay3();
    co++;
   //}
   }
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}
}*/

void option()
  {   int x;
    cleardevice();
    layout1();
    setcolor(15);
setfillstyle(1,LIGHTGREEN);
rectangle(10,85,630,120);
floodfill(11,95,15);
setcolor(0);
settextstyle(3,0,4);
outtextxy(210,85,"Loan Application");
setcolor(15);
setfillstyle(1,LIGHTGRAY);
rectangle(10,122,630,440);
floodfill(11,132,15);
setcolor(0);
setfillstyle(1,GREEN);
rectangle(200,150,440,180);
floodfill(201,160,0);
setcolor(0);
settextstyle(3,0,2);
outtextxy(230,150,"1.Home Loan");

 setcolor(0);
setfillstyle(1,GREEN);
rectangle(200,200,440,230);
floodfill(201,210,0);
setcolor(0);
settextstyle(3,0,2);
outtextxy(230,200,"2.Education Loan");

 setcolor(0);
setfillstyle(1,GREEN);
rectangle(200,250,440,280);
floodfill(201,260,0);
setcolor(0);
settextstyle(3,0,2);
outtextxy(230,250,"3.Education Loan");

 setcolor(0);
setfillstyle(1,GREEN);
rectangle(200,300,440,330);
floodfill(201,310,0);
setcolor(0);
settextstyle(3,0,2);
outtextxy(230,300,"4.Education Loan");

 setcolor(0);
setfillstyle(1,WHITE);
rectangle(240,370,400,400);
floodfill(241,380,0);

    
gotoxy(32,25);
    cin>>x;
   Loan obj;
      switch(x)
{
      case 1:
      cleardevice();
      ldetail();
      cleardevice();
      lformh();
      getch();
      obj.lsearchdata(acc,pa);
      getch();
      //obj.read();
     // getch();
     obj.lloana();
      lcaptcha();
      obj.lcopy();
      obj.lstoredata();
    //  obj.accgen();
      break;

      case 2:
      cleardevice();
      ldetail();
      cleardevice();
      lforme();
      getch();
      obj.lsearchdata(acc,pa);
      getch();
      //obj.read();
      obj.lloana();
      lcaptcha();
      obj.lcopy();
      obj.lstoredata();
     // obj.accgen();
      break;

      case 3:
      cleardevice();
      ldetail();
      cleardevice();
      lformb();
      getch();
      obj.lsearchdata(acc,pa);
      getch();
      //obj.read();
      obj.lloana();
      lcaptcha();
      obj.lcopy();
      obj.lstoredata();
     // obj.accgen();
      break;

      case 4:
      cleardevice();
      ldetail();
      cleardevice();
      lformp();
      getch();
      obj.lsearchdata(acc,pa);
      getch();
      //obj.read();
      obj.lloana();
      lcaptcha();
      obj.lcopy();
      obj.lstoredata();
     // obj.accgen();
break;
 }
  }



void lpart(void)
{
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
lpart2();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
lpart2();
delay(2000);
}
}
void lpart2(void)
{
setcolor(0);
settextstyle(3,0,4);
outtextxy(90,100,"Loan Status");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,4);
outtextxy(360,100,"Apply For Loan");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);

}

void ltext(void)
{
int x=9,y=445;
while(!kbhit)
{
setcolor(4);
settextstyle(3,0,2);
gotoxy(x,y);
cout<<"***PRESS 1 For User***PRESS 2 For Employee";
x++;
if(x>=631)
{
x=9;
}
}
}


void lpage1(){
  Loan obj;
    int a;
    cleardevice();
    layout1();
lpart();
//ltext();

    /*setbkcolor(11);
    //setcolor(14);
    rectangle(4,4,635,475);
    rectangle(5,5,634,474);
    rectangle(9,9,630,470);
    rectangle(10,10,629,469);
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
    setcolor(6);
    outtextxy(200,13,"SVVV BANK");
    line(10,14,629,14);
    line(10,80,629,80);
    settextstyle(7,0,3);
    outtextxy(18,160,"Enter 1 for loan status");
    settextstyle(7,0,3);
    outtextxy(18,190,"Enter 2 to apply for an loan");
    //while(!kbhit())
    //{
       delay(350);
       setcolor(15);
      // rectangle(170,235,190,265);
  line(240,329,365,329);
  line(240,351,365,351);
  arc(240,340,90,270,11);
  arc(365,340,270,90,11);
   // }
   setcolor(15);
    gotoxy(38,22);
    //setcolor(6);
    //setcolor(14);
    setcolor(15);*/
    gotoxy(41,23);
    cin>>a ;
      switch(a)
{
      case 1:
   cleardevice();
   obj.searchdata3(acc,pa);

   break;

       case 2:
    cleardevice();
    option();
   break;
       }
       }




   void  create_nc()
 {
 setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Saving Account Opening Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,630,435);
 floodfill(11,122,15);
 setcolor(15);
 setfillstyle(1,LIGHTGREEN);
 rectangle(120,180,520,380);
 floodfill(101,210,15);
 setcolor(0);
 settextstyle(3,0,2);
 outtextxy(180,200,"Your Account Number is:");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(218,230,392,255);
 floodfill(219,240,15);
 setcolor(0);
 settextstyle(3,0,2);
 outtextxy(150,280,"Generate Your 8 Digit Password:");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(218,315,392,340);
 floodfill(219,325,15);
 }

void  create_ncc()
 {
 setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Current Account Opening Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,630,435);
 floodfill(11,122,15);
 setcolor(15);
 setfillstyle(1,LIGHTGREEN);
 rectangle(120,180,520,380);
 floodfill(101,210,15);
 setcolor(0);
 settextstyle(3,0,2);
 outtextxy(180,200,"Your Account Number is:");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(218,230,392,255);
 floodfill(219,240,15);
 setcolor(0);
 settextstyle(3,0,2);
 outtextxy(150,280,"Generate Your 8 Digit Password:");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(218,315,392,340);
 floodfill(219,325,15);
 }


void Page1()
{
  cleardevice();
//clrscr();
	Bank objs;
	int a;
       layout();
       //getch();
       createpart();
       //getch();
       //cleardevice();
       //partc();
	//gotoxy(25,23);
  gotoxy(41,23);
  cin>>a;
	switch(a)
	{
    case 1:
	cleardevice();
	//layout();
  	Forms();
	       objs.read();//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@2
	     v=captcha();
	     if(v==1)    ////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!@@@@@@@@@
	     {
	     cleardevice();
       create_nc();
	     objs.accgen();
	     objs.password();
	     objs.storedata();
	     //	objs.display();
	     getch();
	     }
	     else
	     { cleardevice();
	      Forms();
	       objs.read();
	       captcha();
	     }
     break;
     case 2:
	 cleardevice();
	 Formc();
	objs.read();
	v=captcha();
	if(v==0)
	{
	cleardevice();
	create_ncc();
  objs.accgen();
	objs.password();
  objs.storedata();
	  getch();
	}
	else
	     { cleardevice();
	      Forms();
	       objs.read();
	       captcha();
	     }
    }
    cleardevice();
    login();
    //user();
  /*  char acc[15],pa[9];

    cout<<"Enter ac no";
    gets(acc);
    cout<<"enter pass";
    gets(pa);
   objs.searchdata(acc,pa);*/
}
void useremployee()
{
 //clrscr();
 cleardevice();
 layout1();
 part();
 //text();!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 char ch;
 gotoxy(41,23);
 cin>>ch;
 switch(ch)
 {
  case '1': 
  rec();
  login();
	break;
  case '2': 
  rec();
  loginin();
  
	 break;
  }
}

/*void userh()
{
cleardevice();
//clrscr();
layout();
userpart();
 //char ch;
 //gotoxy(20,20);
 //cin>>ch;
 //switch(ch)
 //{
  //case '1':
   login();
	//break;
  //case '2': //create();
	 //break;
  //}
}*/

void part1(void)
{
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
part1a();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
part1a();
delay(2000);
}
}
void part1a(void)
{
setcolor(0);
settextstyle(3,0,4);
outtextxy(30,100,"Assistant Manager");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,4);
outtextxy(430,100,"Cashier");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);
}



void Choice()
{  cleardevice();
  layout1();
   int a;
   part1();
   gotoxy(41,23);
   cin>>a;
   switch(a)
   {
case 1:
employee();


break;
case 2:
cash();

break;

   }


}

void login2()
{
 cleardevice();
 
 layout1();
 
setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);
circle(330,190,70);
floodfill(301,230,GREEN);
setcolor(0);
settextstyle(6,0,3);
outtextxy(290,180,"Hello User");

setcolor(0);
setfillstyle(1,15);
rectangle(40,110,230,150);
floodfill(41,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(44,110,"1.Transactions");

setcolor(0);
setfillstyle(1,15);
rectangle(450,110,600,150);
floodfill(451,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(470,110,"2.FD");

setcolor(0);
setfillstyle(1,15);
rectangle(80,230,250,190);
floodfill(240,200,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(85,190,"3.Loan");

setcolor(0);
setfillstyle(1,15);
rectangle(420,230,580,190);
floodfill(421,200,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(430,190," 4.User Details");

setcolor(0);
setfillstyle(1,15);
rectangle(100,300,280,260);
floodfill(271,270,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(115,260,"5.Balance");

setcolor(0);
setfillstyle(1,15);
rectangle(375,300,560,260);
floodfill(378,270,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(390,260,"6. Logout");


setcolor(0);
setfillstyle(1,15);
rectangle(260,340,380,390);
floodfill(301,380,0);

 char ch;
 gotoxy(25,25);
 cin>>ch;
 Bank obj;
 switch(ch)
 {
  case '1':
      cleardevice();
      rec();
   //cout<<"TRansection Menu";
  break;
  case '2': //cout<<"FD Menu";
  cleardevice();
  rec();
  fdmain();
  break;

  case '3': //cout<<"loan Menu";
   cleardevice();
      rec();
   lpage1();
  break;

  case '4': //cout<<"user Detail Menu";
	    cleardevice();
      rec();
      userdetail();
      //userbal();

  break;
  case '5': //cout<<"Balance Menu";
      cleardevice();
      rec();
      userbal();
	   //userdetail();

  case '6':
      cleardevice();
      rec();
      cleardevice();
      //layout();
       login();
  break;
  default:
  sound(111);
  delay(100);
  nosound();
  rec();
  cleardevice();
  login2();
 }
 rec();
 cleardevice();
 login2();
}
void userdetail()
{
 Bank obj;
 obj.searchdata(acc,pa);
 getch();
 cleardevice();
 login2();
}

void userbal()
{
	Bank obj;
 obj.searchdata2(acc,pa);
 getch();
 cleardevice();
 login2();
}
void login()
{
  cleardevice();
  layout();
 Bank objs;

   setcolor(8);
 setfillstyle(1,DARKGRAY);

rectangle(10,83,190,436);
floodfill(16,210,8);
setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(83,150,10);
floodfill(84,150,0);
setcolor(0);
arc(82,181,0,180,20);
line(63,181,101,181);//user  logo design end
settextstyle(3,0,3);
outtextxy(61,190,"Please");
outtextxy(61,225,"Login");
outtextxy(61,265,"Your");
outtextxy(61,300,"Account");

setcolor(2);
setfillstyle(1,GREEN);

rectangle(193,83,630,436);
  floodfill(206,410,2);
  setcolor(0);
  setfillstyle(1,WHITE);

  circle(355,150,35);
  floodfill(356,150,0);
  setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(355,140,12);
floodfill(351,140,0);
setcolor(0);
arc(355,180,20,161,28);
//line(350,181,450,181);//user  logo design end
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(210,210,500,400);
floodfill(211,220,10);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,220,"Account No");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,216,490,243);
floodfill(341,220,15);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,260,"Password");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,265,490,292);
floodfill(341,275,15);
  setfillstyle(1,WHITE);
rectangle(275,325,420,352);
floodfill(276,335,15);
setcolor(0);
setfillstyle(1,WHITE);
rectangle(570,100,620,150);
floodfill(571,110,0);
setcolor(1);
setfillstyle(1,WHITE);
circle(595,128,20);
floodfill(596,128,1);
setcolor(1);
setfillstyle(1,BLUE);
circle(595,128,16);
floodfill(596,128,1);
setcolor(15);
setfillstyle(1,WHITE);
rectangle(595,112,598,130);
floodfill(596,122,15);

    int a;
   // cout<<"Enter ac no";
    gotoxy(44,15);
    gets(acc);
   // cout<<"enter pass";
    //gotoxy(44,18);@@@@@@@@@
    //gets(pa);@@@@@@@
    int i;
for(i=0;i<8;i++)
{
gotoxy(44+i,18);
pa[i]=getch();
cout<<"*";
}
pa[i]='\0';

   //objs.searchdata(acc,pa);
   a=objs.accver(acc,pa);
   if(a==1)
   {
	while(!kbhit())
   {
   setcolor(rand()%13);
   delay(250);
   settextstyle(3,0,2);
outtextxy(312,322,"Continue");
   }

    cleardevice();
    rec();
   objs.dname();
   getch();
    rec();
   //getch();
   //rec();
   login2();
   }
   else
   {
	while(!kbhit())
   {
   setcolor(rand()%15);
   delay(300);
     settextstyle(3,0,2);
outtextxy(285,320,"Wrong a/c no or password");
  
   }
    char cd;
   cd=getch();
   if(cd=' ')
  { 
   rec();
    exit(0); 
   } 
   //getch();
    cleardevice();
 //   layout();
    rec();
    login();
   }
 // login2();
  /* char cd;
   cd=getch();
   if(cd=' ')
    exit(0);*/
}
void create()
{
cleardevice();
 Page1();
}

void Forms()
{
  cleardevice();
  layout1();

 setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(10,80,"Saving Account Opening Form");
 setcolor(15);
 setfillstyle(1,MAGENTA);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Father Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
  outtextxy(15,315,"Deposit");
   outtextxy(15,335,"Amount");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,320,310,340);
 floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,MAGENTA);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Voter id Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Driving ");
 outtextxy(325,275,"License ");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);

 outtextxy(325,305,"Captcha ");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,305,624,325);
  floodfill(453,315,15);


}
void Formc(){
  cleardevice();
  //layout();

 setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(100,80,"Current Account Opening Form");
 setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(10,121,315,435);
 floodfill(11,130,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(15,123,"Personal Details");
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,165,"Firm Name");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,165,310,185);
floodfill(131,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,195,"Owner");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,195,310,215);
 floodfill(131,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,225,"Date Of Birth");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,225,310,245);
  floodfill(131,235,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(15,255,"Address");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,255,310,275);
 floodfill(131,265,15);
   settextstyle(3,0,1);
   setcolor(0);
  outtextxy(15,285,"Phone No");
setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,285,310,305);
 floodfill(131,295,15);
 settextstyle(3,0,1);
 setcolor(0);
  outtextxy(15,315,"Deposit");
   outtextxy(15,335,"Amount");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(130,320,310,340);
 floodfill(131,325,15);


setcolor(15);
 setfillstyle(1,LIGHTGRAY);
 rectangle(318,121,630,435);
 floodfill(319,131,15);
 setcolor(0);
 settextstyle(1,0,3);
 outtextxy(325,123,"Proof of Identity");

 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,165,"Aadhar Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,165,624,185);
floodfill(453,175,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,195,"Pan Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,195,624,215);
 floodfill(453,205,15);
 settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,225,"Voter id Card");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,225,624,245);
  floodfill(453,235,15);
 settextstyle(3,0,1);
 setcolor(0);
  settextstyle(3,0,1);
 setcolor(0);
 outtextxy(325,255,"Driving ");
 outtextxy(325,275,"License ");
 setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,263,624,283);
  floodfill(453,273,15);
  settextstyle(3,0,1);
 setcolor(0);

 outtextxy(325,305,"Captcha ");
  setcolor(15);
 setfillstyle(1,WHITE);
 rectangle(452,305,624,325);
  floodfill(453,315,15);

     // gotoxy(5,6);
	/*setbkcolor(11);
     // setfillstyle(11,14);
     //floodfill(11,11,RED);
		   setcolor(15);
    rectangle(4,4,635,475);
    rectangle(5,5,634,474);
    rectangle(9,9,630,470);
    rectangle(10,10,629,469);
 //setcolor(6);//setbkcolor(7);// setfillstyle(11,14); //floodfill(11,11,RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
  // while(!kbhit()){// delay(400);// setcolor(rand()%9);
    setcolor(6);
    outtextxy(200,13,"SVVV Bank");
    line(10,14,629,14);
     line(10,80,629,80);

       settextstyle(1,0,4);
       outtextxy(11,80,"Current Account Opening Form");
   //  cout<<"current account opening form";
     gotoxy(5,10);
     cout<<"Enter name of firm:";
     gotoxy(5,11);
     cout<<"Name of proprietor:";
     gotoxy(5,12);
     cout<<"Enter date of birth:";
     gotoxy(5,13);
     cout<<"Address:";
     gotoxy(5,14);
     cout<<"Phone/Mobile number:";
     gotoxy(5,15);
     cout<<"Deposit ammount:";
     //cout<<"Cheque book";
     gotoxy(5,16);
     cout<<"Prooof of identity:-";
     gotoxy(5,17);
     cout<<"Adhar card:";
     gotoxy(5,18);
     cout<<"Pan card:";
     gotoxy(5,19);
     cout<<"Voter identiity card:";
     gotoxy(5,20);
     cout<<"Driving licence:";
     gotoxy(5,21);
     cout<<"Captcha:";*/
}
int captcha()
{
 char code[5],ch,otp[5];
int n=0;
randomize();
while(n<5)
{
ch=(char)random(127);
if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
{
code[n++]=ch;
}
}
code[n]='\0';
gotoxy(59,20);
//cout<<"captca generated";
//textcolor(11);
//cprintf(code);
setcolor(11);
//gotoxy(33,19);
cout<<code;
gotoxy(59,21);
cout<<"enter captcha to verify";
gotoxy(59,22);
//setcolor(4);
//rectangle(100,500,120,550);
cin>>otp;
if(strcmp(code,otp)==0){
gotoxy(59,24);
cout<<"Captcha verified";
gotoxy(59,25);
cout<<"press enter for continue";
c=1;
return c;
getch();
}
else
{
gotoxy(59,24);
cout<<"Captcha not verified";
gotoxy(59,25);
cout<<"try again";
 getch();
 }
}


int lcaptcha()
{
char code[5],ch,otp[5];
int n=0;
randomize();
while(n<5)
{
ch=(char)random(127);
if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
{
code[n++]=ch;
}
}
code[n]='\0';
gotoxy(33,21);
//cout<<"captca generated";
//textcolor(11);
//cprintf(code);
setcolor(11);
//gotoxy(33,19);
cout<<code;
gotoxy(33,22);
cout<<"enter captcha to verify";
gotoxy(33,23);
//setcolor(4);
//rectangle(100,500,120,550);
cin>>otp;
if(strcmp(code,otp)==0){
gotoxy(33,24);
cout<<"Captcha verified";
gotoxy(25,25);
cout<<"press enter for continue";
c=1;
return c;
getch();
}
else
{
gotoxy(33,24);
cout<<"Captcha not verified";
gotoxy(25,25);
cout<<"try again";
 getch();
 }

}


void Bank::deposit_withdraw(char *n, int option)
{
  
  Bank obj;
  int co=0,amt;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {

      if(option==1)
      {
        setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(15);
setfillstyle(1,2);
rectangle(8,82,632,110);
floodfill(9,92,15);
setcolor(0);
settextstyle(6,0,3);
outtextxy(270,80,"DEPOSIT");
setcolor(0);
settextstyle(6,0,3);
 outtextxy(120,137,"ENTER THE AMOUNT YOU WANT TO DEPOSIT");

setcolor(0);
setfillstyle(1,15);
rectangle(220,200,400,240);
floodfill(221,210,0);

    
  gotoxy(25,13);
  cin>>amt;
       obj.dep(amt);
      }

  if(option==2)
      {
    
     setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(15);
setfillstyle(1,2);
rectangle(8,82,632,110);
floodfill(9,92,15);
setcolor(0);
settextstyle(6,0,3);
outtextxy(270,80,"WITHDRAW");
setcolor(0);
settextstyle(6,0,3);
 outtextxy(120,137,"ENTER THE AMOUNT YOU WANT TO WITHDRAW");

setcolor(0);
setfillstyle(1,15);
rectangle(220,200,400,240);
floodfill(221,210,0);

    
gotoxy(15,16);
  cin>>amt;
  int bal=obj.retdeposit()-amt;
  //if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
  if(bal<damount)
    cout<<"Insufficience balance";
  else
    obj.draw(amt);
    }
    co++;
   //}
   //}
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
  
}
 }



void cash()
{
  cleardevice();
  layout1();
  Bank objs;
  int a;
  char aacc[15],ppa[9];
    setcolor(8);
 setfillstyle(1,DARKGRAY);

rectangle(10,83,190,436);
floodfill(16,210,8);
setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(83,150,10);
floodfill(84,150,0);
setcolor(0);
arc(82,181,0,180,20);
line(63,181,101,181);//user  logo design end
settextstyle(3,0,3);
outtextxy(61,190,"Please");
outtextxy(61,225,"Login");
outtextxy(61,265,"Your");
outtextxy(61,300,"Account");

setcolor(2);
setfillstyle(1,GREEN);

rectangle(193,83,630,436);
  floodfill(206,410,2);
  setcolor(0);
  setfillstyle(1,WHITE);

  circle(355,150,35);
  floodfill(356,150,0);
  setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(355,140,12);
floodfill(351,140,0);
setcolor(0);
arc(355,180,20,161,28);
//line(350,181,450,181);//user  logo design end
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(210,210,500,400);
floodfill(211,220,10);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,220,"Account No");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,216,490,243);
floodfill(341,220,15);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,260,"Password");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,265,490,292);
floodfill(341,275,15);
  setfillstyle(1,WHITE);
rectangle(275,325,420,352);
floodfill(276,335,15);
setcolor(0);
setfillstyle(1,WHITE);
rectangle(570,100,620,150);
floodfill(571,110,0);
setcolor(1);
setfillstyle(1,WHITE);
circle(595,128,20);
floodfill(596,128,1);
setcolor(1);
setfillstyle(1,BLUE);
circle(595,128,16);
floodfill(596,128,1);
setcolor(15);
setfillstyle(1,WHITE);
rectangle(595,112,598,130);
floodfill(596,122,15);

    //int a;
   // cout<<"Enter ac no";
    gotoxy(44,15);
    gets(aacc);
   // cout<<"enter pass";
    //gotoxy(44,18);@@@@@@@@@
    //gets(pa);@@@@@@@
    int i;
for(i=0;i<8;i++)
{
gotoxy(44+i,18);
ppa[i]=getch();
cout<<"*";
}
ppa[i]='\0';




a=objs.accver(aacc,ppa);
if(a==1)
{
  while(!kbhit())
   {
   setcolor(rand()%13);
   delay(250);
   settextstyle(3,0,2);
outtextxy(312,322,"Continue");
   }
   
   cleardevice();
   layout1();
   part12();
   //cout<<"enter";
//cout<<"1.DEPOSIT";
//cout<<"2.WITHDRAW";
//gotoxy(20,22);
gotoxy(41,23);
cin>>a;
Bank obj;
switch(a)
{
case 1:
cleardevice();
layout1();
obj.deposit_withdraw(aacc,1);
//Choice();
getch();
//Deposit();
break;
case 2:
cleardevice();
layout1();
obj.deposit_withdraw(aacc,2);
//Withdraw();
break;
default:
cout<<"enter wrong choice";
exit(0);

}

}
Choice();
//login2();
}
 

void Bank::dep(int x)
{
  damount+=x;
}


void Bank::draw(int x)
{
  damount-=x;
}

int Bank::retdeposit()
{
  return damount;
}


void part12(void)
{
  cleardevice();
 // layout();
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
part12a();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
part12a();
delay(2000);
/*
setcolor(8);
setfillstyle(1,DARKGRAY);
rectangle(10,83,325,436);
floodfill(11,93,8);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
part12a();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(8);
setfillstyle(1,DARKGRAY);
rectangle(325,83,630,436);
floodfill(326,93,8);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
part12a();
delay(2000);
*/
}
}
void part12a(void)
{
  /*
  setcolor(0);
settextstyle(3,0,4);
outtextxy(30,100,"Assistant Manager");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,4);
outtextxy(430,100,"Cashier");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);
*/
  
setcolor(0);
settextstyle(3,0,4);
outtextxy(100,100,"Deposit");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,4);
outtextxy(430,100,"Withdraw");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(0);
setfillstyle(1,WHITE);
rectangle(240,340,410,370);
floodfill(341,360,0);

}





//**************************************************EMPLOYEE OPEN ***********************************************
class employeee:public Bank
{
public:

char userAC[14];
void employeD();
void display_all();
void report();
};

 void employee()
{ cleardevice();
//layout();  
  employeee k;
  int choice;
 setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
setcolor(15);
settextstyle(1,0,8);
outtextxy(80,0,"Svvv Bank");
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,430,632,466);
floodfill(9,440,14);
//small logo start code
     rectangle(500,69,545,74); //upper rectangle
     rectangle(493,74,552,79); //lower rectangle
     line(495,38,550,38);  // big triangle base line
     line(495,38,522.5,15); //big triangle left
     line(550,38,522.5,15);  //big rectangle right
     line(507,34,538,34);     //small triangle base line
     line(507,34,522.5,21);   //small triangle left
     line(538,34,522.5,21);  //small triangle right
     line(503,69,503,38);  // 1st line
     line(542,69,542,38);   //last line
     line(509,69,509,38);  //2nd line
     line(536,69,536,38);    //2nd last line
     line(514,69,514,61);    // 3rd line lower
     line(514,38,514,47);   //3rd line upper
     line(520,69,520,63);  //4th line lower
     line(520,38,520,42);   //4th line upper
     line(526,69,526,64);  //5thline lower
     line(526,38,526,43);      //5th line upper
     line(531,69,531,59);    // 6th line lower
     line(531,38,531,47);    //6th line upper
     circle(522.5,53.5,10);
     arc(519.5,53.5,297,58,4);
     line(519.5,56.5,523,60); // r ke niche wali line
     line(518,49,524.5,49);   //top line
     line(520,53.5,524.5,53.5);    //middle
     //small logo ends
setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,450);
floodfill(9,92,8);

setcolor(BLACK);
setfillstyle(SOLID_FILL,WHITE);
circle(330,190,70);
floodfill(301,230,BLACK);
setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);
circle(330,190,65);
floodfill(301,230,GREEN);

setcolor(0);
setfillstyle(1,15);
rectangle(40,110,230,150);
floodfill(41,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(44,110,"1.Create Account");

setcolor(0);
setfillstyle(1,15);
rectangle(450,110,600,150);
floodfill(451,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(470,110,"2.Locker");

setcolor(0);
setfillstyle(1,15);
rectangle(80,260,250,220);
floodfill(240,230,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(85,225,"3.User Details");

setcolor(0);
setfillstyle(1,15);
rectangle(410,260,590,220);
floodfill(411,230,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(410,225," 4.Account Details");

  setcolor(0);
setfillstyle(1,15);
rectangle(260,300,380,340);
floodfill(301,330,0);

//setcolor(0);
//setfillstyle(1,15);
//rectangle(100,300,280,260);
floodfill(271,270,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(270,300,"5.Back");

//setcolor(0);
//setfillstyle(1,15);
//rectangle(375,300,560,260);
//floodfill(378,270,0);
//setcolor(0);
//settextstyle(6,0,3);
//outtextxy(390,260,"6. Logout");

   gotoxy(42,12);
   cin>>choice;
  switch(choice)
       { case 1:
        cleardevice();
       create();
      employee();
       break;
       case 2:
       employee();
       //cleardevice();
   //cout<<"your are in locker menu";
   //exit(0);
       break;
	case 3:
  cleardevice();
 k.employeD();
 employee();
   break;
 case 4:
     //clrscr();
 cleardevice();
      k.display_all();
      employee();
  break;
     case 5:
     cleardevice();
     Choice();
     //exit (0);
 }
 }

void employeee::employeD()
{
    int choice;
   cleardevice();
   layout1();
   setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(15);
setfillstyle(1,2);
rectangle(8,82,632,110);
floodfill(9,92,15);
setcolor(0);
settextstyle(6,0,3);
outtextxy(270,80,"A/C NO .");
setcolor(0);
settextstyle(6,0,3);
 outtextxy(160,137,"ENTER'S CUSTOMER'S A/C NO. :");

setcolor(0);
setfillstyle(1,15);
rectangle(220,200,400,240);
floodfill(221,210,0);


 //   cout<<"Enter customer's Account No."<< endl;
  gotoxy(33,14);
  gets(userAC);
  //clrscr();
    // have to put graphics here
    cleardevice();
    //layout();

       layout1();

    setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(BLACK);
setfillstyle(SOLID_FILL,WHITE);
circle(330,190,70);
floodfill(301,230,BLACK);
setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);
circle(330,190,65);
floodfill(301,230,GREEN);
//setcolor(0);
//setfillstyle(1,15);
//rectangle(80,200,270,120);
//floodfill(81,201,0);
setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);
circle(330,190,70);
floodfill(301,230,GREEN);
setcolor(0);
settextstyle(6,0,3);
outtextxy(286,170,"Hello User");

setcolor(0);
setfillstyle(1,15);
rectangle(40,110,240,150);
floodfill(41,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(44,110,"1.Basic Information");

setcolor(0);
setfillstyle(1,15);
rectangle(410,110,620,150);
floodfill(411,120,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(420,110,"2.Locker Information");

setcolor(0);
setfillstyle(1,15);
rectangle(77,260,250,220);
floodfill(240,230,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(85,220,"3.FD Information");

setcolor(0);
setfillstyle(1,15);
rectangle(410,260,590,220);
floodfill(411,230,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(415,220," 4.Back");

  setcolor(0);
setfillstyle(1,15);
rectangle(260,300,380,340);
floodfill(301,330,0);


      gotoxy(40,21);
      cin>>choice;
      switch(choice){
     case 1: searchdata4(userAC);
     cleardevice();
      layout();
      employee();

    break;
      case 2:// jo details users dekh rha he vo fn();
    break;
      case 3:// locker ki details ka function
    break;
      case 4:

      employee();

    break;
    default:
    cout<<"YOU ENTER WRONG CHOICE"<<endl;
    cout<<"Enter any key to go choose again";
    getch();
//    clrscr();
      cleardevice();
      layout();
      employeD();
    }
      
  }
void employeee::display_all()
{
  cleardevice();
  ifstream inFile;
  inFile.open("abcd.dat",ios::in|ios::binary);
  if(!inFile)
  {
    cout<<"File could not be open !! Press any Key...";
    return;
  }
     cleardevice();
     layout();
     setcolor(8);
setfillstyle(1,7);
rectangle(8,82,632,430);
floodfill(9,92,8);

setcolor(15);
setfillstyle(1,2);
rectangle(8,82,632,115);
floodfill(9,92,15);
setcolor(0);
settextstyle(6,0,3);
outtextxy(250,80,"ALL A/C DETAILS");


setcolor(0);
setfillstyle(1,15);
rectangle(40,130,200,160);
floodfill(41,140,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(80,130,"A/C NO.");

setcolor(0);
setfillstyle(1,15);
rectangle(220,130,390,160);
floodfill(221,140,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(270,130,"NAME");

setcolor(0);
setfillstyle(1,15);
rectangle(410,130,580,160);
floodfill(411,140,0);
setcolor(0);
settextstyle(6,0,3);
outtextxy(440,130,"BALANCE");



  while(inFile.read((char *)this, sizeof(*this)))
  {
    report();
  }
  inFile.close();
getch();
}
void employeee::report()
{
 // cout<<code<<setw(10)<<" "<<name<<setw(10)<<" "<<setw(6)<<damount<<endl;
  gotoxy(9,12);
  cout<<code;
  gotoxy(35,12);
  cout<<name;
  gotoxy(60,12);
  cout<<damount;
}

void Bank::searchdata4(char *t)
{

 int co=0;
 ifstream fin;
 fin.open("abcd.dat",ios::in|ios::binary);
 if(!fin)
 {
  cout<<"file not";
 }
 else
 {
  fin.read((char*)this,sizeof(*this));
  while(!fin.eof())
  {
   if(!strcmp(code,t))
   {
 //  if(!strcmp(pass,p))
   //{
   //cout<<"hello";
   //getch();
    display();
    co++;
   }
   //}
   fin.read((char*)this,sizeof(*this));
  }
  if(co==0)
  {
   cout<<"Record not found";
   fin.close();
  }
}
}
//**************************************************EMPLOYEE CLOSE **********************************************



void main()
{
  int gd=DETECT,gm;
  //initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  initgraph(&gd,&gm,"c:\\tc\\bgi");


	    //final code
	    rec();
	    welcome();
	    rec();
	    load();
	    rec();
	    cleardevice();
	    useremployee();

	    getch();
	    closegraph();
   }
void userpart(void)
{
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
partu();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
partu();
delay(2000);
}
}

void part(void)
{
while(!kbhit())
{
setcolor(8);
setfillstyle(1,DARKGRAY);
rectangle(10,83,325,436);
floodfill(11,93,8);
logou();
setcolor(15);
setfillstyle(1,WHITE);
rectangle(325,83,630,436);
floodfill(326,93,15);
logoe();
part2();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(8);
setfillstyle(1,DARKGRAY);
rectangle(325,83,630,436);
floodfill(326,93,8);
logoe();
setcolor(15);
setfillstyle(1,WHITE);
rectangle(10,83,325,436);
floodfill(11,93,15);
logou();
part2();
delay(2000);
}
}
void createpart(void)
{
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
partc();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
partc();
delay(2000);
}
}
void partc(void)
{
setcolor(0);
settextstyle(3,0,4);
outtextxy(50,100,"Saving Account");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,4);
outtextxy(350,100,"Current Account");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);
}

/*void createpart(void)
{
while(!kbhit())
{
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(10,83,325,436);
floodfill(11,93,5);
logou();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(325,83,630,436);
floodfill(326,93,10);
logoe();
partu();
delay(2000);
//setcolor(0);
//settextstyle(10,0,7);
//outtextxy(50,50,"USER");
setcolor(5);
setfillstyle(1,MAGENTA);
rectangle(325,83,630,436);
floodfill(326,93,5);
logoe();
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(10,83,325,436);
floodfill(11,93,10);
logou();
partu();
delay(2000);
}
}
void partc(void)
{
setcolor(0);
settextstyle(3,0,5);
outtextxy(130,100,"Saving Account");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,5);
outtextxy(380,100,"Current Account");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);
}      */

void part2(void)
{
setcolor(0);
settextstyle(3,0,5);
outtextxy(130,100,"User");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,5);
outtextxy(380,100,"Employee");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(14);
setfillstyle(1,YELLOW);
rectangle(240,340,410,370);
floodfill(341,360,14);
}
void partu(void)
{
setcolor(0);
settextstyle(3,0,5);
outtextxy(130,100,"Login");
setcolor(0);
settextstyle(3,0,2);
outtextxy(130,250,"Enter 1");
setcolor(0);
settextstyle(3,0,5);
outtextxy(400,100,"Create");
setcolor(0);
settextstyle(3,0,2);
outtextxy(440,250,"Enter 2");

setcolor(15);
setfillstyle(1,BLACK);
rectangle(240,340,410,370);
floodfill(341,360,15);
}

void layout(void)
{
int gd=DETECT,gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
initgraph(&gd,&gm,"c:\\tc\\bgi");
//setbkcolor(13);
setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
setcolor(15);
settextstyle(1,0,8);
outtextxy(80,0,"Svvv Bank");
logom();
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,440,632,466);
floodfill(9,450,14);
}

void layout1(void)
{
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//initgraph(&gd,&gm,"c:\\tc\\bgi");
//setbkcolor(13);
setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
setcolor(15);
settextstyle(1,0,8);
outtextxy(80,0,"Svvv Bank");
logom();
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,440,632,466);
floodfill(9,450,14);
}

void logom(void)
{
//small logo start code
     rectangle(500,69,545,74); //upper rectangle
     rectangle(493,74,552,79); //lower rectangle
     line(495,38,550,38);  // big triangle base line
     line(495,38,522.5,15); //big triangle left
     line(550,38,522.5,15);  //big rectangle right
     line(507,34,538,34);     //small triangle base line
     line(507,34,522.5,21);   //small triangle left
     line(538,34,522.5,21);  //small triangle right
     line(503,69,503,38);  // 1st line
     line(542,69,542,38);   //last line
     line(509,69,509,38);  //2nd line
     line(536,69,536,38);    //2nd last line
     line(514,69,514,61);    // 3rd line lower
     line(514,38,514,47);   //3rd line upper
     line(520,69,520,63);  //4th line lower
     line(520,38,520,42);   //4th line upper
     line(526,69,526,64);  //5thline lower
     line(526,38,526,43);      //5th line upper
     line(531,69,531,59);    // 6th line lower
     line(531,38,531,47);    //6th line upper
     circle(522.5,53.5,10);
     arc(519.5,53.5,297,58,4);
     line(519.5,56.5,523,60); // r ke niche wali line
     line(518,49,524.5,49);   //top line
     line(520,53.5,524.5,53.5);    //middle
     //small logo ends
 }
 void logou(void)
 {
 setcolor(0);
 setfillstyle(1,YELLOW);
 circle(175,176,10);
 floodfill(176,176,0);
 setcolor(0);
 arc(174,206,0,180,20);
 line(155,206,193,206);
 }
void logoe(void)
 {
 setcolor(0);
 setfillstyle(1,YELLOW);
 circle(475,176,10);
 floodfill(476,176,0);
 setcolor(0);
 arc(474,206,0,180,20);
 line(455,206,493,206);
 }
void text(void)
{
int x=9,y=445;
while(!kbhit)
{
setcolor(4);
settextstyle(3,0,2);
gotoxy(x,y);
cout<<"***PRESS 1 For User***PRESS 2 For Employee";
x++;
if(x>=631)
{
x=9;
}
}
}
void p1(void)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
//setbkcolor(13);
setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
setcolor(15);
settextstyle(1,0,7);
outtextxy(140,1,"Svvv Bank");
//logo();
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,440,632,466);
floodfill(9,450,14);
loginm();
getch();
}
 void loginm(void)
 {
   setcolor(8);
 setfillstyle(1,DARKGRAY);

rectangle(10,83,190,436);
floodfill(16,210,8);
setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(83,150,10);
floodfill(84,150,0);
setcolor(0);
arc(82,181,0,180,20);
line(63,181,101,181);//user  logo design end
settextstyle(3,0,3);
outtextxy(61,190,"Please");
outtextxy(61,225,"Login");
//outtextxy(61,265,"Your");
//outtextxy(61,300,"Account");

setcolor(2);
setfillstyle(1,GREEN);

rectangle(193,83,630,436);
  floodfill(206,410,2);
  setcolor(0);
  setfillstyle(1,WHITE);
  circle(355,150,35);
  floodfill(356,150,0);
  setcolor(0);//user logo design start
setfillstyle(1,YELLOW);
circle(355,140,12);
floodfill(351,140,0);
setcolor(0);
arc(355,180,20,161,28);
//line(350,181,450,181);//user  logo design end
setcolor(10);
setfillstyle(1,LIGHTGREEN);
rectangle(210,210,500,400);
floodfill(211,220,10);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,220,"Login ID");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,216,490,243);
floodfill(341,220,15);
setcolor(0);
settextstyle(3,0,2);
outtextxy(220,260,"Password");
setcolor(15);
setfillstyle(1,WHITE);
rectangle(340,265,490,292);
floodfill(341,275,15);
  setfillstyle(1,WHITE);
rectangle(275,325,420,352);
floodfill(276,335,15);
setcolor(0);
setfillstyle(1,WHITE);
rectangle(570,100,620,150);
floodfill(571,110,0);
setcolor(1);
setfillstyle(1,WHITE);
circle(595,128,20);
floodfill(596,128,1);
setcolor(1);
setfillstyle(1,BLUE);
circle(595,128,16);
floodfill(596,128,1);
setcolor(15);
setfillstyle(1,WHITE);
rectangle(595,112,598,130);
floodfill(596,122,15);
}
void loginin(void)
{cleardevice();
  layout();
  p1();
char lid[]="Bms3@Team",pa[]="Svvv@BmS",a[30],b[20];
int result1,result2;
setcolor(0);
gotoxy(44,15.5);
gets(a);
result1=strcmp(lid,a);
//gotoxy(44,18);
//gets(b);
int i;
for(i=0;i<8;i++)
{
gotoxy(44+i,18);
b[i]=getch();
cout<<"*";
}
b[i]='\0';
result2=strcmp(pa,b);
//cout<<result1<<result2;
if(result1==0)
{
if(result2==0)
{

while(!kbhit())
   {
   setcolor(rand()%13);
   delay(250);
   settextstyle(3,0,2);
outtextxy(312,322,"Continue");
   }
getch();
rec();
cleardevice();
Choice();
 }

else
{   while(!kbhit())
   {
   setcolor(rand()%13);
   delay(250);
   settextstyle(3,0,2);
outtextxy(312,322,"INVALID PASSWORD");
   }
//cout<<"INVALID PASSWORD";
}
    }
else
{
  while(!kbhit())
   {
   setcolor(rand()%13);
   delay(250);
   settextstyle(3,0,2);
outtextxy(312,322,"INVALID USERNAME");
   }
//cout<<"INVALID USERNAME";
getch();
cleardevice();
loginin();
}
}
void load(void)
{
//clrscr();
cleardevice();
layout1();
//rec();
/*setbkcolor(0);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(200,130,400,330);
floodfill(201,140,WHITE);
setcolor(15);
settextstyle(1,0,5);
outtextxy(90,18,"BANKING MANAGEMENT ");
outtextxy(240,70,"SYSTEM");*/
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
circle(300,230,100);
floodfill(301,230,BLUE);
setcolor(WHITE);
 rectangle(260,270,350,280);     //small rectangle
  rectangle(220,280,390,290);     //big rectangle
  line(380,200,230,200);    //roofbottom
  line(250,193,350,193);    //roof upper
  line(230,200,300,150);    //triangle right
  line(250,193,300,162);    //small triangle right

  line(380,200,300,150);    //triangle left
  line(350,193,300,162);    //small triangle left
  line(229,280,229,200);    //1
  line(380,280,380,200);    //last

  line(249,280,249,200);    //2
  line(360,280,360,200);   //second last
  line(269,270,269,200);   //3
  line(340,270,340,200);   //third last
  circle(300,235,22);
  line(280,270,280,230);    //3rd line lower
  line(280,200,280,228);    //3rd line    upper
  line(320,270,320,243);    //last third line lower
  line(320,200,320,228);  //last third line upper
  line(290,200,290,215);   //4 line upper
  line(290,270,290,254);   //4 line lower
  line(300,200,300,213);   //5 line upper
  line(300,270,300,257);  //5 line lower
  line(310,200,310,214);	       //6 line upper
  line(310,270,310,255);  //6 line lower

  arc(300,233,290,58,8);
  line(300,235,315,235);    //middle
  line(300,227,315,227);    //top
  line(300,242,310,248);  //R KE niche wali line
   // rectangle(4,4,635,475);
    //rectangle(5,5,634,474);
    //rectangle(9,9,630,470);
    //rectangle(10,10,629,469);
     int i=0,z=0;
    setcolor(8);
     settextstyle(3,0,3);
   setcolor(15);
   rectangle(75,350,540,375);
    setcolor(2);
   while(i<450)
   {
   delay(410);
    gotoxy(37,25);
   circle(299,390,15);
   cout<<z<<"%";
   rectangle(80+i,355,86+i,370);
   i+=9;
   z+=2;
   }
//getch();
 /*sound(140);
   delay(99);
   nosound();
   */
   //cleardevice();
//closegraph();

}

void welcome()
{layout();
 setcolor(1);
setfillstyle(1,BLUE);
rectangle(8,11,632,80);
floodfill(9,21,1);
//setcolor(15);
//settextstyle(4,0,8);
//outtextxy(100,0,"Svvv Bank");
setcolor(15);
rectangle(2,5,638,473);
rectangle(6,9,634,469);
setcolor(14);
setfillstyle(1,YELLOW);
rectangle(8,430,632,466);
floodfill(9,440,14);
setbkcolor(7);
//traingle
setcolor(LIGHTBLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
line(10,90,420,430);
line(10,430,420,430);
line(10,92,10,430);
floodfill(20,400,LIGHTBLUE);
//rectangle
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(200,130,400,330);
floodfill(201,140,WHITE) ;
//logo
setcolor(BLACK);
 rectangle(249,285,349,298);     //small rectangle
  rectangle(219,298,379,311);     //big rectangle
  line(244,200,354,200);    //roofbottom
  line(265.5,192,333.5,192);    //roof upper
  line(244,200,299,150);    //triangle right
  line(265.5,192,299.5,162);    //small triangle right

  line(354,200,299,150);    //triangle left
  line(299.5,162,333.5,192);    //small triangle left
  line(253,285,253,200);    //1
  line(345,285,345,200);    //last

 line(263,285,263,200);    //2
// line(,280,360,200);   //second last
 line(273,285,273,200);   //3
 // line(340,270,340,200);   //third last
  circle(299,242.5,18);
 // line(280,270,280,230);    //3rd line lower
 // line(280,200,280,228);    //3rd line    upper
 // line(320,270,320,243);    //last third line lower
 // line(320,200,320,228);  //last third line upper
 line(283,249,283,285);   //4 line lower
 line(283,234,283,200);   //4 line upper
  line(293,200,293,226);   //5 line upper
  line(293,259,293,285);  //5 line lower
  line(303,200,303,226);	       //6 line upper
 line(303,259,303,285);  //6 line lower
 line(313,200,313,231); //7 th line upper
 line(313,254,313,285);   //7 th line lower
 line(323,200,323,285);   //8th line lower
 line(333,200,333,285);   //9th line lower

  arc(294,240.5,298,58,8);
 line(296,242,304,242);    //middle
  line(294,234,304,234);    //top
  line(297,248,303,254);  //R KE niche wali line
  //welcome
 setcolor(15);
 settextstyle(7,0,6);
  outtextxy(180,350,"WELCOME");
getch();
}

void userdetail1(void)
{
  setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(170,80,"User Detail Menu");
setcolor(15);
setfillstyle(1,LIGHTGRAY);
rectangle(11,120,629,428);
floodfill(12,130,15);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,125,"Personal Details");
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,165,"Name");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,175,500,195);
floodfill(201,185,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,205,"Father Name");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,210,500,230);
floodfill(201,220,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,240,"Date of Birth");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,245,500,265);
floodfill(201,255,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,278,"Address");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,280,500,300);
floodfill(201,290,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,318,"Phone No");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,320,500,340);
floodfill(201,330,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,358,"Balance");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,360,500,380);
floodfill(201,370,0);
}

void userdetail2(void)
{
  setcolor(15);
 setfillstyle(1,GREEN);
 rectangle(10,83,630,118);
 floodfill(11,93,15);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(170,80,"User Detail Menu");
setcolor(15);
setfillstyle(1,LIGHTGRAY);
rectangle(11,120,629,428);
floodfill(12,130,15);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,125,"Identity Proof");
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,165,"Aadhar Card");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,175,500,195);
floodfill(201,185,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,205,"Pan Card");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,210,500,230);
floodfill(201,220,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,240,"Voter Id Card");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,245,500,265);
floodfill(201,255,0);
setcolor(0);
settextstyle(3,0,3);
outtextxy(20,280,"Driving License");
setcolor(0);
setfillstyle(1,WHITE);
rectangle(200,280,500,300);
floodfill(201,290,0);
}


void rec(void)
{
for(int i=0;i<400;i++)
{setcolor(0);
//setcolor(i%16);
delay(1);
 rectangle(getmaxx()/2-i,getmaxy()/2-i,getmaxx()/2+i,getmaxy()/2+i);
 }
 cleardevice();
}
