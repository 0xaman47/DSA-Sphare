/*
Question : 
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is 
transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its 
representation in Borze alphabet.

Input : The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's 
        guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output : Output the decoded ternary number. It can have leading zeroes.
Examples

Input
.-.--
Output
012

Input
--.
Output
20

Input
-..-.--
Output
1012
*/

/*
Solution : In this question we have a ternary numeric notation. we need to convert in numeric form like 
           "0" = «.», "1" = «-.» and "2" = «--». and give output in numeric character.
            Ex : .-.-- = 012  (. = 0, -. = 1, -- = 2)

            Strategy : Take input as a string using loop to initalized and iterate with length of string.
                       after that using notation to convert in numeric form help of if condition. 

*/

#include<iostream>
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
    string str,s;
    cin>>str;
    int len = str.length();
    for(int  i = 0; i < len; i++){
        if(str[i] == '.'){
            s += '0';
        }
        if(str[i] == '-' && str[i + 1] == '.'){
            s += '1';
            i++;
        }
        if(str[i] == '-' && str[i + 1] == '-'){
            s += '2';
            i++;
        }
    }
    cout<<s;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}