#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib(unsigned int);

int main(void)
{
    unsigned int n;
    printf("Enter N (N > 0):");
    scanf("%d",&n);
    printf("%d\n", fib(n));
    system("pause");
    return 0;
}

unsigned long long int fib(unsigned int a)
{
    unsigned long long int num1 = 0, num2 = 1, num3;
    if (a == 1)
        return num1;
    else if (a == 2)
        return num2;
    else 
    {
        for (int b = 3;b <= a;b++)
        {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;  
        }
        return num3;
    }
}