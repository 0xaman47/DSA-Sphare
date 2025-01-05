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
   vector<int> arr(n);
   for(int i = 0; i < n; i++) cin>>arr[i];

   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[arr[i]]++;     //1 2 3 1 2

   int maxfreq = 0, minfreq = n;
   int maxEle = 0, minEle = 0;

   for(auto x : mp){
        int count = x.second;
        int element = x.first;

        if(count > maxfreq){
            maxEle = element;
            maxfreq = count;
        }
        if(count < minfreq){
            minEle = element;
            minfreq = count;
        }
   }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";

return 0;
}