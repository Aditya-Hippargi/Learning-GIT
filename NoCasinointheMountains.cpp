#include <iostream>
#include <vector>

void func(std::vector<int>& vec,int n,int k){
    int count=0,final=0;

    for(int j=0;j<n;j++){
        if(vec[j]==1) count=0;
        if(vec[j]==0) count++;
        if(count==k) {final++;count=0;j++;}
    }
    std::cout<<final<<std::endl;
}

int main(){
    int t;
    int n,k;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n>>k;
        std::vector<int> vec(n);
        for(int j=0;j<n;j++) std::cin>>vec[j];
        func(vec,n,k);
    }
}