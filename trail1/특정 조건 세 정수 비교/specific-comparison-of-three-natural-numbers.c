#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min;

    if ( a <= b && a <= c) {
        min = a;
    } else if ( b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    if ( a == min ) {
        printf("1");
    } else {
        printf("0");
    }

    if ( a == b && b == c ) {
        printf(" 1");
    } else {
        printf(" 0");
    }

    return 0;
}