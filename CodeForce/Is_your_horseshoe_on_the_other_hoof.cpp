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
     int n=4,c=0,dif=0;
    long long int a[15];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
        if(a[i]!=a[i+1])
            c++;

    cout<<n-c<<endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}