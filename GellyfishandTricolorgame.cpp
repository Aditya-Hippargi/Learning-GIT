#include <iostream>
#include <vector>
#include <string>
using std::string;
int func(int a,int b,int c,int d){
    int i=1;
    while(a<=0 || b<=0 || c<=0 || d<=0){
        if(i%2!=0){
            if(b<d) b--;
            else d--;
        }
        else{
            if(a<c) a--;
            else c--;
        }
        i++;
    }
    if(a<=0) return 1;
    if(b<=0) return 2;
    if(c<=0) return 3;
    if(d<=0) return 4;
    return 0;
}
int main(){
    int k,a,b,c,d;std::vector<string> vec;
    std::cin>>k;
    for(int i=0;i<k;i++){
        std::cin>>a>>b>>c>>d;
        if(func(a,b,c,d)==1 || func(a,b,c,d)==3) vec.push_back(string("Flower"));
        else vec.push_back(string("Gellyfish"));
    }
    for(auto i: vec){
        std::cout<<i<<std::endl;
    }
}