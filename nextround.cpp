#include <iostream>
#include <vector>
using std::vector;

int main(){
    int n,k,num;vector<int> vec;
    std::cin>>n>>k;
    if(1 <= k && k <= n && n <= 50){
        for(int i=0;i<n;i++){
            std::cin>>num;vec.push_back(num);
        }
        int score=vec[k-1],sum=0;
        for(int i=0;i<n;i++){
            if(vec[i]>=score && vec[i]>0) sum++;
        }
        std::cout<<sum;
    }
}
