#include<thread>

class MyThread {
    public: 
    MyThread();
    virtual void run() = 0;
    void Start();
    void Join();

    private:
    std::thread *m_thread;
};