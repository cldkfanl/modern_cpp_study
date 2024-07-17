#include <iostream>
#include <algorithm>

using namespace std;

int main(){


    vector<int> arr = {3,2,1,4,5};
    vector<int> dst;

    //before
    for(int i=0; i<arr.size(); i++){
        dst.emplace_back(arr[i] * 2); 
    }

    //using lambda
    dst.resize(arr.size());
    transform(arr.begin(), arr.end(), dst.begin(), [](int x) { return x * 2;});

    for(int i=0; i<arr.size(); i++){
        cout<<dst[i]<<" ";
    }



    //sort using lambda
    sort(dst.begin(), dst.end(), [](int a, int b) {return a > b;});
    //[] -> 외부 변수 없이
    //[&] -> 외부 범위의 모든 변수를 참조
    //[=] -> 외부 범위의 모든 변수를 값으로
    //(int a, int b) -> a,b를 받아서(매개변수 선언)
    //{return a > b;} -> a가 b보다 크면 true를 반환(함수 작성부)




    return 0;

}