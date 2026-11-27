#include <stdio.h>
int main() {
    int choice;
    int num1 = 20;
    int num2 = 4;
    int result;
    float div_result;

    printf("---Menu-Driven calculator---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter choice for operationto be performed:");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
        result = num1 + num2;
        printf("Addition is=%d\n", result);
        break;

        case 2:
        result = num1 - num2;
        printf("Subtraction is=%d\n", result);
        break;

        case 3:
        result = num1 * num2;
        printf("Multiplication is=%d\n", result);
        break;

        case 4:
        if(num2 != 0) {div_result = (float)num1 / num2;
        printf("Division is=%.2f\n", div_result);
    } else {
        printf("Error: Division by zero is not allowed.\n");

    }   break;  
   default:
printf("Invalid Choice\n");
} return 0;

}