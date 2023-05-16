#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;//including files

  int book,count=0;
  void checkalpha( char name[25]);
  void passengers();
int main()
{
   passengers();

  return 0;
}

  void passengers()
  {
      
    char firstname[25],lastname[25],departure[25],arrival[25],email[25];
    cout<<" please,enter your first name"<<endl;
    // the loop used to check if the input includes other charcter without leters
  
  cin>> firstname;
  checkalpha(firstname);
 
    cout<<"enter your last name "<<endl;
     // the loop used to check if the input includes other charcter without leters   
  count=0;
  cin>> lastname;
  checkalpha(lastname);
   
    int age;
    char phonenumber[20];
    cout<<"enter your age number "<<endl;
    cin>>age;
    while(age < 0 || age > 150 ){
      cout<<"error! please enter approperate age "<<endl;
      cin>>age;
    }
    cout<<"enter your phone number"<<endl;
    cin>>phonenumber;
    int a = strlen (phonenumber);

    while (a != 10)
    {
      cout<<"error enter again"<<endl;
      cin>>phonenumber;
      a = strlen(phonenumber);
    }
    cout<<"enter your departure place"<<endl;
    cin>>departure;
    cout<<"enter your arrival place"<<endl;
    cin>>arrival;
    cout<<"enter your email address"<<endl;
    cin>>email;
  }
 
  void checkalpha(char name[25]){
     
       book = strlen(name);
  for(int i =0; i<book;i++)
  {
    bool are = isalpha(name[i]);
    if(!are)
    count++;
  }
  while(count>0)
  {
    cout<<"enter your name again"<<endl;
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
