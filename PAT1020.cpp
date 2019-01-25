//postorder and inorder 2 travelsal
#include <iostream>
#include <vector>
using namespace std;
vector<int> post, in, level(10000, -1); // generate a vector filled with 10000 "-1"
void pre(int root, int start, int end, int index)
{
    if(start > end )
        return;
    int i = start;
    while(i < end && in[i] != post[root])
        i++;
    level[index] = post[root];
    pre(root - 1 - end + i, start, i - 1, 2*index + 1); //land number with nondecreasing order
    pre(root - 1, i + 1, end, 2*index + 2);
}
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    post.resize(n);  //confirm the space consumed by data
    in.resize(n);
    for(int i = 0; i < n; i++)
        scanf("%d", &post[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &in[i]); //get the data
    pre(n -1, 0, n-1, 0);
    for(int i = 0; i < level.size(); i++) {
        if(level[i] != -1) {
            if (cnt != 0) // do not output " " before first number
                printf(" ");
            printf("%d", level[i]);
            cnt++;
        }
        if(cnt == n)
            break; //wont do meaningless circulation
    }
    return 0;
}
