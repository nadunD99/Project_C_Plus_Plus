#include<iostream.h>
class Bclass
{
	public:int a,b;
	Bclass(int i,int j)
	{
	a=i,
	b=j;
	}
};
int sum(Bclass x)
{
	return x.a+x.b;
}

void main()
{
	Bclass n(3,2);
	cout<<sum(n);
}
