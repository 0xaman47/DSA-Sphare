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
 
void rotate(vector<int> &nums, int k, int n){
        k %= n;
        //1 2 3 4 5
        /*vector<int> temp(k);
        for(int i = 0; i < k; i++){
            temp[i] = nums[n - k + i];
        }

        for(int i = n - 1; i >= k; i--){
            nums[i] = nums[i - k];
        }
        
        /*int k = 0;
        for(int i = 0; i < n; i++){
            arr[i] = temp[k];
            k++;
        }

        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }*/
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+k%n);
        reverse(nums.begin()+k%n, nums.end());

}

void fun(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int k;
    for(int i = 0; i < n; i++) cin>>nums[i];
    cin>>k;

    rotate(nums, k, n);
    
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
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