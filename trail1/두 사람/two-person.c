#include <stdio.h>

int main() {
    // Please write your code here.
    int a1,b1;
    char a2,b2;
    scanf("%d %c %d %c",&a1,&a2,&b1,&b2);

    if ( (a1 >= 19 && a2 == 'M') || (b1 >= 19 && b2 == 'M')) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}