#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(i%2==0) vec.push_back((int)(str[i]-'0'));
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size()-1;i++){
        cout<<vec[i]<<"+";
    }
    cout<<vec[vec.size()-1]<<endl;
}