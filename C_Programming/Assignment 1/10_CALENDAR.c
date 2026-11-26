#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int main() {
    int year, startDay;
    
    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter the starting day of the year (0=Sun, 1=Mon, ..., 6=Sat): ");
    scanf("%d", &startDay);

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (isLeapYear(year))
        daysInMonth[1] = 29;

    for (int month = 0; month < 12; month++) {

        printf("\n\n====== %s %d ======\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (int i = 0; i < startDay; i++)
            printf("    ");

        for (int day = 1; day <= daysInMonth[month]; day++) {
            printf("%3d ", day);

            if ((day + startDay) % 7 == 0)
                printf("\n");
        }

        startDay = (startDay + daysInMonth[month]) % 7;
        printf("\n");
    }

    return 0;
}