/*
    select and swap
    like : 13 46 24 52 20 9
    step1: 9 46 24 52 20 13     // 13 swap with 9 because 1st smallest element is 9
    step2: 9 13 24 52 20 46    // 46 swap with 13 because 2nd smallest element is 13
    step3: 9 13 20 52 24 46    // 24 swap with 20 because 3rd smallest element is 20
    step4: 9 13 20 24 52 46    // 52 swap with 24 because 4th smallest element is 24
    step5: 9 13 20 24 46 52    // 52 swap with 46 because 5th smallest element is 46 

    swaping pattern take (i because it goes n - 2 time because 5 index is n - 2 and j goes to n - 1 because 6 index 
                          is n - 1)
    swap at index 0, & min index[0 -> n-1]
    swap at index 1, & min index[1 -> n-2]
    swap at index 2, & min index[2 -> n-3]
    swap at index 3, & min index[3 -> n-4]
    swap at index 4, & min index[4 -> n-5]
    swap at index 5, & min index[5 -> n-6]
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
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i <= n - 2; i++){
        int min = i;
        // 13 46 24 52 20 9
        for(int j = i + 1; j <= n - 1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
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