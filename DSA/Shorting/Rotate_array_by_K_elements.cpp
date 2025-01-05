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
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int d;
    cin>>d;
    if(d >= n){
        d %= n;
    }

    int temp[d];
    for(int i = 0; i <= d; i++){
        temp[i] = arr[i];
    }

    for(int i = d; i < n; i++){
        arr[i - d] = arr[i];
    }
    /*int k = 0;
    for(int i = 0; i < n; i++){
        arr[i] = temp[k];
        k++;
    }*/

    for(int i = n - d; i < n; i++){
        arr[i] = temp[i - (n - d)];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
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