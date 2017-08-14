#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 cout<<"\n			   BANK\n";
 int a,money;
 struct player
 {
  char plyr;
  int amount;
 }p[13];
 cout<<"Enter number of players(max 17)--> ";
 cin>>a;
 cout<<"Enter starting money for all players(divided by 100)--> ";
 cin>>money;
 for(int i =0;i<a;i++)
 {
  cout<<"\n Enter initials of player "<<i+1<<" --> ";
  cin>>p[i].plyr;
  p[i].amount=money;
 }
 money=1;
 long int cash;
 while(0==0)
 {
  clrscr();
  cout<<"Round number "<<money++<<" -";
  for(i=0;i<a;i++)
  {
   if(p[i].amount>0)
   {
    cout<<"\n Enter current round money for \""<<p[i].plyr<<"\" -> ";
    cin>>cash;
    p[i].amount=p[i].amount+(cash/100);
   }
  }
  clrscr();
  cout<<"Players still in game are -";
  int ctr=0;
  for(i=0;i<a;i++)
  {
   if(p[i].amount>0)
   {
    ctr++;
    cout<<"\n "<<p[i].plyr<<" has Rs."<<p[i].amount<<"00";
   }
  }
  getch();
  if(ctr==1)
  {
   cout<<"\n he is the winner....\n GAME OVER....";
   getch();
   exit(0);
  }

 }
 getch();
}