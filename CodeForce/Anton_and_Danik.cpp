#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a = 0, b = 0;
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    if(n == str.size()){
        for(char c : str){
            if(c == 'A'){
                a++;
            }
            if(c == 'D'){
                b++;
            }
        }
        if(a > b){
            cout<<"Anton";
        }
        else if(a < b){
            cout<<"Danik";
        }
        else{
            cout<<"Friendship";
        }
    }
}
