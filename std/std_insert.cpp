#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};

    //특정 위치에 하나 이상의 요소를 삽입하는데 사용, 다양한 컨테이너 타입에 적용 가능

    arr.insert(arr.begin(), 6);


    for(auto &i : arr){
        cout<<i<<" ";
    }
    cout<<"\n";

    arr.insert(arr.begin() + 3 , 7);

    for(auto &i : arr){
        cout<<i<<" ";
    }
    
    return 0;

}