//PAT1121
#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> couple(100000);
vector<int> isExist(100000);
int main()
{
    int n, a, b, m;
    scanf("%d", &n);
    for (int i = 0; i < 100000; i++) {
        couple[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        couple[a] = b;
        couple[b] = a;
    }
    scanf("%d", &m);
    vector<int> guest(m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &guest[i]);
        if (couple[guest[i]] != -1)
            isExist[couple[guest[i]]] = 1;
    }
    set<int> s;
    for (int i = 0; i < m; i++) {
        if (!isExist[guest[i]]) s.insert(guest[i]); //regard the guest's couple is not single
    }
    printf("%d\n", s.size());
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) printf(" ");
        printf("%05d", *it);
    }
    return 0;
}
