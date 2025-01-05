/*#include <bits/stdc++.h>
using namespace std;

void print() {
    vector<int> v;    // Dynamic in nature(size is not fix) -> empty container
    v.push_back(1);  // Add value
    v.emplace_back(1, 2); // faster than push back
    //v.push_back({1,2})  // using curly bracket
    v.emplace_back(1, 2); // without using curly bracket
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
   // vector<pair<int, int>> vec;

}

int main() {
    int a;
    print();
}*/

#include <bits/stdc++.h>
using namespace std;

void print() {
    // Using vector<int> to store single integers
    vector<int> v;
    v.push_back(1);    // Add single value 1
    v.push_back(2);    // Add single value 2

    //v.erase(v.begin()+1);
    v.erase(v.begin(), v.begin()+2);

    // Print elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // If you want to use a vector of pairs, use vector<pair<int, int>>
    vector<pair<int, int>> vec;
    vec.emplace_back(1, 2);  // Add a pair (1, 2)
    vec.emplace_back(3, 4);  // Add another pair (3, 4)
    vec.insert(vec.begin(), {300, 300});

    cout<<vec.size();

    // Insert two pairs at the second position
    vec.insert(vec.begin() + 2, 5, {30, 30});  // Insert two pairs (30, 30)

    // Print elements of the vector of pairs
    for (auto &p : vec) {
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    print();
    return 0;
}

