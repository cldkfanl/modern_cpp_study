#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

class Sleeper{
    public :
        Sleeper(int& i_):i{i_}{};
        void operator()(int k){
            for(unsigned int j = 0; j<= 5; ++j){
                this_thread::sleep_for(chrono::milliseconds(100));
                i += k;
            }
            cout<<this_thread::get_id()<<"\n";
        }
    private :
        int& i;
};

int main(){
    cout<<"\n";

    int valSleeper = 1000;
    thread t(Sleeper(valSleeper), 5);

    // t.detach();
    // 생성된 쓰레드를 생성자와 독립적으로 실행
    // 메인 쓰레드의 라이프 사이클이 자식 쓰레드의 계산이 수행되기 전에 끝남

    // t.join();
    // 생성된 쓰레드가 자신의 실행이 끝날 때 까지 대기

    cout<<"valSleeper = "<<valSleeper<<"\n";

    cout<<"\n";
    return 0;
}