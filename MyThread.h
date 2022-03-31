#include<thread>

class MyThread {
    public: 
    MyThread();
    virtual run() = 0;
    void Start();
    void End();

    private:
    std::thread m_thread;
};