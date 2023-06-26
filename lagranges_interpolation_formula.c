#include <stdio.h>

int main()
{
	float x[10],y[10],p,xp,yp=0;
	int n, i,j;
	printf("Enter number of data points: \n");
	scanf("%d",&n);
	printf("Enter the values of x: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter the values of y: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	printf("Enter the value of x for which y is needed: \n");
	scanf("%f",&xp);

	for(i=0;i<n;i++){
		p=1;
		for(j=0;j<n;j++)
		{
		if(j!=i)
		{
			p=p*(xp-x[j])/(x[i]-x[j]);
		}	
		}
		yp=yp+p*y[i];
	}
	printf("The value of y is %f",yp);
	return 0;
}
