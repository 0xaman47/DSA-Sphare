/*
Question : 
During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.
Input

The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".
Output

Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".
Examples
Input
Copy

5 1
BGGBG

Output
Copy

GBGGB

Input
Copy

5 2
BGGBG

Output
Copy

GGBGB

Input
Copy

4 1
GGGB

Output
Copy

GGGB


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

void iterate(string& arr,int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Swap 'B' with 'G' if 'B' precedes 'G'
        if (arr[i] == 'B' && arr[i + 1] == 'G') {
            // Swap the characters
            swap(arr[i], arr[i + 1]);
            // Move the index forward to avoid rechecking swapped characters
            i++;
        }
    }
}

void fun(){
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    for(int i = 1; i <= m; i++){
        iterate(str,n);
    }
    cout<<str;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}