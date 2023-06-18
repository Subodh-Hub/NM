#include <stdio.h>
float f(float x){
	return 1/(1+x*x);
}
int main()
{
	float a,b,h,sum,I;
	int n,i;
	printf("Enter the no. of sub intervals:\n");
	scanf("%d",&n);
	printf("Enter the values of lower and upper limit:\n");
	scanf("%f%f",&a,&b);
	h=(b-a)/n;
	sum = f(a)+f(b);
	for(i=1;i<=n-1;i++){
		sum=sum+2*f(a+i*h);
	}
	I=(h/2)*sum;
	printf("Values of integral= %f",I);
	return 0;
}
