/*
Question : 
You are given two integers a and b (a≤b). Over all possible integer values of c (a≤c≤b), find the minimum value of (c−a)+(b−c).
Input : The first line contains t(1≤t≤55) — the number of test cases.
        Each test case contains two integers a and b (1≤a≤b≤10).

Output : For each test case, output the minimum possible value of (c−a)+(b−c) on a new line.

Example
Input
3
1 2
3 10
5 5

Output
1
7
0

Note

In the first test case, you can choose c=1 and obtain an answer of (1−1)+(2−1)=1. It can be shown this is the minimum value possible.

In the second test case, you can choose c=6 and obtain an answer of (6−3)+(10−6)=7. It can be shown this is the minimum value possible.
*/

/*
Solution : 
In this question we can take two input a and b. and a is always a <= b. and c is always a <= c <= b. that mens c is (a+b)/2. 
when we find c then simply apply formula (c -  a) + (b - c). then find minimal output.
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
    int a,b;
    cin>>a>>b;
    if(a <= b){
        int c = (a + b)/ 2;
        int ans = (c - a) + (b - c);
        cout<<ans<<endl;
    }
}

int main(){

   int t = 1;
   cin >> t;
   while(t--){
    fun();
   }

return 0;
}