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

// Queue-д элемент нэмэх
void enqueue(ArrayQueue &qq, int n) {
    if (qq.size == 100) {  // Queue capacity is 100
        cout << "Queue is full!" << endl;
        return;
    }
    qq.values[qq.size] = n;  // Add new element at the end
    qq.size++;               // Increment the size
}

// Queue-с элемент гаргах, хоосон бол -1 буцаах
int dequeue(ArrayQueue &qq) {
    if (qq.size == 0) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    int removedValue = qq.values[0];  // Get the first element
    // Shift all elements to the left
    for (int i = 1; i < qq.size; i++) {
        qq.values[i - 1] = qq.values[i];
    }
    qq.size--;  // Decrease the size
    return removedValue;
}
