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
    int check = n;
    int num = 0;
    while(n > 0){
        int mod = n % 10;
        num = (num * 10) + mod;
        n = n / 10;
    }
    if(check == num){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}

int main(){

   int t = 2;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}