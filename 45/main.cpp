#include <iostream>
class shape
{
	int width,height,area;
	public:
	void input();
	void calArea(int x);
	void calArea(int a,int b);
	void Display(int p,int q);
};
void shape::input()
{
	cout<<"Enter width and Height: ";
	cin>>width>>height;

}
void shape::calArea(int x)
{
	int H;
	H=x;
	area=H*H;
}
void shape::calArea(int a,int b)
{
	width=a;
	height=b;
	area=width*height;
}
void shape::Display(int p,int q)
{
	calArea(p);
	cout<<"Area of shape = "<<area<<" "<<"\n";
	calArea(p,q);
	cout<<"Area of shape = "<<area<<" "<<"\n";

}
int main()
{
	shape s1;
	s1.input();
	s1.calArea(int x);
	s1.calArea(int a,int b);
	s1.Dispaly(int p,int q);
}
