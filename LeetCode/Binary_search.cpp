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

    int target;
    cin>>target;

    int low = 0, high = n - 1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
            cout<<mid;
            break;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
    }
}

int main(){

   int t = 1;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}