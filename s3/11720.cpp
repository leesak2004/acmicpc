#include <iostream>
#include <string>
using namespace std;
string input;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    cin >> input;
    for(int i = 0; input[i]!=0; i ++)
    {
        sum += input[i]-'0';
    }
    printf("%d",sum);
    return 0;
}