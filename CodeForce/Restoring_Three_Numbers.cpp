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
    int n = 4;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+4);
    cout<<arr[3] - arr[0]<<" ";
    cout<<arr[3] - arr[1]<<" ";
    cout<<arr[3] - arr[2];
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}