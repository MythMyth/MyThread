#include <iostream>
#include <thread>
#include <chrono>
#include "MyThread.h"

using namespace std;

class Test: public MyThread {
    public:
    Test() {}
    void run() {
        for(int i = 0; i < 30; i++) {
            cout << i + 1 << "\n";
            this_thread::sleep_for(chrono::milliseconds(500));
        }
    }
};

int main() {
    Test th, th2;
    th.Start();
    th2.Start();
    for(int i = 0; i < 30; i++) {
        cout << i + 1 << "\n";
            this_thread::sleep_for(chrono::milliseconds(500));
    }
    th2.Join();
    th.Join();
    return 0;
}
