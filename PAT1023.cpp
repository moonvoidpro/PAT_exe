//pat1023 -- try hash
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    long long int num, twi;
    scanf("%lld", &num);
    twi = 2 * num;
//    printf("%lld\n", twi);  //how to solve the overflow?
    int flag = 0;
    string s1 = to_string(num);
    string s2 = to_string(twi);
    int dig[10] = {0};
    char arr[21];
    char brr[21];
    strcpy(arr, s1.c_str());
    strcpy(brr, s2.c_str());
    for (int  i = 0; i <= strlen(arr); i++) {
//        if ((arr[0] - '4' > 0))
//            flag = 1;
//            //break;

        int temp = arr[i] - '0';
        dig[temp]++;
    }
//    for (int i = 0; i < 10; i++) {
//        printf("%d ",dig[i]);
//    }
//    printf("\n%d\n", flag);
    for (int i = 0; i <= strlen(brr); i++) {
        int temp = brr[i] - '0';
        dig[temp]--;
    }
//    for (int i = 0; i < 10; i++) {
//        printf("%d ",dig[i]);
//    }
//    printf("\n%d\n", flag);
    for (int i = 0; i < 10; i++) {
        if(dig[i] != 0) {
            flag = 1;
            //break;
        }
    }
//    printf("\n%d\n", flag);
    if (flag == 1)
        printf("N0\n%lld", twi);
    else if (flag == 0)
        printf("Yes\n%lld", twi);
    return 0;
}
