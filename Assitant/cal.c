#include <stdio.h>
#include <math.h>

int calculator()
{
    int choice, a, b;
    float result;
    printf("\n   ***Welcome to Calulator menu***\n\n\n");
    printf("1. Addition   2. Substraction   3. Multiplication\n\n4. Division");
    printf("\t5. Square root     6. X ^ Y\n\n7. X ^ 2        8. X ^ 3           ");
    printf("9. 1 / X\n\n10. X!        \t 11. %%           \t12. Modulus    ");

    printf("\n\n14. log10(x)      15. Sin(X)          16. Cos(X) ");
    printf("\n\n17. Tan(X)     18. Cosec(X)        ");
    // printf("21. Cot(X)\n\n22. Sec(X)     23. About           0. Back\n\n");printf("\t   12. log10(x)\n\n13. X!         14. %%               15. log10(x)\n\n16. Modulus    ");
    // printf("12. log10(x)\n\n13. X!         14. %%               15. log10(x)\n\n16. Modulus    ");
    // printf("17. Sin(X)          18. Cos(X)\n\n19. Tan(X)     20. Cosec(X)        ");
    // printf("21. Cot(X)\n\n22. Sec(X)     23. About           0. Back\n\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    system("cls");
    if (choice == 0)
    {
        main();
    }
    switch (choice)
    {
    case 1:
        printf("Enter value of X : ");
        scanf("%d", &a);
        printf("Enter value of Y : ");
        scanf("%d", &b);
        result = a + b;
        printf("\n\nResult is : %f", result);
        break;
    case 2:
        printf("Enter value of X : ");
        scanf("%d", &a);
        printf("Enter value of Y : ");
        scanf("%d", &b);
        result = a - b;
        printf("\n\nResult is : %f", result);
        break;
    case 3:
        printf("Enter value of X : ");
        scanf("%d", &a);
        printf("Enter value of Y : ");
        scanf("%d", &b);
        result = a * b;
        printf("\n\nResult is : %f", result);
        break;
    case 4:
        printf("Enter value of X : ");
        scanf("%d", &a);
        printf("Enter value of Y : ");
        scanf("%d", &b);
        result = a / b;
        printf("\n\nResult is : %f", result);
        break;
    case 5:
        printf("Enter value of X : ");
        scanf("%d", &a);
        result = sqrt(a);
        printf("\n\nResult is : %f", result);
        break;
    case 6:
        printf("Enter value of X : ");
        scanf("%d", &a);
        printf("Enter value of Y : ");
        scanf("%d", &b);
        result = pow(a,b);
        printf("\n\nResult is : %f", result);
        break;
    case 7: 
        printf("Enter value of X : ");
        scanf("%d", &a);
        result = pow(a,2);
        printf("\n\nResult is : %f", result);
        break;
    case 8: 
        printf("Enter value of X : ");
        scanf("%d", &a);
        result = pow(a,3);
        printf("\n\nResult is : %f", result);
        break;
    case 9: 
        printf("Enter value of X : ");
        scanf("%d", &a);
        result = pow(a,-1);
        printf("\n\nResult is : %f", result);
        break;



    default:
        break;
    }
}

int main()
{
    printf(calculator());

    return (0);
}