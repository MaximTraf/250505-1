#include <stdio.h>

int main()

{
    int a, b, c, zn;

    printf("Input A=");
     scanf("%d", &a);
    
    printf("Input B=");

     scanf("%d", &b);
    
    printf("Choose an operation:\n1 + Addition\n2 - Subtraction\n3 * Multiplication\n4 / Division\nSelected operation: ");

         scanf("%d", &zn);
    
    switch (zn)
    {
        case 1:
            c=a+b;
            printf("\n%d+%d=%d\n\n", a, b, c);
         break;
            
        case 2:
            c=a-b;
            printf("\n%d-%d=%d\n\n", a, b, c);
         break;
            
        case 3:
            c=a*b;
            printf("\n%d*%d=%d\n\n", a, b, c);
         break;
            
        case 4:
            if (b==0)
            { printf("\nError. You can't divide by zero.\n\n");
                  return 0;
            }
            else
            {
                c=a/b;
                  printf("\n%d/%d=%d\n\n", a, b, c);
         break;
            }
            
            default:
            printf("\nError. Try again (Choose the correct operation).\n\n");
    }
            
return 0;
}
