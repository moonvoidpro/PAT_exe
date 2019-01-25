//PAT1120 -- the usage of <set>
#include <iostream>
#include <set>
using namespace std;
int numCount(int num)
{
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, num;
    set<int> result;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        result.insert(numCount(num));
    }
    printf("%d\n", result.size());
    for (auto t = result.begin(); t != result.end(); t++) {
        if (t != result.begin())
            printf(" ");
        printf("%d", *t);
    }
    return 0;
}
