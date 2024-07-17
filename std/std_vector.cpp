#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    vector<int> dst;
    for(int i=0; i<arr.size(); i++){

        // push_back
        dst.push_back(arr[i] * 2);



        // emplace_back
        dst.emplace_back(arr[i] * 2);
    }

    for(int i=0; i<dst.size(); i++){
        cout<<dst[i]<<" ";
    }
    cout<<"\n";

    return 0;

}