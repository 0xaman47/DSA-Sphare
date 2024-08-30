/*
Question : 
George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.
Input

The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.

The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.
Output

Print a single integer — the number of rooms where George and Alex can move in.
Examples
Input
Copy

3
1 1
2 2
3 3

Output
Copy

0

Input
Copy

3
1 10
0 10
10 10

Output
Copy

2
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
    int a,b,count = 0;;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        a = a + 1;
        if(a < b){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}