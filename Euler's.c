#include <stdio.h>

float f(float x,float y)
{
	return 2*x+y;
}

int main()
{
	float xo,yo,h,xp,yp,x,y;
	printf("Enter the initial value of x: \n");
	scanf("%f",&xo);
	printf("Enter initial value of y: \n");
	scanf("%f",&yo);
	printf("Enter step size: \n");
	scanf("%f",&h);
	printf("Enter the value of x for which y is needed: \n");
	scanf("%f",&xp);
	x=xo;
	y=yo;
	for(x=xo;x<=xp;x+=h)
	{
		yp= y + h* f(x,y);
		printf("The value of y in %f is %f \n",x,y);
		y=yp;

	}

	return 0;
}
