#include <iostream>
#include <algorithm>

#include <execution>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};


    //순차 실행, 처리순서 보장
    for_each(arr.begin(), arr.end(), [](int &x) {x *= 2;});



    //parallel unsequenced 하게 실행한다.(CPU가 임의의 index로 접근하여 병렬 처리 실행)
    //처리순서 미보장
    for_each(execution::par_unseq, arr.begin(), arr.end(), [](int & x){x *= 2;});

    for(auto &i : arr){
        cout<<i<<" ";
    }


    return 0;

}