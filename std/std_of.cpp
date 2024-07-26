#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    //all_of -> 벡터의 모든 요소가 조건을 만족하는지 확인
    //any_of -> 벡터의 어떤 요소라도 조건을 만족하는지 확인
    //none_of -> 벡터의 모든 요소가 조건을 만족하지 않는지 확인
    //빠른 확인을 위해, 조건에 부합하지 않으면 즉시 break되게 설계
    
    vector<int> arr = {1,2,3,4,5,6};

    bool allof = all_of(arr.begin(), arr.end(), [](int x){return x < 10;});

    bool anyof = any_of(arr.begin(), arr.end(), [](int x){return x < 5;});

    bool noneof = none_of(arr.begin(), arr.end(), [](int x){return x < 6;});

    cout<<"all_of : "<<allof<<"\n";
    cout<<"any_of : "<<anyof<<"\n";
    cout<<"none_of : "<<noneof<<"\n";



    return 0;

}