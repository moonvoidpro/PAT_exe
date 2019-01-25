//
#include <iostream>
using namespace std;
int main()
{
    int a, b = 1, c = 5, d = 100, e = 40;
    a = e < c ? printf("%d", d) : printf("%d", d - e);
    printf("\n%d %d %d", a, e, c);
    return 0;
}
