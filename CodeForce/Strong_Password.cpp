/*
Question :
Monocarp's current password on Codeforces is a string s, consisting of lowercase Latin letters. Monocarp 
thinks that his current password is too weak, so he wants to insert exactly one lowercase Latin letter 
into the password to make it stronger. Monocarp can choose any letter and insert it anywhere, even before 
the first character or after the last character.
Monocarp thinks that the password's strength is proportional to the time it takes him to type the password. 
The time it takes to type the password is calculated as follows: the time to type the first character is 
2 seconds;
for each character other than the first, the time it takes to type it is 1 second if it is the same as the
previous character, or 2 seconds otherwise. 

For example, the time it takes to type the password abacaba is 14; the time it takes to type the password
a is 2; the time it takes to type the password aaabacc is 11.

You have to help Monocarp — insert a lowercase Latin letter into his password so that the resulting 
password takes the maximum possible amount of time to type.

Input : The first line contains one integer t(1≤t≤1000) — the number of test cases.
Each test case consists of one line containing the string s(1≤|s|≤10), consisting of lowercase Latin 
letters.

Output : For each test case, print one line containing the new password — a string which can be obtained 
from s by inserting one lowercase Latin letter. The string you print should have the maximum possible 
required time to type it. If there are multiple answers, print any of them.

Example
Input
4
a
aaa
abb
password

Output
wa
aada
abcb
pastsword

*/

/*
Solution
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

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
