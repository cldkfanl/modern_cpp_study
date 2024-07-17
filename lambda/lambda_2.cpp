#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int c = 0;
    [&](){++c;}();
    [&](int &d){++d;}(c);


    cout<<c<<endl;

    return 0;

}