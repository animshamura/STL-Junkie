#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    vector<char> vec;
 
    for (int i = 1; i <= 6; i++) vec.push_back(char(65+i));
 
    cout << "Output of begin and end : ";
    for (auto i = vec.begin(); i != vec.end(); ++i) cout << *i << " ";
 
    cout << "\nOutput of cbegin and cend : ";
    for (auto i = vec.cbegin(); i != vec.cend(); ++i) cout << *i << " ";
 
    cout << "\nOutput of rbegin and rend : ";
    for (auto i = vec.rbegin(); i != vec.rend(); ++i) cout << *i << " ";
 
    cout << "\nOutput of crbegin and crend : ";
    for (auto i = vec.crbegin(); i != vec.crend(); ++i) cout << *i << " ";
 
    return 0;
}
