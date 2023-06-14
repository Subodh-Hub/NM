#include<stdio.h>
#include<math.h>

float f(float x){
  return x*x*x-2*x-5;
}

int main(){
  float a,b,m,e;
  printf("Enter initial guesses\n");
  scanf("%f %f",&a,&b);
  printf("Enter tolerance value: \n");
  scanf("%f",&e);
  if(f(a)*f(b) >0 ){
    printf("Invlaid initial guesses!!! please enter another guesses/n");
  }
  else
  {
    do{
      m=(a+b)/2;
      if(f(a)*f(m)<0){
      b=m;
      }
      else
      {
        a=m;
      }
    }  
    while(fabs(a-b)>e);  
  }
  printf("the root of eqn is %f",m);
  return 0;
}
