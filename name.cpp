#include <iostream>
using namespace std;
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
    cin>>firstname;
    cout<<"enter your last name "<<endl;
    cin>>lastname;
    int age,phonenumber;
    cout<<"enter your age number "<<endl;
    cin>>age;
    while(age < 0 || age > 150 ){
        cout<<"error! please enter approperate age "<<endl;
        cin>>age;
    }
    cout<<"enter your phone number"<<endl;
    cin>>phonenumber;
    
  int count=0;

while(phonenumber !=0){
    count++;
    phonenumber=phonenumber/10;
    }
  /* do
   {
    cin>>phonenumber;
    cout<<"error! please enter again"<<endl;
    
   } while (count !=10);*/
   
    cout<<"enter your departure place"<<endl;
    cin>>departure;
    cout<<"enter your arrival place"<<endl;
    cin>>arrival;
    cout<<"enter your email address"<<endl;
    cin>>email;


  }