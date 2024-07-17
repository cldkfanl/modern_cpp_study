#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    //컨테이너의 원소에 함수를 적용하고 결과를 다른 컨테이너에 저장.
    //값을 처리할 때, 다른 변수를 만들지 않아도 동일 변수 내에서 처리가 가능하다.

    
    vector<int> arr = {1,2,3,4,5};
    vector<int> dst;
    dst.resize(arr.size() + 2, 0);
    transform(arr.begin(), arr.end(), dst.begin(), [](int x) {return x * x;});

    for(auto &i : dst){
        cout<< i << " ";
    }
    
    return 0;

}