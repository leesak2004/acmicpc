#include <stdio.h>

int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    for(;a >= 0; a--)
        sum += a;
    printf("%d",sum);
    return 0;
}