#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a,min;vector<int> vec,final;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a;vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    min=vec[n-1]-vec[0];
    for(int i=0;i<m-1;i++){
        if(min>vec[n-1+i]-vec[i] && n+i-1>n) min=vec[n-1+i]-vec[i];
    }
    cout<<min<<endl;
}