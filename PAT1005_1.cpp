#include <iostream>
#include <cstdio>
#include <string>
int main()
{
    using namespace std;
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < a.length(); i++) {
        sum += (a[i] - '0');
    }
    string s = to_string(sum);
    string name[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << name[s[0] - '0'];
    for (int i = 1; i < s.length(); i++) {
        cout << " " << name[s[i] - '0'];
    }
    return 0;
}
