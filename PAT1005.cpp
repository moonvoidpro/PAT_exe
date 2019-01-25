#include <iostream>
#include <cstdio>
int main ()
{
    using namespace std;
    int count  = 0;
    char ch;
    cin.get(ch);
    while (cin.fail() == false)
    {
        count += (cin.get(ch) - "0");
    }
    cout << count;
    return 0;
}
