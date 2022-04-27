#include<iostream.h>
#include<conio.h>
class b;
class a
{
	int x;
	public:
	void setdata(int i)
	{
	   x=i;
	}
	friend void max(a,b);
};
class b
{
	void max (a A, b B)
	{

	if(a.x >=b.y)
	cout<<












