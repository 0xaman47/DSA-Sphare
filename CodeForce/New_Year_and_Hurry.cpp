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
    int w,min,count=0, work =0, res =0;
    cin>>w>>min;
    res = 240 - min;
    for(int i = 1; i <= w; i++){
        work += 5 * i;
        if(work <= res){
            count++;
        }
          
    }
    cout<<count;
}

int main(){

int t = 1;
//cin >> t;
while(t--){
 fun();
}

return 0;
}