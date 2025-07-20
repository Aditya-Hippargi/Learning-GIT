#include <iostream>
#include <vector>
using std::vector;

int func(int amount){
    int main,residue;int sum=0;
    vector<int> vec={100, 20, 10, 5, 1};
    for(auto a:vec){
        if(amount){
            main=amount-amount%a;amount=amount%a;
            sum+=main/a;
        }
    }
    return sum;
}

int main(){
    int amount;
    int main,residue;
    std::cin>>amount;

    std::cout<<func(amount);
}