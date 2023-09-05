#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int choice_a, i, a, b, choice_b;
    float x, y, result;

    do
    {
        

        printf("\nSelect your operation (0 to exit):\n");
        printf("*************\n");
        printf("1.Arithmetic \n2.Trignometric \n3.Exponential and Logarithmic Functions \n4.Square Root and Cube Root \n5.Conversion Functions etc.\n6.Exit\n");
        printf("*************\n");
        printf("Choice: ");
        scanf("%d", &choice_a);
        printf("\nSelect your operation (0 to exit):\n");
        switch (choice_a)
        {
        case 1:
            printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
            printf("Choice: ");
            scanf("%d", &choice_b);
            if (choice_b == 0)
                return 0;
            switch (choice_b)
            {
            case 1:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = x + y;

                break;
            case 2:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = x - y;

                break;
            case 3:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = x * y;

                break;
            case 4:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                if(y!=0)
                result = x / y;
                else result = 0;
                break;
            case 5:
                printf("Enter X: ");
                scanf("%d", &a);
                printf("\nEnter Y: ");
                scanf("%d", &b);
                result = a % b;
                printf("\nResult: %lf", result);
                break;
            }
            break;
        case 2:
            printf("1. Sin(X)\n2. Cos(X)\n3. Tan(X)\n4. Cosec(X)\n");
            printf("5. Cot(X)\n6. Sec(X)\n");
            printf("Choice: ");
            scanf("%d", &choice_b);
            if (choice_b == 0)
                return 0;
            switch (choice_b)
            {
            case 1:
                printf("Enter X: ");
                scanf("%f", &x);
                result = sin(x * 3.14159 / 180);
                break;
            case 2:
                printf("Enter X: ");
                scanf("%f", &x);
                result = cos(x * 3.14159 / 180);
                break;
            case 3:
                printf("Enter X: ");
                scanf("%f", &x);
                result = tan(x * 3.14159 / 180);
                break;
            case 4:
                printf("Enter X: ");
                scanf("%f", &x);
                result = 1 / (sin(x * 3.14159 / 180));break;
            case 5:
                printf("Enter X: ");
                scanf("%f", &x);
                result = 1 / tan(x * 3.14159 / 180);
                break;
            case 6:
                printf("Enter X: ");
                scanf("%f", &x);
                result = 1 / cos(x * 3.14159 / 180);
                break;
            }
            break;
        case 3:
            printf("1. Exponential\n2. Logarithmic\n");
            printf("Choice: ");
            scanf("%d", &choice_b);
            if (choice_b == 0)
                return 0;
            switch (choice_b)
            {
            case 1:
                printf("Enter X: ");
                scanf("%f", &x);
                result = exp(x);
                break;

            case 2:
                printf("Enter X: ");
                scanf("%f", &x);
                result = log10(x);
            }
            break;
        case 4:
            printf("1. Square root\n2. Cube root\n3. X ^ Y\n4. X ^ 2\n5. X ^ 3\n");
            printf("Choice: ");
            scanf("%d", &choice_b);
            if (choice_b == 0)
                return 0;
            switch (choice_b)
            {
            case 1:
                printf("Enter X: ");
                scanf("%f", &x);
                result = sqrt(x);
                break;
            case 2:
                printf("Enter X: ");
                scanf("%f", &x);
                result = cbrt(x);
                break;
            case 3:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = pow(x, y);

                break;
            case 4:
                printf("Enter X: ");
                scanf("%f", &x);
                result = pow(x, 2);

                break;
            case 5:
                printf("Enter X: ");
                scanf("%f", &x);
                result = pow(x, 3);

                break;
            }
            break;
        case 5:
            printf("1. 1 / X\n2. X ^ (1 / Y)\n3. X ^ (1 / 3)\n");
            printf("4. 10 ^ X\n5. X!\n6. ");
            printf("Choice: ");
            scanf("%d", &choice_b);
            if (choice_b == 0)
                return 0;
            switch (choice_b)
            {
            case 1:
                printf("Enter X: ");
                scanf("%f", &x);
                result = pow(x, -1);

                break;
            case 2:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = pow(x, (1 / y));
                break;
            case 3:
                printf("Enter X: ");
                scanf("%f", &x);
                y = 3;
                result = pow(x, (1 / y));
                break;
            case 4:
                printf("Enter X: ");
                scanf("%f", &x);
                result = pow(10, x);
                break;
            case 5:
                printf("Enter X: ");
                scanf("%f", &x);
                result = 1;
                for (i = 1; i <= x; i++)
                    result = result * i;
                break;
            case 6:
                printf("Enter X: ");
                scanf("%f", &x);
                printf("\nEnter Y: ");
                scanf("%f", &y);
                result = (x * y) / 100;
                break;
            }
         break;
            case 6: return 0;
        default:
            printf("\nInvalid Choice!");
        }
        system("clear");
        printf("**************";
        printf("Result: %.2f\n", result);
        printf("**************";
    }while (choice_a);
    
getch();

return 0;
}
