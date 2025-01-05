/*
Question : 
*********
 *******
  *****
   ***
    *
space = i
star = 2*n - 2*i - 1
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
/* 
void fun(){
    int n; 
    cin>>n;
    for(int i  = n; i > 0; i--){
        //space
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        //star
        for(int j = 0; j < 2 * i - 1; j++){
            cout<<"*";
        }
        //space
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
}*/

void fun(){
    int n; 
    cin>>n;
    /*for(int i  = 0; i < n; i++){
        //space
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        //star
        for(int j = 0; j < (2 * n) - (2 * i) - 1; j++){
            cout<<"*";
        }
        //space
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }*/

   for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < (2 * n) - (2 * i + 1); j++){
            cout<<"*";
        }
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
   }
   
}

int main(){

   int t = 1;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}