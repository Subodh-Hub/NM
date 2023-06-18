#include <stdio.h>

float f(float x){
    return (1 / (1+ x * x));
}

int main(){
    float a, b, h, sum = 0, I;
    int n, i;
    
    printf("Enter the no. of sub intervals : \n");
    scanf("%d", &n);
    printf("Enter the values of upper and lower limit : \n");
    scanf("%f %f", &a, &b);
    
    h = (b - a) / n;
    sum = f(a) + f(b);
    
    for(i = 1; i <= n - 1; i++){
        if(i % 3 == 0){
            sum = sum + 2 * f(a + i * h);
        }
        else{
            sum = sum + 3 * f(a + i * h);
        }
    }
    
    I = (3*h / 8) * sum;
    
    printf("Value of integral = %f", I );
    
    return 0;
}
