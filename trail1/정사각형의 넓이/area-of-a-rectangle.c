#include <stdio.h>

int main() {
    // Please write your code here.
    int N;

    scanf("%d",&N);

    if ( N < 5) {
        printf("%d\n",N*N);
        printf("tiny");
    } else {
        printf("%d\n",N*N);
    }
    return 0;
}