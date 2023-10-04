#include<iostream>
#include<math.h>
#define f(x)(x*x*x-x-4)
using namespace std;
int main()
{int i=1;
	double a,b,xmid,ep;
	cout<<"enter interval"<<endl;
	cin>>a>>b;
	cout<<"enter ep"<<endl;
	cin>>ep;
	if(f(a)*f(b)>0)
	{
		cout<<"value is not suitable"<<endl;
	}
	do
	{
		xmid=(a+b)/2;
	cout<<" after "<<  i <<"  iteration "<<" xmid is  ="<<xmid<<endl;
		if(xmid==0)
		{
			printf("root is : %f",xmid);
		}
		if(f(a)*f(xmid)<0)
		{
			b=xmid;
		}
		else
		{
			a=xmid;
		}
		i=i+1;
		
	}
	while(fabs(a-b)>=ep);
	cout<<"approximate root is : "<< xmid;
}
