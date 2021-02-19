#include<iostream.h>
#include<conio.h>
class arithmetic
{
	protected:
	float num1,num2;

	public:
	void getdata()
	{
		cout<<"Enter first Number for addition:";
		cin>>num1;

		cout<<"Enter second Number for addition:";
		cin>>num2;
	}

};
class minus
{
	protected:
	float n1,n2,diff;

	public:
	void sub()
	{
		cout<<"Enter first number for subtraction:";
		cin>>n1;

		cout<<"Enter second number for subtraction:";
		cin>>n2;

		diff=n1-n2;
	}
};
class plus:virtual public arithmetic
{
	protected:
	float total;

	public:
	void add()
	{
		total=num1+num2;
	}
};
class result:public plus,public minus
{
	public:
	void display()
	{
		cout<<"Addition:-"<<endl;
		cout<<"First Number:"<<num1<<endl;
		cout<<"Second Number:"<<num2<<endl;
		cout<<"Total:"<<total<<endl;
		cout<<"Subtraction:-"<<endl;
		cout<<"First Number:"<<n1<<endl;
		cout<<"Second Number:"<<n2<<endl;
		cout<<"Difference:"<<diff<<endl;
	}

};
void main()
{
	clrscr();
	result z;

	z.getdata();
	z.add();
	z.sub();
	z.display();
	getch();
}






