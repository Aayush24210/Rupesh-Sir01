// 2.4 x 10^9 is the number of instructions a 2.4 GHz processor can execute in one second.
// if each instruction takes 1 cycle to execute, then in one second the processor can execute 2.4 billion instructions.
//     __________
//    |          |->thread 1-->Now-->ready-->      Runnig
//    |          |                                /      \   
//    |  MS word |->thread 2       Writing or blocking  Termenated
//    |  proces  |->thread 3
//    |__________|->thread 4
// Race Condition
// the smallest sun processc thaat can originate from a process is called a thread.A process can generate multiple threads.
// all these threads share a common memory space of the process.
// A thread is a lightweight process.that means it requires less overhead to create and manage a thread compared to a full process.

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
void task(int id)
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Thread " << id << " is running iteration " << i << endl;
    }
}
int main()
{
    int thread;
    int t;
    thread t1(task, 1); // joining the thread is important because the main weight sh and merge back into the main thread . if this is not taken care the main thread may go out of scope and delete the address space resulting in crashing of the code
    thread t2(task, 2);
    thread t3(task, 3);
    thread t4(task, 4);

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    // to avoide the race condition between two or more threads we should have mutual  by a thread during the time it is being used mutex is a lock haveing to use in a thread .
    cout << "All threads have finished execution." << endl;
    return 0; // In cpp there are two ways of using mutex 1->manual locking unlocking 2->lock guard->manually locking a resource is error prone . if a thread throws an exception before unlocking the mutex it will remain locked causing a deadlock.by threadts comes with the burden of remembring to unlock the mutex in every possible code path .lock guard is a wrapper around a mutex that automatically locks the mutex when it is created and unlocks it when it goes out of scope.
              // this ensures that the mutex is always properly released even if an exception is thrown or the function returns early.falling to do so may result in a deadlock.
}
//On the quantraly using a lock guard is a safer option because unlocking is automaticly done by cpp enviroment as soon as the thread goes out of scope
