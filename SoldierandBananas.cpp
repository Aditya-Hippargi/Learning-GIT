#include <iostream>
int main(){
    int k,n,w,spent=0;
    std::cin>>k>>n>>w;
    for(int i=1;i<w+1;i++){
        spent+=i*k;
    }
    if(spent-n>=0) std::cout<<spent-n<<std::endl;
    else std::cout<<0<<std::endl;
}