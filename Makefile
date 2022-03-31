TestThread: MyThread.o main.o
	g++ build/MyThread.o build/main.o -pthread  -o build/TestThread
MyThread.o: 
	g++ -c MyThread.cpp -o build/MyThread.o
main.o:
	g++ -c main.cpp -o build/main.o