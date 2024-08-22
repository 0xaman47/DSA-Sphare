/*
Question : 
*/

/*
Solution
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<set>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

void removeConsecutiveDuplicates(const int* inputArray, int inputSize, int* resultArray, int& resultSize) {
    if (inputSize == 0) {
        resultSize = 0;
        return;
    }

    resultArray[0] = inputArray[0];
    resultSize = 1;

    for (int i = 1; i < inputSize; ++i) {
        if (inputArray[i] != inputArray[i - 1]) {
            resultArray[resultSize++] = inputArray[i];
        }
    }
}

void fun(){
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int resultArray[n];
    int resultSize;

    removeConsecutiveDuplicates(arr, n, resultArray, resultSize);
    for (int i = 1; i <= resultSize; ++i) {
        count = i;
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

