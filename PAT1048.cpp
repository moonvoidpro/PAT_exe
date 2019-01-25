//pat1048 --hash table
#include <iostream>
int a[1001];
int main()
{
    using namespace std;
    int n, m, temp;
    scanf("%d %D", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a[temp]++;
    }
    for(int i = 0; i< 1001; i++) {
        if(a[i]) {
            a[i]--;  // to prevent from count itself twice
            if(m > i && a[m-i]) {
                printf("%d %d", i, m-i);
                return 0;
            }
            a[i]++;
        }
    }
    printf("No Solution");
    return 0;
}
