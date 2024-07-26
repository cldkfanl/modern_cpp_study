#include <iostream>
#include <thread>

using namespace std;

void helloFunction(){
    cout<< "hello from a function"<<"\n";
}

class HelloFunctionObject{
    public :
        void operator()() const {
            cout<<"hello from a function object"<<"\n";
        }
};

int main(){

    cout<<"\n";

    thread t1(helloFunction);

    HelloFunctionObject HelloFunctionObject;
    
    thread t2(HelloFunctionObject);

    thread t3([] {cout<<"hello from a lambda"<<"\n";});

    t1.join();
    t2.join();
    t3.join();
    
    cout<<"\n";

    return 0;
}