//pat1092 --hash table
#include <iostream>
#include <string>
int book[256];
int main()
{
    using namespace std;
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++) {
        book[a[i]]++;
    }
    int result = 0;
    for(int i = 0; i < b.length(); i++) {
        if(book[b[i]] > 0)
            book[b[i]]--;
        else
            result ++;
    }
    if(result != 0)
        printf("No %d", result);
    else
        printf("Yes %d", a.length() - b.length());
    return 0;
}
