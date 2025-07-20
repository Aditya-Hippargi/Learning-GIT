#include <iostream>
#include <vector>

int main(){
    int t;
    for(int i=0;i<t;i++){
        int n;std::cin>>n;
        std::vector<int> vec(n);
        std::vector<std::vector <int>> subArray(n);
        for(int j=0;j<n;j++) std::cin>>vec[i];

        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                subArray[x].push_back(vec[y]);
            }
        }
    }
}