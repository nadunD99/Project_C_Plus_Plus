#include<iostream.h>
class point
{
	int x,y,z;
	public:
	point();
	~point(){}
    point(int,int=0,int=0);
	void display();
	point sum(point,point);
};
point::point()
{
	x=0;y=0;z=0;
}
point::point(int a,int b,int c)
{
	x=a; y=b; z=c;
}
point point::sum(point P1,point P2 )
{
	point temp;
	temp.x=P1.x+P2.x;
	temp.y=P1.y+P2.y;
	temp.z=P1.z+P2.z;
	return temp;
}
void point::display()
{
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
}
int main()
{
	point P1(2,4,3),P2(5,2,1),P3,P4;
	P1.display();
	P2.display();
	P4=P3.sum(P1,P2);
	P4.display();
}
