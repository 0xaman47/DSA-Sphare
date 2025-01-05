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
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            for(int j = 1; j <= i; j++){
                if(j % 2 == 0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            for(int j = 1; j <= i; j++){
                if(j % 2 == 0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
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