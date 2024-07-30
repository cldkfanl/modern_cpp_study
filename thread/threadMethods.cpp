#include <iostream>
#include <thread>

using namespace std;

int main(){

    cout<<boolalpha<<"\n";

    //hardware_concurrency() -> 원동시에 실행할 수 있는 최대 쓰레드 수
    cout<<"hardware_concurrency = "<<thread::hardware_concurrency()<<"\n";

    thread t1([]{cout<<"t1 with id = "<<this_thread::get_id()<<"\n";});
    thread t2([]{cout<<"t2 with id = "<<this_thread::get_id()<<"\n";});

    cout<<"\n";

    cout<<"from main : id of t1 "<<t1.get_id()<<"\n";
    cout<<"from main : id of t2 "<<t2.get_id()<<"\n";

    cout<<"\n";
    swap(t1, t2);

    cout<<"after swap"<<"\n";

    cout<<"from main : id of t1 "<<t1.get_id()<<"\n";
    cout<<"from main : id of t2 "<<t2.get_id()<<"\n";

    cout<<"\n";

    cout<<"from main : id of main = "<<this_thread::get_id()<<"\n";

    cout<<"\n";

    //joinable() -> 객체가 유효한 쓰레드와 연결되어 있는지를 확인하는 메서드
    cout<<"t1.joinable() = "<<t1.joinable()<<"\n";
    cout<<"t2.joinable() = "<<t2.joinable()<<"\n";

    cout<<"\n";

    t1.join();
    t2.join();

    cout<<"\n";

    cout<<"t1.joinable() = "<<t1.joinable()<<"\n";
    cout<<"t2.joinable() = "<<t2.joinable()<<"\n";

    return 0;
}