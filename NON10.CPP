class A
{
private:// Within class
	int no1;
protected:// imidiate child class
	int no2;
public:// cann access everywhere
	int no3;
};
// private   ---> protected,public---> B---private
// protected --->protected,public ---> B---protected
// public    --->protected,public ---> B--- protected---Protected
class B :  public A		     //        public---public
{
private:
	int no4;

protected:
	int no5;

public:
	int no6;
};

void main()
{
	clrscr();


	getch();
}