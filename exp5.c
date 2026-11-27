#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    int choice;

    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---");
        printf("\n 1. Find Length of a String (strlen)");
        printf("\n 2. Copy a String (strcpy)");
        printf("\n 3. Concatenate/Join Strings (strcat)");
        printf("\n 4. Compare Two Strings (strcmp)");
        printf("\n 5. Exit");
        printf("\n Enter your choice (1-5): ");
        scanf("%d", &choice);

        getchar();

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of the string is: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string to copy: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Successfully copied! Copied string is: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcpy(str3, str1);
                strcat(str3, str2);
                printf("Concatenated string: %s\n", str3);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if (strcmp(str1, str2) == 0) {
                    printf("Both strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 5:
                printf("Exiting program. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Please select a valid option from 1 to 5.\n");
        }
    }
    return 0;
}