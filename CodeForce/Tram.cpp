/*
Question : 
Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's movement. At the i-th stop ai 
passengers exit the tram, while bi passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives 
at the last stop, all passengers exit so that it becomes empty.
Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity.
Note that at each stop all exiting passengers exit before any entering passenger enters the tram.
Input : The first line contains a single number n (2 ≤ n ≤ 1000) — the number of the tram's stops.
        Then n lines follow, each contains two integers ai and bi (0 ≤ ai, bi ≤ 1000) — the number of passengers that exits the tram at 
        the i-th stop, and the number of passengers that enter the tram at the i-th stop. The stops are given from the first to the last 
        stop in the order of tram's movement.
        The number of people who exit at a given stop does not exceed the total number of people in the tram immediately before it arrives 
        at the stop. More formally, . This particularly means that a1 = 0.At the last stop, all the passengers exit the tram and it 
        becomes empty. More formally, .No passenger will enter the train at the last stop. That is, bn = 0. 

Output  : Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).

Examples
Input
4
0 3
2 5
4 2
4 0
Output
6

Note

For the first example, a capacity of 6 is sufficient:
    At the first stop, the number of passengers inside the tram before arriving is 0. Then, 3 passengers enter the tram, and the number of 
    passengers inside the tram becomes 3.At the second stop, 2 passengers exit the tram (1 passenger remains inside). Then, 5 passengers 
    enter the tram. There are 6 passengers inside the tram now.At the third stop, 4 passengers exit the tram (2 passengers remain inside). 
    Then, 2 passengers enter the tram. There are 4 passengers inside the tram now.Finally, all the remaining passengers inside the tram 
    exit the tram at the last stop. There are no passenger inside the tram now, which is in line with the constraints. Since the number of 
    passengers inside the tram never exceeds 6, a capacity of 6 is sufficient. Furthermore it is not possible for the tram to have a capacity 
    less than 6. Hence, 6 is the correct answer.
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
    int a,b,count = 0,curr = 0;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        curr = curr - a;
        curr = curr + b;
        if(curr > count){
            count = curr;
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