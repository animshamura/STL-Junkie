#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> vec;
    
    for(int i = 1; i <= 10; i++) vec.push_back(i*100);
    
    cout<<"The size of the vector is "<<vec.size()<<endl;
    cout<<"The capacity of the vector is "<<vec.capacity()<<endl;
    cout<<"The maximum size of the vector is "<<vec.max_size()<<endl;
    vec.resize(5);
    cout<<"The new size of the vector is "<<vec.size()<<endl;
    cout<<((vec.empty())? "The vector is empty" : "The vector is not empty")<<endl;
    vec.shrink_to_fit();
    cout<<"The actual capacity of the vector is "<<vec.size()<<endl;
    
}
