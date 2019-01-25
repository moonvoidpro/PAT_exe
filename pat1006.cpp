//pat1006
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    string unlocked, locked;
    int n;
    int maxt, mint;
    scanf("%d", &n);
    string t;
    cin >> t;

    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    int intime = 3600 * h1 + 60 * m1 + s1;
    int outtime = 3600 * h2 + 60 * m2 + s2;
    mint = intime;
    maxt = outtime;
    unlocked = t;
    locked = t;
    //if (n > 1) {
    for (int i = 1; i < n; i++) {
        string t;
        cin >> t;
        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
        int intime = 3600 * h1 + 60 * m1 + s1;
        int outtime = 3600 * h2 + 60 * m2 + s2;
        if (intime < mint) {
            mint = intime;
            unlocked = t;
        }
        if (outtime > maxt) {
            maxt = outtime;
            locked = t;
        }
    }
    //}
    cout << unlocked << " " << locked << endl;
    return 0;
}
