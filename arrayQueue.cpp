#include "arrayQueue.h"
#include <iostream>

using namespace std;

void printqueue(ArrayQueue &qq) {
  cout << "[ ";
  for (int i = 0; i < qq.size; i++) {
    cout << qq.values[i] << " ";
  }
  cout << "] L:" << qq.size << endl;
}

void enqueue(ArrayQueue &qq, int n) {
    if (qq.size == qq.capacity) {
        cout << "Queue is full!" << endl;
        return;
    }
    qq.rear = (qq.rear + 1) % qq.capacity; // Circular increment
    qq.values[qq.rear] = n;  // Add new element
    qq.size++;  // Increase size
}

int dequeue(ArrayQueue &qq) {
    if (qq.size == 0) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    int removedValue = qq.values[qq.front];  // Get the front value
    qq.front = (qq.front + 1) % qq.capacity; // Circular increment
    qq.size--;  // Decrease size
    return removedValue;
}