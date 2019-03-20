#include <stdio.h>

int main()
{
    int n;
    int a,b;
    scanf("%d",&n);
    for(; n > 0; n --)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}