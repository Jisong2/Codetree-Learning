#include <stdio.h>

int main() {
    // Please write your code here.
    int n,A=0,B=0,C=0,D =0;
    char c;
    for ( int i = 0; i < 3; i++) {
        scanf(" %c %d",&c,&n);
        if ( c == 'Y' && n >= 37) {
            A++;
        } else if ( c == 'Y' && n >= 37) {
            B++;
        } else if ( c == 'Y' && n >= 37) {
            C++;
        } else {
            D++;
        }
    }

    if ( A >= 2) {
            printf("E");
        } else {
            printf("N");
        }
    return 0;
}