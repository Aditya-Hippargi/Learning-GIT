#include <iostream>
#include <vector>
#include <cstdlib>
using std::vector;

int main(){
    int arr[5][5],a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cin>>arr[i][j];
            if(arr[i][j]==1) a=i,b=j;
        }
    }
    std::cout<< std::abs(a-2)+std::abs(b-2);
}
