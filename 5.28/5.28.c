#include <stdio.h>
#include <stdlib.h>

char changed(char);

int main(void)
{
    char let;
    printf("Enter a letter:");
    scanf("%c",&let);
    printf("The letter Has been changed to: %c\n",changed(let));
    system("pause");
    return 0;
}

char changed(char a)
{
    if (a <= 90 && a >= 65)
    {
        a += 32;
    }
    else if (a >= 97 && a <= 122)
    {
        a -= 32;
    }
    return a;
}