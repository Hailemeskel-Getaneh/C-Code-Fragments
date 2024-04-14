#include<iostream>
#include<string>
using namespace std;
struct student
{
 char name[200];
 int rollno;
 float marks;
};
int main()
{
struct student student1;//Declaring structure variable

strcpy(student1.name,"Lucky");

student1.rollno=201;
student1.marks=85.9;
  cout<<"Student Name = "<<student1.name<<"\n";
  cout<<"Student Rollno="<<student1.rollno<<"\n";
  cout<<"Student Marks="<<student1.marks<<"\n";
}