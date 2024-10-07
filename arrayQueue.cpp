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
    qq.rear = (qq.rear + 1) % qq.capacity; // dugui helberer osgoh
    qq.values[qq.rear] = n;  // shine element nemh
    qq.size++;  // hemjeeg ihesgeh
}

int dequeue(ArrayQueue &qq) {
    if (qq.size == 0) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    int removedValue = qq.values[qq.front];  // ehnii elementin utgiig avah
    qq.front = (qq.front + 1) % qq.capacity; // dugui helberer ihesgeh
    qq.size--;  // hemjeeg bagasgah
    return removedValue;
}
