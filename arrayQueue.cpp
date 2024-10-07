#include "arrayQueue.h"
#include <iostream>

using namespace std;

// Print all elements in the queue
void printqueue(ArrayQueue &qq) {
    cout << "[ ";
    for (int i = 0; i < qq.size; i++) {
        cout << qq.values[(qq.front + i) % qq.capacity] << " ";  // Adjusted to print from the front
    }
    cout << "] L:" << qq.size << endl;
}

// Add an element to the queue
void enqueue(ArrayQueue &qq, int n) {
    if (qq.size == qq.capacity) {
        cout << "Queue is full!" << endl;
        return;
    }
    qq.rear = (qq.rear + 1) % qq.capacity;  // Circular increment for rear
    qq.values[qq.rear] = n;                 // Add new element
    qq.size++;                              // Increase size
}

// Remove an element from the queue
int dequeue(ArrayQueue &qq) {
    if (qq.size == 0) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    int removedValue = qq.values[qq.front];     // Get the front element
    qq.front = (qq.front + 1) % qq.capacity;    // Circular increment for front
    qq.size--;                                  // Decrease size
    return removedValue;
}
