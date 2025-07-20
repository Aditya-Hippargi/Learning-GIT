#include <iostream>
#include <vector>
using std::vector;
int main(){
    int t,a,b,c,d,sum;vector<int> vec;
    std::cin>>t;
    for(int i=0;i<t;i++){
        sum=0;
        std::cin>>a>>b>>c>>d;
        if(a<b) sum++;
        if(a<c) sum++;
        if(a<d) sum++;
        vec.push_back(sum);
    }
    for(auto a: vec){
        std::cout<<a<<std::endl;
    }
}