#include <chrono>
#include <iostream>
#include <random>
#include <vector>
#include <mutex>

using namespace std;

constexpr long long size1 = 100000000;

int main(){

    cout<<endl;

    vector<int> randValues;
    randValues.reserve(size1);

    random_device seed;

    mt19937 engine(seed());
    uniform_int_distribution<> uniformDist(1,10);

    for(long long i = 0; i < size1; ++i){
        randValues.push_back(uniformDist(engine));
    }

    const auto sta = chrono::steady_clock::now();

    //Loop
    //0.803209 Seconds
    //549984880
    // unsigned long long sum = {};
    // for(auto i : randValues){
    //     sum += i;
    // }

    //Std
    //0.803503 Seconds
    //549977975
    // const unsigned long long sum = accumulate(randValues.begin(), randValues.end(), 0);


    //usingMutex
    //2.53412 Seconds
    //550013403
    mutex myMutex;
    unsigned long long sum = {};
    for(auto i : randValues){
        lock_guard<mutex> myLockGuard(myMutex);
        sum += i;
    }

    const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

    cout<<"Time for mySumition "<<dur.count()<<" seconds"<<endl;
    cout<<"Result : "<<sum<<endl;

    cout<<endl;

    return 0;
}