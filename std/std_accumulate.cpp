#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    //범위 내의 모든 요소를 누적한 결과를 반환
    //초기값과 리턴값의 변수 타입이 같아야한다.

    //accumulate(시작 반복자, 종료 반복자, 초기값, lambda함수)

    vector<int> arr = {1,2,3,4,5};

    int sum = accumulate(arr.begin(), arr.end(), 0);


    cout << sum << "\n";


    //최대값 찾기
    vector<int> arr2 = {1,5,2,5,7,3,12};

    int max = accumulate(arr2.begin(), arr2.end(), arr2[0], [](int a, int b){return std::max(a, b);});

    cout<<max<<"\n";
    
    return 0;

}