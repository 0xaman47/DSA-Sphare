/*
Question : 
*/

/*
Solution :
        Merge Short :
    Explanation :
    Divide & Merge
    Ex: [3, 1, 2, 4, 1, 5, 2, 6, 4]
        [3, 1, 2, 4, 1,|| 5, 2, 6, 4]       divide into sub array
        [3, 1, 2, 4, 1] | [5, 2, 6, 4]
        [3, 1, 2] [4, 1] |[5, 2] [6, 4]
        [3, 1][2] [4][1] |[5][2] [6][4]
        [3][1]           |                  Devide completed
        [1, 3]                              Merge
        [1, 2, 3] [1,4]  |[2, 5] [4, 6]
        [1, 1, 2, 3, 4]  |[2, 4, 5, 6]
        [1, 1, 2, 2, 3, 4, 4, 5, 6]         Merge completed

    Psudocode :
        note : at first we devide then merge it is like kinds of recursion
        play arround index:
        low = 0, high = n - 1;
        mid = (low + high) / 2;
     when we devide array it will two part half first is called mid and half second is called mid+1.
        merge(arr,low,mid);         // merge half first
        merge(arr,mid+1, high);     // merge half second

        merge(arr,low,mid,high);    // merge half first and half second

        it all case is called recursion because it is called it self so we need base case:
        base case: if(low >= high) return; because like low and high is same then dont need to swap like 1, 1
        so here don't need to swap it is already shorted.

        merge : 
        temp[];
        left = low, right = mid+1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.add(arr[left]);
                left++;
            }
            else{
                temp.add(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.add(arr[left]);
            left++;
        }
        while(right <= high){
            temp.add(arr[right]);
            right++;
        }

*/

#include<iostream>
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

void merge(vector<int> &arr, int high, int low, int mid){
    int left = low; 
    int right = mid + 1;
    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}
 
void ms(vector<int> &arr, int low, int high){
    int mid = (low + high) / 2;
    if(low == high) return;

    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, high, low, mid);
}

void fun(){
    int n = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    ms(arr, 0 ,n - 1);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
}

int main(){

   int t = 1;
   //cin >> t;
   while(t--){
    fun();
   }

return 0;
}