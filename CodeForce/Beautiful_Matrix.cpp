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
    int arr[5][5];
    int posRow = -1, posCol = -1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                posRow = i + 1;
                posCol = j + 1;
            }
        }
    }
    int targetRow = 3;
    int targetCol = 3;
    int countRow = abs(posRow - targetRow);
    int countCol = abs(posCol - targetCol);
    cout<<countRow + countCol;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}