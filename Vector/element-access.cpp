#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> vec;
    
    for(int i = 1; i <= 10; i++) vec.push_back(i*100);
    
    cout<<"Reference operator at position 2 is "<<vec[2]<<endl;
    cout<<"The element at front is "<<vec.front()<<endl;
    cout<<"The element at back is "<<vec.back()<<endl;
    cout<<"The element at position 2 is "<<vec.at(2)<<endl;
    int * fl = vec.data();
    fl++;
    cout<<"The second element is "<<*fl<<endl;
    
}
