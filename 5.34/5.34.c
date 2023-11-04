#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
    int b, ex;
    printf("Enter base, exponent:");
    scanf("%d %d",&b,&ex);
    printf("Answer is %d\n",power(b,ex));
    system("pause");
    return 0;
}

int power(int a, int b)
{
    int ans = 1;
    if (b == 1)
        return a;
    else 
    {
        ans = a * power(a, b-1);
        return ans;
    }
}