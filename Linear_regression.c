#include <stdio.h>

int main() {
    int n, i;
    float sumx = 0, sumy = 0, sumx2 = 0, sumxy = 0;
    float x[100], y[100], a, b;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter the values of y:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }

    // Calculating the sums
    for (i = 0; i < n; i++) {
        sumx += x[i];
        sumy += y[i];
        sumx2 += x[i] * x[i];
        sumxy += x[i] * y[i];
    }

    // Calculating the coefficients a and b
    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy - b * sumx) / n;

    printf("The required linear regression line is: y = %.2f + %.2fx\n", a, b);

    return 0;
}
