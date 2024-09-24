/*
Question : 
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

void fun(){
    string str;
    cin>>str;
    if (str.length() >= 3 && 
        (tolower(str[0]) == 'y') && 
        (tolower(str[1]) == 'e') && 
        (tolower(str[2]) == 's')) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}