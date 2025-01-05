/*
Question : 
5
    *    
   ***
  *****
 *******
*********
space = n - i - 1
star = 2 * i - 1
*/

/*
Solution
*/

#include<bits/stdc++.h>
using namespace std;
 
void fun(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        //space
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2  * i + 1; j++){
            cout<<"*";
        }
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        cout<<endl;
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