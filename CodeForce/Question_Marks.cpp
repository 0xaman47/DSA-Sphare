/*
Question : 
Tim is doing a test consisting of 4n questions; each question has 4 options: 'A', 'B', 'C', and 'D'. For each option,
there are exactly n correct answers corresponding to that option — meaning there are n questions with the answer 'A',
n questions with the answer 'B', n questions with the answer 'C', and n questions with the answer 'D'.
For each question, Tim wrote his answer on the answer sheet. If he could not figure out the answer, he would leave a
question mark '?' for that question.
You are given his answer sheet of 4n characters. What is the maximum number of correct answers Tim can get?
Input : The first line contains a single integer t (1≤t≤1000) — the number of test cases.
        The first line of each test case contains an integer n(1≤n≤100).
        The second line of each test case contains a string s of 4n characters (si∈{A,B,C,D,?}) — Tim's answers for 
        the questions.

Output : For each test case, print a single integer — the maximum score that Tim can achieve.
Example :
Input :
6
1
ABCD
2
AAAAAAAA
2
AAAABBBB
2
????????
3
ABCABCABCABC
5
ACADC??ACAC?DCAABC?C

Output :
4
2
4
0
9
13

Note
- In the first test case, there is exactly one question with each answer 'A', 'B', 'C', and 'D'; so it's possible 
that Tim gets all his answers correct. 
- In the second test case, there are only two correct answers 'A' which makes him get exactly 2 points in any case.
- In the third test case, Tim can get at most 2 correct answers with option 'A' and 2 correct answers with option 'B'.
For example, he would get 4 points if the answers were 'AACCBBDD'.
- In the fourth test case, he refuses to answer any question at all, which makes him get 0 points.
*/

/*
Solution :
we have 4n question and each question have 4 option 'A', 'B', 'C', 'D'and each option have n correct answer that 
means if we have 4 input ABCA in 4n question here n = 1, than correct answer is 3 ABC and A is rept once more so ignore 
Extra string. and if there have have question marks than leave question marks because value of question marks is 0,

*/

#include<bits/stdc++.h>
#include<string>
#include<algorithm>
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
    string s;
    cin>>s;

    int A = count(s.begin(),s.end(),'A');
    int B = count(s.begin(),s.end(),'B');
    int C = count(s.begin(),s.end(),'C');
    int D = count(s.begin(),s.end(),'D');
    int Q = count(s.begin(),s.end(),'?');

    int reqA = max(0, n - A);
    int reqB = max(0, n - B);
    int reqC = max(0, n - C);
    int reqD = max(0, n - D);

    int totReq = reqA + reqB + reqC + reqD;

    int totMax = 4 * n - max(0, totReq - Q);

    cout<<totMax - Q<<endl;

}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}