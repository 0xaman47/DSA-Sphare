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
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

int main(){

   int t = 3;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}