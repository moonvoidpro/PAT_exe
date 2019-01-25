//pat1134 --hash
//vertex cover set
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m, k, nv, a, b, num;
    scanf("%d %d", &n, &m);
    vector<int> v[n]; // a 2D table with n line to restore the vertex
    for(int i = 0; i< m; i++) {
        scanf("%d %d", &a, &b);
        v[a].push_back(i);
        v[b].push_back(i);
    }
    scanf("%d", &k);  //know the number of sets
    for(int i = 0; i < k; i++) { //
        scanf("%d", &nv);
        int flag = 0;
        vector<int> hash(m, 0); //a vector to restore m lines
        for(int j = 0; j <nv; j++) { //cycle the set for testing
            scanf("%d", &num); //read the vertex number
            for(int t = 0; t < v[num].size(); t++) //
                hash[v[num][t]] = 1; //v[num][t] point to
                //the number of the line connected to the vertex
                // then set the line number "1" to indicate it has been covered
        }
        for(int j =0; j < m; j++) { //after the step of marking lines
                                    //verify if the set is legal
            if(hash[j] == 0) {
                printf("No\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("Yes\n");
    }
    return 0;
}
