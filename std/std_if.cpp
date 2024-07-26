#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    //조건부 알고리즘

    vector<int> arr = {1,2,3,4,5};

    //copy_if
    
    vector<int> dst_copy;
    dst_copy.reserve(arr.size());   //reserve -> 벡터의 용량이 최소한 n개의 요소를 담게 요청
    copy_if(arr.begin(), arr.end(), back_inserter(dst_copy), [](int x){return x > 3;});

    for(auto i : dst_copy){
        cout<<i<<" ";
    }
    cout<<"\n";


    //find_if

    //조건을 제일 먼저 만족하는 요소를 반환.
    //find와 다르게 특정 멤버변수를 기준으로 찾을 수 있음.

    auto dst_find = find_if(arr.begin(), arr.end(), [](int x){return x > 3;});

    if(dst_find != arr.end()){
        cout<<"first element greater than 3 : "<<*dst_find<<"\n";
    }
    else{
        cout<<"no element greater than 3"<<"\n";
    }


    //remove_if

    //요소를 dst_remove 뒤로 보내고, dst_remove부터 arr.end()까지 지운다.
    //주로 erase와 함께 사용됨

    auto dst_remove = remove_if(arr.begin(), arr.end(), [](int x){return x % 2 == 0;});
    arr.erase(dst_remove, arr.end());
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<"\n";

    //replace_if
    
    //컨테이너를 변경하지 않고, 유효하지 않은 값을 초기화 하거나, 다른 값으로 교체할 때 주로 사용

    vector<int> arr2 = {1,3,5,6,7};
    replace_if(arr2.begin(), arr2.end(), [](int x){return x % 2 == 0;}, 0);

    for(auto i : arr2){
        cout<<i<<" ";
    }
    cout<<"\n";


    return 0;

}