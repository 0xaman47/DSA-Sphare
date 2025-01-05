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
 
//factorial
/*void fun(){
    int n1,n2;
    cin>>n1>>n2;
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl; 
    for (int i = 1; i <= n2; i++) {
        if (n2 % i == 0) {
            cout << i << " ";
        }
    }
}*/

void fun(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd = 0;
    for(int i = 1; i <= min(n1,n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }

    }
    cout<<gcd<<endl;
}

int main(){

   int t = 1;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}