#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], ch;
    int choice;
    char *p;

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Length (strlen)\n");
        printf("2. Copy (strcpy)\n");
        printf("3. Concatenate (strcat)\n");
        printf("4. Compare (strcmp)\n");
        printf("5. Find a character (strchr)\n");
        printf("6. Find a substring (strstr)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf("%s", s1);
                printf("Length = %lu\n", strlen(s1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%s", s1);
                strcpy(s2, s1);
                printf("Copied string = %s\n", s2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", s1);
                printf("Enter second string: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("Concatenated string = %s\n", s1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", s1);
                printf("Enter second string: ");
                scanf("%s", s2);
                if (strcmp(s1, s2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%s", s1);
                printf("Enter character to find: ");
                scanf(" %c", &ch);
                p = strchr(s1, ch);
                if (p != NULL)
                    printf("'%c' found at position %ld\n", ch, p - s1 + 1);
                else
                    printf("Character not found\n");
                break;

            case 6:
                printf("Enter main string: ");
                scanf("%s", s1);
                printf("Enter substring to find: ");
                scanf("%s", s2);
                p = strstr(s1, s2);
                if (p != NULL)
                    printf("Substring found at position %ld\n", p - s1 + 1);
                else
                    printf("Substring not found\n");
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}