#include<stdio.h>
#include<math.h>
int main()
{
	float x,p1,p,y;
	int i,j,n,fact;
	printf("enter no of terms \n");
	scanf("%d",&n);
	float a[n][n+1];
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

	p=(x-a[n-1][0])/(a[1][0]-a[0][0]);
	y=a[n-1][1];
	p1=p;
	fact=1;
	j=2;
	for(i=n-2;i>=0;i--)
	{
		y =y+(p1*a[i][j])/fact;
		fact=fact*j;
		p1=p1*(p+(j-1));
		j++;
	}
	printf("\n\nvalue at x= %g  = %f ",x,y);
	return 0;
}
