#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    double c;

    scanf("%d %d",&a,&b);


    c = (double)(a+b) / (a-b);

    printf("%.2lf",c);
    return 0;
}