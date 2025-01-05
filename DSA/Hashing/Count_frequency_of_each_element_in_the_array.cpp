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

int main(){

   int n;
   cin>>n;
   vector<int> vct(n);
   for(int i = 0; i < n; i++) cin>>vct[i];

   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[vct[i]]++;

   for(auto x : mp){
      cout<<x.first<<" "<<x.second<<endl;
   }

  /* int q;
   cin>>q;
   while(q--){
        int num;
        cin>>num;
        cout<<mp[num]<<" ";
   }*/

return 0;
}