#include<iostream>
using namespace std;

int fun(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
       if(n % 2 == 0){
        for(int i = 1; i <= n/2;++i){
           int val[i]; 
           val[i] = n/(n/2);
           cout<<val[i]<<" ";
        }
       }

       else{
           for(int i = 1; i <n/2;++i){
           int val[i]; 
           val[i] = n/(n/2);
           cout<<val[i]<<" ";
        }
        cout<<3;
       }
    return 0;
}

int main(){
  
    int t = 1; 
    while(t--){
     fun();
    }

  return 0;
}