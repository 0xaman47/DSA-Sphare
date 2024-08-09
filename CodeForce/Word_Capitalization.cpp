/*
Question : 
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.
Note, that during capitalization all the letters except the first one remains unchanged.
Input : A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will 
not exceed 103.
Output : Output the given word after capitalization.
Examples

Input
ApPLe
Output
ApPLe

Input
konjac
Output
Konjac
*/

/*
Solution :
in this question we have a string and our works is if first letter is lowercase then we can convert in uppercase but only first letter 
other letter is as it dont need to change other letter. if first letter is upper case then don't need to change it.
in this question at first i take input string 
then create another char variable and store first letter of string in char then compere it at the end print string.
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
    string str;
    cin>>str;
    char Ch = str[0];

    // Check if the first character is a lowercase letter
    if (Ch >= 'a' && Ch <= 'z') {
        // Convert to uppercase by adjusting ASCII value
        str[0] = Ch - ('a' - 'A');
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