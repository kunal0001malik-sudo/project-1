#include <stdio.h>

struct Student {
    char name[20];
    int marks[3];
    float avg;
};

int main() {
    struct Student s[10];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%19s", s[i].name);

        s[i].avg = 0;

        for (j = 0; j < 3; j++) {
            printf("Enter marks: ");
            scanf("%d", &s[i].marks[j]);
            s[i].avg += s[i].marks[j];
        }

        s[i].avg /= 3;
    }

    for (i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nAverage: %.2f", s[i].avg);
        printf("\n");
    }

    return 0;
}