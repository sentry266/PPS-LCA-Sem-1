#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct student s[50];
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the roll number, name and marks of 3 subjects: ");
        scanf("%d %s %d %d %d", &s[i].roll, s[i].name,
              &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

        s[i].total = 0;
        for (j = 0; j < 3; j++)
            s[i].total += s[i].marks[j];

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\nRoll No\tName\tSubject:1\tSubject:2\tSubject:3\tTotal\tPercentage\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
               s[i].roll, s[i].name,
               s[i].marks[0], s[i].marks[1], s[i].marks[2],
               s[i].total, s[i].percentage);
    }

    return 0;
}