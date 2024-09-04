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
    int k,l,m,n,o;
    int count = 0;
    cin>>k>>l>>m>>o>>n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        arr[i] = i;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] % k == 0 || arr[i] % l == 0|| arr[i] % m == 0||arr[i] % o == 0){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}