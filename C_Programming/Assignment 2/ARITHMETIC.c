#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Addition is = %d\n", a + b);
            break;
        case 2:
            printf("Subtraction is = %d\n", a - b);
            break;
        case 3:
            printf("Multiplication is = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Division is = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not possible\n");
            break;
        case 5:
            if (b != 0)
                printf("Modulus is = %d\n", a % b);
            else
                printf("Modulus by zero is not possible\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}