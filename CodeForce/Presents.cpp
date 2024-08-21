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

void sortAndPrintIndices(int arr[], int n) {
    // Array to store indices
    int indices[n];
    for (int i = 0; i < n; ++i) {
        indices[i] = i + 1; // Store 1-based indices
    }

    // Sort indices based on the values in the array
    // Using a lambda function to compare elements based on array values
    sort(indices, indices + n, [&](int i1, int i2) {
        return arr[i1 - 1] < arr[i2 - 1];
    });

    // Print the indices
    for (int i = 0; i < n; ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;
}

void fun(){
    int n;
    cin >> n; // Read the number of elements
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read the array elements
    }

    sortAndPrintIndices(arr, n);
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}
