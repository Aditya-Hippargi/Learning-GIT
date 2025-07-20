#include <iostream>

int solve(){
    int n,k;std::cin>>n>>k;
    for(int i=k;i>0;i--){
        if(n%10!=0) n--;
        else n/=10;
    }
    return n;
}
int main(){
    std::cout<<solve()<<std::endl;
}