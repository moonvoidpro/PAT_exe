//pat1007
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    int leftflag = 0, rightflag = n - 1, sum = -1, temp = 0,tempindex = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        temp += v[i];
        if (temp < 0) {
            temp = 0;
            tempindex = i + 1;
        }
        else if (temp > sum) {
            sum = temp;
            leftflag = tempindex;
            rightflag = i;

        }
    }
    if (sum < 0) sum = 0;
    printf("%d %d %d", sum, v[leftflag], v[rightflag]);
    return 0;
}
