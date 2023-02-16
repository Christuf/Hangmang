#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
cout<<"\n**********************************************************************";
cout<<"\n Hang-Man Game ";
cout<<"\n**********************************************************************";
string words[12]={"Reindeer","Hedgedog","Kangaroo","Hippopotamus","Chimpanzee","Crocodile","Woodpecker","Hamster","Macaque","Tortoise","Ostrich","Walrus"};
string name;
cout<<"\n Enter your name : ";
cin>>name;
cout<<"\nWelcome "<<name <<" !";
srand(time(0));
int r = rand()%10;
string w = words[r];
int c=1;
int l = w.size();
cout<<"\nThe word is ";
string wordchange;
for(int i=0;i<l;i++)
wordchange += '-';
cout<<wordchange;
int c1=0;
while(c<=12)
{
int c2=0;
char alp;
cout<<"\nPlease enter any alphabet : ";
cin>>alp;
for(int i=0;i<l;i++)
{
if (tolower(alp)==tolower(w[i]))
{
wordchange[i]=alp;
c1+=1;
c2=1;
}
}
if (c2==0)
cout<<"\nThe alphabet "<<alp<<" does not belong to the word";
if(c1!=l)
cout<<"\n\nThe word is "<<wordchange;
else
{
cout<<"Great ! You have found the word. The word is "<<wordchange;
c2=2;
break;
}
c++;
}
if(c1!=2)
cout<<"\nYou Lose.!\nBetter luck next time";
}