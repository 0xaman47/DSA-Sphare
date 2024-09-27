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
    int n,k;
    cin>>n>>k;
    int part[n];
    int Team=0;
    for(int i=0;i<n;i++)
    {
        cin>>part[i];
        if(5-part[i]>=k)
        Team++;
    }
    cout<<Team/3<<endl;
}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}