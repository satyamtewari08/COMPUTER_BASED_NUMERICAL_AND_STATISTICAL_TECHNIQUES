//Newtons forward interpolatioan
#include<stdio.h>
#include<math.h>
int main()
{
	float a[100][100],x,p1,p,y0;
	int i,j,n,fact;
	printf("enter no of terms \n");
	scanf("%d",&n);
	printf("enter value of x \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i][0]);
	}
	printf("enter value of y \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i][1]);
		
	}
	printf("enter value of x for which you want y \n");
	scanf("%f",&x);
	//making difference table
	for(j=2;j<n+1;j++)
	{
		for(i=0;i<n-j+1;i++)
		{
			a[i][j]=a[i+1][j-1]-a[i][j-1];
		}
	}
	//print the difference table
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("%f    ",a[i][j]);
		
		}
		printf("\n");
	}
	//find of p
	p=(x-a[0][0])/(a[1][0]-a[0][0]);
	//initial value of y,p1
	y0=a[0][1];
	p1=p;
	fact=1;
	for(i=2;i<n+1;i++)
	{
		y0=y0+(p1*a[0][i])/fact;
		//update fact and p1
		fact=fact*i;
		p1=p1*(p-(i-1));
	}
	printf("\n\nvalue at x= %g  = %f ",x,y0);
	
	return 0;
}
