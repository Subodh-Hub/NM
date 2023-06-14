#include <stdio.h>
#include <math.h>
float g(float x){
	return pow((2*x+5),(1.0/3.0));
}
int main(){
	float a,e,b;
	printf("Enter the initial guess: \n");
	scanf("%f",&a);
	printf("Enter the tolerance value: \n");
	scanf("%f",&e);
	do{
		b= a;
		a= g(b);
	}
	while(fabs(a-b)>e);
		printf("root = %f \n",a);
		return 0;
}
