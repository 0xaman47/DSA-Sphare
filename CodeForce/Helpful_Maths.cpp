/*
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition 
operation.
The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation 
easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count,
so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate 
sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.
You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia 
can calculate the sum.
Input : The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. 
It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is 
at most 100 characters long.
Output : Print the new sum that Xenia can count.
Examples :
Input :
3+2+1
Output
1+2+3

Input
1+1+3+1+3
Output
1+1+1+3+3

Input
2
Output
2
*/

/*
Solution : 
in this we have a string value that have random order simple we need to arrange is acceding order.
ex : 1+4+2+5 -> 1+2+4+5
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

void fun(){
    string str;
    cin>>str;
    vector<int> numbers;
    string temp;
    
    // Use a string stream to parse numbers from the string
    istringstream ss(str);
    while (getline(ss, temp, '+')) {
        numbers.push_back(stoi(temp));
    }
    
    // Sort the numbers
    sort(numbers.begin(), numbers.end());
    
    // Output the sorted numbers with '+' in between
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            cout << "+";
        }
        cout << numbers[i];
    }
}

int main(){

    int t = 1; 
    while(t--){
     fun();
    }

  return 0;
}

