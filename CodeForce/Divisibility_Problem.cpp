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
    int a,b;
    cin>>a>>b;
    if(a < b){
        int c = b - a;
        cout<<c<<endl;
    }
    else{
        if(a % b == 0){
            cout<<0<<endl;
        }
        else{
            int c = a / b;
            c = c + 1;
            b = b * c;
            b = b - a;
            cout<<b<<endl;
        }
        
    }
}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}

