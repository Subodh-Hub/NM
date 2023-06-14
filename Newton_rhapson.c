#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
	return x*x*x-2*x-5;
}
float df(float x)
{
	return 3*x*x-2;
}

int main(){
	float a,e,b;
	int i = 0;
	printf("Enter the initial guess be: ");
	scanf("%f",&a);
	printf("Enter the tolorance value: ");
	scanf("%f",&e);
	
	do{
		b=a;
		a = b - f(b)/df(b);
		printf("The root in %d is %f \nb",i,a);
		i++;
	}
	while(fabs(a-b)>e);
	printf("The root= %f",a);
	return 0;
}
