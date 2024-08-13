/*
Question : 
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and 
lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an 
uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
Input : Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that 
        the strings are of the same length and also consist of uppercase and lowercase Latin letters.
Output : If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the 
        strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples :
Input
aaaa
aaaA
Output
0

Input
abs
Abz
Output
-1

Input
abcdefg
AbCdEfF
Output
1
Note : If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order")
*/

/*
Solution : 
in this question we have 2 string length of two string is same find which string is greater if str1 is greater than str2 then print 1,
else if str1 is less then str2 then print -1, else print 0;
note : Letter must be dictionary order or alphabetical order.
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

string lowFun(const string& str){
    string lowStr = str;
    for (char c : str) {
        transform(lowStr.begin(),lowStr.end(),lowStr.begin(), :: tolower);
    }
    return lowStr;
}
void fun(){
    string str1,str2;
    cin>>str1>>str2;
    string lowCase1 = lowFun(str1);
    string lowCase2 = lowFun(str2);
    if(lowCase1 < lowCase2){
        cout<<-1;
    }
    else if(lowCase1 == lowCase2){
        cout<<0;
    }
    else{
        cout<<1;
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


