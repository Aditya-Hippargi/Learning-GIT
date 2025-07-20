#include <iostream>

int main(){
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b,c;
        std::cin>>n>>a>>b>>c;
        int km=0,day=0;
        int dist[]={a,b,c};
        int total=a+b+c;
        int factor=n/total;
        day=3*factor;km=total*factor;
        //Main problem now is time>1s
        //std::cout<<day<<km<<std::endl;
        while(km<n){
            km+=dist[day%3];day++;
        }
        std::cout<<day<<std::endl;
    }
}