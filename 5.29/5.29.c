#include <stdio.h>
#include <stdlib.h>

int lcm(int, int);

int main(void)
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    printf("LCM of these two integers is %d\n",lcm(a,b));
    system("pause");
    return 0;
}

int lcm(int a, int b)
{
    int oa = a, ob = b, c, d = 0;
    while (d == 0)
    {
        if ( a > b)
            a %= b;
        else if (b > a)
            b %= a;
        
        if (a == 0)
            d = b;
        else if (b == 0)
            d = a;
    }
    c = d*(oa/d)*(ob/d);
    return c;
}