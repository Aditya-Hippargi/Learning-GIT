#include <iostream>

int main(){
    int n,a,b,c,sum=0;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a>>b>>c;
        if(2<=a+b+c && a+b+c<=3) sum++;
    }
    std::cout<<sum;
}