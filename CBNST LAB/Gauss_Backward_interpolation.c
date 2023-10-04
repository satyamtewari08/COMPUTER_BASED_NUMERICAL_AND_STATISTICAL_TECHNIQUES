#include<stdio.h>
#include<math.h>
int main()
{
	float a[100][100],x,u1,u,y;
	int i,j,n,fact=1;
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
	y=a[n/2][1];
	//find of u
	u=(x-a[n/2][0])/(a[1][0]-a[0][0]);
	u1=u;
	for(i=2;i<=n;i++)
	{
		y=y+(u1*a[(n-2)/i][i])/fact;
		fact=fact*i;
	if(i%2==0)
	{
		
		u1=u1*(u+(i/2));
    }
    else
    {
    	u1=u1*(u-(i/2));
	}
	
}
printf("\n\n the desired value is %f",y);
return 0;
	}
