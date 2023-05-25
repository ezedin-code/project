#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;
       int book,count=0;
         class passangers{    
        public:
          char firstname[25];
          char lastname[25];
          int age;
          char phonenumber[20];
          char departure[25];
          char  arrival[25];
          char email[25];
          
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
          
       };

int main()
{
   passangers one;
   
   cout<<" please,enter your first name"<<endl;
   cin>>one.firstname;
   one.check(one.firstname,one.phonenumber,one.age,0);
   cout<<"enter your last name "<<endl;
   count=0;
   cin>>one.lastname;
   one.check(one.lastname,one.phonenumber,one.age,0);
   cout<<"enter your age number "<<endl;
   cin>>one.age;
   one.check(one.lastname,one.phonenumber,one.age,1);
   cout<<"enter your phone number"<<endl;
   cin>>one.phonenumber;
   one.check(one.lastname,one.phonenumber,one.age,2);
   cout<<"enter your departure place"<<endl;
   cin>>one.departure;
   cout<<"enter your arrival place"<<endl;
   cin>>one.arrival;
   cout<<"enter your email address"<<endl;
   cin>>one.email;
      
    return 0;
}
