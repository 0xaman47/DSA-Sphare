/*
Question : 
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to 
invent an extension for his favorite browser that would change the letters' register in every word so that it either only 
consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be 
changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word 
contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. 
For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

Input : The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length 
from 1 to 100.
Output : Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the 
uppercase register, otherwise - in the lowercase one.

Examples
Input
HoUse
Output
house

Input
ViP
Output
VIP

Input
maTRIx
Output
matrix


*/

/*
Solution : 
in this question we have a word find if lowercase is greater than equal to uppercase then convert hole letter in lowercase
else convert in uppercase.
my salutation is : at first count lowercase and uppercase then if lowercase >= uppercase : print hole string in lowercase
                   else print hole string in uppercase.
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

void fun(){
    string str;
    cin>>str;
    int lowCount = 0, upeCount = 0;
    for(char ch : str){
        if(islower(ch)){
            lowCount++;
        }
        else{
            upeCount++;
        }
    }
    
    if(lowCount >= upeCount){
        for (char& ch : str){
            if (ch >= 'A' && ch <= 'Z'){
                ch = ch + 32;
            }
        }
    }
    else{
        for(char& ch : str){
            if(ch >= 'a' && ch <= 'z'){
                ch = ch - 32;
            }
        }
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
