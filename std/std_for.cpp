#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};

    //기본적인 for문
    for(int i=0; i<arr.size(); i++){
        arr[i] *= 2;
    }

    //범위기반 for문
    for(auto &i : arr){
        i *= 2;
    }

    for(auto &i : arr){
        cout<<i<<" ";
    }


    return 0;

}