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

int fun(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
       if(n % 2 == 0){
        for(int i = 1; i <= n/2;++i){
           int val[i]; 
           val[i] = n/(n/2);
           cout<<val[i]<<" ";
        }
       }

       else{
           for(int i = 1; i <n/2;++i){
           int val[i]; 
           val[i] = n/(n/2);
           cout<<val[i]<<" ";
        }
        cout<<3;
       }
    return 0;
}

int main(){
  
    int t = 1; 
    while(t--){
     fun();
    }

  return 0;
}