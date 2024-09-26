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
    int a,b,c,d,ans = 0;
    string str;
    cin>>a>>b>>c>>d;
    cin>>str;
    int length = str.length();
    for(int i = 0; i < length; i++){
        if(str[i] == '1'){
            ans = ans + a;
        }
        else if(str[i] == '2'){
            ans = ans + b;
        }
        else if(str[i] == '3'){
            ans = ans + c;
        }
        else if(str[i] == '4'){
            ans = ans + d;
        }
    }
    cout<<ans;
}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}