#include <stdio.h>

int main() {
    // Please write your code here.
    int x;
    scanf("%d",&x);

    if ( x % 4 == 0 ) {
        if ( x % 100 == 0 && x % 400 != 0) {
            printf("false");
        } else {
            printf("true");
        }
    } else {
        printf("false");
    }
    return 0;
}