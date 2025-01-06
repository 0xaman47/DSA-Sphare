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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    // 1 1 0 1 1 1 0
    int count = 0,break_count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        break_count = max(break_count, count);
    }
    cout<<break_count;
}

int main(){

   int t = 1;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}