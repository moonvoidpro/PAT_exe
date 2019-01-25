/*反片语
输入一些单词，找出所有满足如下条件的单词：该单词不能通过字母重排，得到输入文本中的另外一个单词。
在判断是否满足条件时，字母不分大小写，但在输入时应保留输入中的大小写，按字典序进行排列（所有大写字母在小写字母的前面）
样例输入：
ladder came tape soon leader acme RIDE lone Dreis peat
ScAlE orb eye Rides dealer NotE derail LaCeS drIed
noel dire Disk mace Rob dries
*/
#include <iostream>
#include <map>
#include <set>
#include <cctype>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

map<string, int> mapp;
vector<string> words;

//initialize the strings
string standard(const string &s)
{
    string t = s;
    for(int i = 0; i < t.length(); i++) {
        t[i] = tolower(t[i]); //turn to lower case
    }
    sort(t.begin(), t.end()); //turn the string to a particular serial number
    return t;
}

int main()
{
    string s;
    while (cin >> s) {
        if (s[0] == '#')
            break;
        words.push_back(s);
        string r = standard(s);
        if (!mapp.count(r))
            mapp[r] = 0;
        mapp[r]++;
    }
    vector<string> ans;
    for (int i = 0; i < words.size(); i++) {
        if (mapp[standard(words[i])] == 1) // if the number which string points only count once
                                           //it cannot be reused
            ans.push_back(words[i]);        //record the words to print
    }
    sort(ans.begin(), ans.end()); //output as the dict order
    for (int i = 0; i< ans.size(); i++) { //output
        cout << ans[i] << endl;
    }
    return 0;
}
