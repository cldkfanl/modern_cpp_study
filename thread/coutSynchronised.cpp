#include <chrono>
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex coutMutex;

class Worker{
    public :
    Worker(string n) : name(n){};

    void operator()(){
        for(int i = 1; i<=3; ++i){
            this_thread::sleep_for(chrono::milliseconds(200));
            coutMutex.lock();
            cout<<name << " : "<<"work"<<i<<"done !!!"<<endl;
            coutMutex.unlock();
        }
    }
    private :
    string name;
};

int main(){
    cout<<endl;

    cout<<"Boss : Lets start working.\n\n";

    thread herb = thread(Worker("Herb"));
    thread andrei = thread(Worker("Andrei"));
    thread scott = thread(Worker("Scott"));
    thread bjarne = thread(Worker("Bjarne"));
    thread bart = thread(Worker("Bart"));
    thread jenne = thread(Worker("Jenne"));

    herb.join();
    andrei.join();
    scott.join();
    bjarne.join();
    bart.join();
    jenne.join();

    cout<<"\n"<<"finished !!!"<<"\n";

    return 0;
}