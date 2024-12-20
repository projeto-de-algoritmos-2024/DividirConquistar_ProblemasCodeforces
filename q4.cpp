//author: Natan Almeida
//B. Equivalent Strings
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define so(x) sort(x.begin(), x.end())
#define rso(x) sort(x.rbegin(), x.rend())

string smallest(string s) {
    if (s.length() % 2 == 1) return s;
    string s1 = smallest(s.substr(0, s.length()/2));
    string s2 = smallest(s.substr((s.length()/2), s.length()/2));
    if (s1 < s2) return s1 + s2;
    else return s2 + s1;
}

int main() { _
    string s1, s2; cin >> s1 >> s2;
    if(s1 == s2) return cout << "YES" << endl, 0;

    cout << (smallest(s1) == smallest(s2) ? "YES" : "NO") << endl;
    return 0;
}