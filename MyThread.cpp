#include "MyThread.h"

MyThread::MyThread() {
    m_thread = NULL;
}

void MyThread::Start() {
    m_thread = new std::thread(&MyThread::run, this);
}

void MyThread::Join() {
    if(m_thread != NULL) {
        m_thread->join();
    }
}