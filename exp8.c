#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int sub1;
    int sub2;
    int sub3;
    int total;
    float percentage;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\n Enter the roll number, name and marks of 3 subjects:\n");
        scanf("%d %s %d %d %d", &s[i].roll_no, s[i].name, &s[i].sub1, &s[i].sub2, &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n OUTPUT:\n");
    printf("Roll No\t Name\t Subject: 1\t Subject: 2\t Subject: 3\t Total\t Percentage\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
               s[i].roll_no, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].total, s[i].percentage);
    }

    return 0;
}