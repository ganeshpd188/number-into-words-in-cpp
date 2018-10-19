#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int a[9]={1,2,3,4,5,6,7,8,9};
 int m,m1,m2,m3;
 cout<<"enter the amount";
 cin>>m;
 m1=m/100;
 {
   if(m1==1)
   cout<<"one hundred ";
   else if(m1==2)
   cout<<"two hundred ";
   else if(m1==3)
   cout<<"three hundred ";
   else if(m1==4)
   cout<<"four hundred ";
   else if(m1==5)
   cout<<"five hundred ";
   else if(m1==6)
   cout<<"six hundred ";
   else if(m1==7)
   cout<<"seven hundred ";
   else if(m1==8)
   cout<<"eight hundred ";
   else if(m1==9)
   cout<<"nine hundred ";
 }
 m2=m%100;
 if(m2>0&&m2<20)
 {
   if(m2==1)
   cout<<"one";
   else if(m2==2)
   cout<<"two";
   else if(m2==3)
   cout<<"three";
   else if(m2==4)
   cout<<"four";
   else if(m2==5)
   cout<<"five";
   else if(m2==6)
   cout<<"six";
   else if(m2==7)
   cout<<"seven";
   else if(m2==8)
   cout<<"eight";
   else if(m2==9)
   cout<<"nine";
   else if(m2==10)
   cout<<"ten";
   else if(m2==11)
   cout<<"eleven";
   else if(m2==12)
   cout<<"twelve";
   else if(m2==13)
   cout<<"thirteen";
   else if(m2==14)
   cout<<"fourteen";
   else if(m2==15)
   cout<<"fifteen";
   else if(m2==16)
   cout<<"sixteen";
   else if(m2==17)
   cout<<"seventeen";
   else if(m2==18)
   cout<<"eighteen";
   else if(m2==19)
   cout<<"nineteen";
 }
 {
   if(m2>=20&&m2<30)
   cout<<"twenty ";
   else if(m2>=30&&m2<40)
   cout<<"thirty ";
   else if(m2>=40&&m2<50)
   cout<<"forty ";
   else if(m2>=50&&m2<60)
   cout<<"fifty ";
   else if(m2>=60&&m2<70)
   cout<<"sixty ";
   else if(m2>=70&&m2<80)
   cout<<"seventy ";
   else if(m2>=80&&m2<90)
   cout<<"eighty ";
   else if(m2>=90&&m2<100)
   cout<<"ninety ";
 }
 if(m2>20)
 {
  m3=m2%10;
  if(m3<10)
  {
   if(m3==1)
   cout<<"one";
   else if(m3==2)
   cout<<"two";
   else if(m3==3)
   cout<<"three";
   else if(m3==4)
   cout<<"four";
   else if(m3==5)
   cout<<"five";
   else if(m3==6)
   cout<<"six";
   else if(m3==7)
   cout<<"seven";
   else if(m3==8)
   cout<<"eight";
   else if(m3==9)
   cout<<"nine";
  }
 }
 getch();
}