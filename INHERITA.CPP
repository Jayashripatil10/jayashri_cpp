#include<iostream.h>
#include<conio.h>

class Student
{
   protected:
	int roll_no;
	char name[20];
};
class Marks
{
    protected:
	 int m1,m2,m3,total;
};
class Grade
{
    protected:
     char a;
} ;
class Result: protected Student,protected Marks,protected Grade
{
  public:

void get()
{
    cout<<"Enter the roll no:- ";
    cin>>roll_no;
     cout<<"Enter the name:- ";
    cin>>name;
     cout<<"Enter the marks1:- ";
    cin>>m1;
     cout<<"Enter the roll no:- ";
    cin>>m2;
    cout<<"Enter the roll no:- ";
    cin>>m3;
    total=m1+m2+m3;
    cout<<"Enter the sports grade:-";
    cin>>a;
}
void put()
{
    cout<<"rollno:- "<<roll_no;
    cout<<"Name:- "<<name;
    cout<<"marks1:- "<<m1;
    cout<<"marks2:- "<<m2;
    cout<<"marks3:- "<<m3;
    cout<<"total:- "<<total;
    cout<<"Grade:- "<<a;
}
};
void main()
{
   clrscr();
     Result r1;
     r1.get();
     r1.put();
     getch();


}

