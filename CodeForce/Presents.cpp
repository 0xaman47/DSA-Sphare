/*
Question : 
Little Petya very much likes gifts. Recently he has received a new laptop as a New Year gift from his mother.
He immediately decided to give it to somebody else as what can be more pleasant than giving somebody gifts. 
And on this occasion he organized a New Year party at his place and invited n his friends there.
If there's one thing Petya likes more that receiving gifts, that's watching others giving gifts to somebody 
else. Thus, he safely hid the laptop until the next New Year and made up his mind to watch his friends 
exchanging gifts while he does not participate in the process. He numbered all his friends with integers from 
1 to n. Petya remembered that a friend number i gave a gift to a friend number pi. He also remembered that 
each of his friends received exactly one gift.
Now Petya wants to know for each friend i the number of a friend who has given him a gift.
Input : The first line contains one integer n (1 ≤ n ≤ 100) — the quantity of friends Petya invited to the 
        party. The second line contains n space-separated integers: the i-th number is pi — the number of a friend who gave a gift to friend number i. It is guaranteed that each friend received exactly one gift. It is possible that some friends do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.
Output : Print n space-separated integers: the i-th number should equal the number of the friend who gave a 
         gift to friend number i.
Examples
Input
4
2 3 4 1
Output
4 1 2 3

Input
3
1 3 2
Output
1 3 2

Input
2
1 2
Output
1 2
*/

/*
Solution :
in this question Little Petya is a boy. he love to exchange gift. in this question he organize a party and exchange gift. every one atleast
exchange one gift. ex: like 4 person give gift  2, 3, 4, 1. after that same 4 person take gift.
according to question at first store in array [2, 3, 4, 1] index is 1,2,3,4 so 1st take gift 4th person because index value is 4 of 1st 
person. 2nd person take gift 1st person. 3rd person take gift 2nd person. and 4th person take gift 3rd person.
ex : [2, 3, 4, 1]  sort but index not change [1, 2, 3, 4]
i =   1  2  3  4                         i =  4  1  2  3 so this one is answer.

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

void sortAndPrintIndices(int arr[], int n) {
    // Array to store indices
    int indices[n];
    for (int i = 0; i < n; ++i) {
        indices[i] = i + 1; // Store 1-based indices
    }

    // Sort indices based on the values in the array
    // Using a lambda function to compare elements based on array values
    sort(indices, indices + n, [&](int i1, int i2) {
        return arr[i1 - 1] < arr[i2 - 1];
    });

    // Print the indices
    for (int i = 0; i < n; ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;
}

void fun(){
    int n;
    cin >> n; // Read the number of elements
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read the array elements
    }

    sortAndPrintIndices(arr, n);
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}
