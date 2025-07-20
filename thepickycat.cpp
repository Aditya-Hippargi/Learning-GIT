#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void vector_input(vector<int> &vec,int n){
    int a;
    for(int i=0;i<n;i++) {cin>>a;vec.push_back(a);}
}

void bubble_sort(vector<int> &vec,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){temp=vec[j];vec[j]=vec[j+1];vec[j+1]=temp;}
        }
    }
}

int func(vector<int> vec,int n){
    
}

int main(){
    int t,n,median,median_index;vector<int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vec.clear();vector_input(vec,n);
        
    }
}