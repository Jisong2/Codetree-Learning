#include <stdio.h>

int main() {
    // Please write your code here.
    int a1,a2,b1,b2;
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

    if ( a1 > b1) {
        printf("A");
    } else if ( a1 < b1 ) {
        printf("B");
    } else if ( a2 > b2 ) {
        printf("A");
    } else if ( b2 > a2) {
        printf("B");
    } else {
        printf("Same");
    }
    return 0;
}