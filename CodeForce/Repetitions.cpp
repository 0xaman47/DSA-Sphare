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
    string str;
    cin>>str;
    int count = 1, maxlength = 1;
    int len = str.length();
    for(int i = 0; i < len; i++){
        if(str[i] == str[i - 1]){
            count++;
        }
        else{
             maxlength = max(maxlength, count);
             count = 1;
        }
    }
    maxlength = max(maxlength, count);
    cout<<maxlength;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}
