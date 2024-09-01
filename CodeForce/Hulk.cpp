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
    string str = "";
    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
            str = str + "I love";
        }
        else{
            str = str + "I hate";
        }
        if(i < n){
            str = str + " that ";
        }
        else{
            str = str + " it";
        }
    }
    cout<<str<<endl;
    
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}