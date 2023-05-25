   // passengers information project
#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;
  int book,count=0;
  // a function used to check if the user input includes any unnecessary information
  void check( char name[25],char phonenumber[20],int age,int t);
  void passengers();
int main()
{
   passengers();
  return 0;
}
  void passengers()
  {   
    char phonenumber[20],firstname[25],lastname[25],departure[25],arrival[25],email[25];
    int age;
    cout<<" please,enter your first name"<<endl;
    cin>> firstname;
    check(firstname,phonenumber,age,0);
    cout<<"enter your last name "<<endl;   
    count=0;
    cin>> lastname;
    check(lastname,phonenumber,age,0);
    cout<<"enter your age number "<<endl;
    cin>>age;
    check(lastname,phonenumber,age,1);
    cout<<"enter your phone number"<<endl;
    cin>>phonenumber;
    check(lastname,phonenumber,age,2);
    cout<<"enter your departure place"<<endl;
    cin>>departure;
    cout<<"enter your arrival place"<<endl;
    cin>>arrival;
    cout<<"enter your email address"<<endl;
    cin>>email;
  }
     // a function used to check if the user input includes any unnecessary information
   void check( char name[25],char phonenumber[20],int age,int t){ 
     if(t==0)
     {
       book = strlen(name);
  for(int i =0; i<book;i++)
  {
    bool are = isalpha(name[i]);
    if(!are)
    count++;
  }
  while(count>0)
  {
    cout<<"error! please enter again"<<endl;
    count=0;
    cin>>name;
    book =strlen(name);
    for(int i=0;i<book;i++)
    {
      bool are =isalpha(name[i]);
      if(!are)
      count++;
    }
  }
     }
         else if(t==1) 
         {
             while(age < 0 || age > 150 )
             {
      cout<<"error! please enter approperate age "<<endl;
      cin>>age;
            }
         }
         else if(t==2)
         {
               int a = strlen (phonenumber);
       while (a != 10)
    {
      cout<<"error enter again"<<endl;
      cin>>phonenumber;
      a = strlen(phonenumber);
    }            
         }     
  }
