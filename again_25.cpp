#include <iostream>
#include <string>

int solve(int n){
    if(n==0) return 0;
    else if(n==1) return 5;
    else return 25;
}
int main(){
    int n;std::cin>>n;
    std::cout<<solve(n);
}