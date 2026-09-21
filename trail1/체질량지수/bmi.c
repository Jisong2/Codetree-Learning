#include <stdio.h>

int main() {
    // Please write your code here.
    int h,w;
    double b = 0;

    scanf("%d %d",&h,&w);

    b = (10000.0*w)/(h*h);

    if ( b >= 25 ){
        printf("%d\n",(int)b);
        printf("Obesity"); 
    }
    else {
        printf("%d\n",(int)b);
    }
    return 0;
}