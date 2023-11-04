#include <stdio.h>
#include <stdlib.h>

void tOH(int n, char a, char b, char c) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", a, c);
        return;
    }
    
    tOH(n - 1, a, c, b);
    printf("Move disk %d from %c to %c\n", n, a, c);
    tOH(n - 1, b, a, c);
}

int main(void) 
{
    tOH(3, 'A', 'B', 'C');
    system("pause");
    return 0;
}
