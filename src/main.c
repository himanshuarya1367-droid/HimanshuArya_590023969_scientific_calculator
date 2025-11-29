#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Sine (sin x)\n");
        printf("8. Cosine (cos x)\n");
        printf("9. Tangent (tan x)\n");
        printf("10. Logarithm (ln x)\n");
        printf("11. Log10 (log10 x)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 < 0)
                    printf("Error! Negative number.\n");
                else {
                    result = sqrt(num1);
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 7:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("sin(%.2lf) = %.4lf\n", num1, sin(num1));
                break;

            case 8:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("cos(%.2lf) = %.4lf\n", num1, cos(num1));
                break;

            case 9:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("tan(%.2lf) = %.4lf\n", num1, tan(num1));
                break;

            case 10:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error! Log undefined.\n");
                else
                    printf("ln(%.2lf) = %.4lf\n", num1, log(num1));
                break;

            case 11:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error! Log undefined.\n");
                else
                    printf("log10(%.2lf) = %.4lf\n", num1, log10(num1));
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}