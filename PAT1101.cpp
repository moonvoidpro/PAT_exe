#include <iostream>
#include <algorithm>
#include <cstdio>
//#include <vector>
int main ()
{
    using namespace std;
    int a[100000], b[100000];
    int c[100000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a+n);
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && b[i] > max)
            c[cnt++] = b[i];
        if (b[i] > max)
            max = b[i];
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
    {
        if (i != 0) printf(" ");
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}
