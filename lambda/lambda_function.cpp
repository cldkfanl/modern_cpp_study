#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    vector<int> arr = {1,4,2,3,5};
    sort(arr.begin(), arr.end(), [](int a, int b){return a>b;});


    //named function 변환
    auto decend_order = [](int a, int b){return a > b;};
    sort(arr.begin(), arr.end(), decend_order);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}