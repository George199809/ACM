#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> words;
map<string, int> cnt;
vector<string> ans;
string repr(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());

    return s;
}
int main() {
	string s;
    while(cin >> s) {
        if(s == "#") break;
        words.push_back(s);
        if(!cnt.count(repr(s))) cnt[repr(s)] = 0;
        cnt[repr(s)]++;
    }
    for(vector<string>::iterator it = words.begin(); it != words.end(); it++) {
        if(cnt[repr(*it)] == 1) ans.push_back(*it);
    }
    sort(ans.begin(), ans.end());

    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++)
        cout << *it << endl;

    return 0;
}