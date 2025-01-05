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
 
int fun(int i, int n){
    if(i > n) return 0;
    cout<<i<<" ";
    fun(i+1,n);
    return 1;
}

int main(){
    int n;
    cin>>n;
    fun(1, n);
return 0;
}