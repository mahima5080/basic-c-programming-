#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);
        
        // Print commas only between numbers
        if (i < n) {
            printf(", ");
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}
