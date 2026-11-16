#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    if ((a >= 0 && a < 10)||(a >= 12 && a < 15))
    {
        printf("OK\n");
    }else {
        printf("NG\n");
    }
    return 0;
}
