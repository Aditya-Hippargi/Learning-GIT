#include <iostream>

int main(){
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b,c;
        std::cin>>n>>a>>b>>c;
        int km=0,day=0;
        int dist[]={a,b,c};
        while(km<n){
            km+=dist[day%3];day++;
        }
        std::cout<<day<<std::endl;
    }
}