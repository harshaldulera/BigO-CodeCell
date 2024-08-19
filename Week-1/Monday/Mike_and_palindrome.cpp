#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            count++;
        }
    }
    if (count == 1 || (count == 0 && n % 2 == 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}