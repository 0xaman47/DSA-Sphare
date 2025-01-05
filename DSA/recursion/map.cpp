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
   int arr[n];
   for(int i = 0; i < n; i++){
        cin>>arr[i];
   }
   map<int, int> mp;
   for(int i = 0; i < n; i++){
        mp[arr[i]]++;
   }
   int q;
   cin>>q;
   while(q--){
        int number;
        cin>>number;
        cout<<mp[number]<<" ";
   }

return 0;
}