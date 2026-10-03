#include <iostream>
using namespace std;
int main()
{
 double mark;
 int age;
 string name;
 cout<<"Name :";
 cin>>name;
 cout<<"Age :";
 cin>>age;
 cout<<"Marks :";
 cin>>mark;
 cout<<"\n---STUDENT PROFILE---"<<endl;
 cout<<"Name :"<<name<<endl;
 cout<<"Age :"<<age<<endl;
 cout<<"percentage :"<<mark/5.0<<"%"<<endl;
 return(0);
}
