#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> vec;
    
    for(int i = 1; i <= 10; i++) vec.push_back(i*100);
    cout<<"Elements          : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
    
    vec.insert(vec.begin(),344);
    cout<<"After inserting   : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
     
    vec.pop_back();
    cout<<"After pop out     : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
     
    vec.erase(vec.begin());
    cout<<"After erasing     : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
    
    vec.emplace(vec.end(),1221);
    cout<<"After emplacement : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
    
    vec.assign(vec.size(),222);
    cout<<"After assigning   : ";
    for(int i = 0; i < vec.size(); i++ ) cout<<" "<<vec[i];
    cout<<endl;
     
    vec.clear();
    cout<<"The size of the vector is "<<vec.size()<<endl;
    
    return 0;
    
}
