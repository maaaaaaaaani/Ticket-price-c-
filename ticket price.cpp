#include<iostream> u
using namespace std;
 int main(){

 int age;
 cout<<"how old are you? \n";
 cin>>age;

 string membership;
 cout<<"are you member of the club?(yes/no) \n";
 cin>>membership;

 if(age<12){
 cout<<"the cost of your ticket is 10";
 }
 else if ((age>=12 && age<18) && membership == "yes"){
  cout<<"the cost of your ticket is 12";
 }
 else if ((age>=12 && age<18) && membership == "no"){
  cout<<"the cost of your ticket is 15";
 }
 else if ((age>=18 && age<60) && membership == "yes"){
  cout<<"the cost of your ticket is 20";
 }
 else if ((age>=18 && age<60) && membership == "no"){
  cout<<"the cost of your ticket is 25";
 }
 else{
  cout<<"the cost of your ticket is 60";
 }
        return 0;
 }
