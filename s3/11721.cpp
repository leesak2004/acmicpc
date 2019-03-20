#include <iostream>
#include <string>
using namespace std;
string a;
int main()
{
    cin >> a;
    for(int i = 0 ; a[i] != 0; i ++)
    {
        if(i % 10 == 0 && i != 0)
            printf("\n");
        printf("%c",a[i]);
    }
    return 0;
}