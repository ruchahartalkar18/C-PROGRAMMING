#include <stdio.h>

int find_fact_loop(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int find_fact_recursion(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * find_fact_recursion(n - 1);
}

int main() {
    int num, result1, result2;

    printf("Enter any input number: ");
    scanf("%d", &num);

    result1 = find_fact_loop(num);
    printf("Factorial without recursion = %d\n", result1);

    result2 = find_fact_recursion(num);
    printf("Factorial with recursion = %d\n", result2);

    return 0;
}