/*
Question : 
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces
of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the 
board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.
Input

In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).
Output

Output one number — the maximal number of dominoes, which can be placed.

Examples
Input
2 4

Output
4

Input
3 3

Output
4
*/

/*
    Solution : 
    we have a rectangle size m X n 
    we have Domino polling size 2 X 1
    our works is feet domino polling in rectangle
    like  Rectangle     Domino polling : 2 X 1
        n = 3              2
         |---|         1 |--|
m = 3    |---|
         |---|
    so we feet domino polling first three vertical line and last one in horizontal
    Ex : 
          n = 3
         |__I|
m = 3    |__I|
         |__I|
    Here '__' denote vertical domino polling and 'I' denote vertical domino polling
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    float m,n;
    cin>>m>>n;
    n = (n/2)*m;
    cout<<floor(n);
  return 0;
}