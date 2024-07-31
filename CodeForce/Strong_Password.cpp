#include <bits/stdc++.h>
using namespace std;

int compute_time(const string &s) {
    int n = s.size();
    if (n == 0) return 0;
    int time = 2;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

string insert_max_chr(const string &s) {
    string str = s;
    int max_time = compute_time(s);
    
    // Loop through all positions for insertion
    for (int i = 0; i <= s.size(); ++i) {
        // Try inserting each character from 'a' to 'z'
        for (char c = 'a'; c <= 'z'; ++c) {
            // Create new string by inserting character c at position i
            string new_s = s.substr(0, i) + c + s.substr(i);
            int new_time = compute_time(new_s);
            if (new_time > max_time) {
                max_time = new_time;
                str = new_s;
            }
        }
    }
    return str;
}

int main() {
    int t;
    cin >> t;
    vector<string> result;
    while (t--) {
        string s;
        cin >> s;
        result.push_back(insert_max_chr(s));
    }
    for (const string &res : result) {
        cout << res << endl;
    }
    return 0;
}
