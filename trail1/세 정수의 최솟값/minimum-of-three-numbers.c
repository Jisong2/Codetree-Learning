#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min;

    if ( a <= b && a <= c) {
        min = a;
    } else if ( b <= c && b <= c) {
        min = b;
    } else {
        min = c;
    }

    printf("%d",min);
    return 0;
}