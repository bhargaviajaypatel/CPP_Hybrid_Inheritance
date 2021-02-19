#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rollnum;

	public:
	void getnum()
	{
		cout<<"Enter your Roll No. :" ;
		cin>>rollnum;
	}
	void putnum()
	{
		cout<<"Roll No. :"<<rollnum<<endl;
	}
};

class test: virtual public student
{
	protected:
	float mark1,mark2;

	public:
	void getmarks()
	{
		cout<<"Enter Marks for Subject 1:";
		cin>>mark1;

		cout<<"Enter Marks for Subject 2:";
		cin>>mark2;
	}

	void putmarks()
	{
		cout<<"Marks for Subject 1:"<<mark1<<endl;
		cout<<"Marks for Subject 2:"<<mark2<<endl;
	}
};

class sports:virtual public student
{
	protected:
	float score;

	public:
	void getscore()
	{
		cout<<"Enter your Score:";
		cin>>score;
	}
	void putscore()
	{
		cout<<"Score:"<<score<<endl;
	}
};
class result:public test,public sports
{
	protected:
	float total;

	public:
	void displaytotal()
	{
		total=mark1+mark2+score;
		cout<<"Result:"<<total<<endl;
	}
};
void main()
{
	clrscr();
	result stud1;

	stud1.getnum();
	stud1.getmarks();
	stud1.getscore();
	stud1.putnum();
	stud1.putmarks();
	stud1.putscore();
	stud1.displaytotal();

	getch();
}