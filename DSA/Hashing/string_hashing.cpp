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

}

int main(){
    string str;
    cin>>str;
    int n = str.size();
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[str[i]]++;
    }

    for(auto x : mp) cout<<x.second<<endl;

    /*int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mp[ch]<<" ";
    }*/
return 0;
}