/*
Question : 
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to 
bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two 
following transformations to the matrix:
    Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
    Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5). 
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the 
intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input : The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the 
        element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix 
        consists of 24 zeroes and a single number one.
Output : Print a single integer — the minimum number of moves needed to make the matrix beautiful.
Examples
Input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3

Input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
1

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