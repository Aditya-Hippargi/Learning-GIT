#include <iostream>
#include <cmath>

int main(){
    int m,n,final;
    std::cin>>m>>n;
    if(1<=m && m<=n && n<=16) std::cout<<floor((m*n)/2);
}