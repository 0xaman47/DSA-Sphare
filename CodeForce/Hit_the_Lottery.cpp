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
    int count = 0;
    count += n / 100;
    n %= 100;
    
    // Count number of 20 denomination notes
    count += n / 20;
    n %= 20;
    
    // Count number of 10 denomination notes
    count += n / 10;
    n %= 10;
    
    // Count number of 5 denomination notes
    count += n / 5;
    n %= 5;
    
    // Count number of 1 denomination notes
    count += n / 1;  // This is redundant but included for completeness

    cout << count << endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}