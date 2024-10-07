#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

// Struct definition for ArrayQueue
struct ArrayQueue {
    int values[100];  // Array to store queue elements
    int front = 0;    // Index for the front of the queue
    int rear = -1;    // Index for the rear of the queue
    int size = 0;     // Current number of elements in the queue
    int capacity = 100; // Maximum capacity of the queue
};

// Queue-н элементүүдийг хэвлэх
void printqueue(ArrayQueue &qq);

// Queue-д элемент нэмэх
void enqueue(ArrayQueue &qq, int n);

// Queue-с элемент гаргах, хоосон бол -1 буцаах
int dequeue(ArrayQueue &qq);

#endif // ARRAYQUEUE_H

