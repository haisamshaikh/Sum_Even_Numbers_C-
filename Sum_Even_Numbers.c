#include <stdio.h>

int main() {
    int N, i = 2, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    while(i <= N) {
        sum += i;
        i += 2;  // jump to next even
    }

    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
