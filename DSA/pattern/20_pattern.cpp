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
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        for(int j = 0; j < (2 * n) - ((2 * i) + 2); j++){
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            cout<<"*";
        }
        for(int j = 0; j < (2 * i) + 2; j++){
            cout<<" ";
        }
        for(int j = 0; j < n - 1 - i; j++){     //2 4 6 8
            cout<<"*";
        }
        cout<<endl;
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