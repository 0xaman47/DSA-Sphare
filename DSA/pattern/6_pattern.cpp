/*
Question : 
12345
1234
123
12
1
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
    for(int i = n; i >= 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<j;
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