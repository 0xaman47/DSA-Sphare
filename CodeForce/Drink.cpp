/*
Question : 
*/

/*
Solution
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include <iomanip>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

void fun(){
    double n;
    cin>>n;
    vector<double> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    sum = sum / n;
    cout << fixed << setprecision(12) << sum << endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}