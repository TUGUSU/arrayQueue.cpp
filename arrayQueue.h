
#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

struct ArrayQueue {
  int values[100];
  int size = 0;
};

// Queue-н элементүүдийг хэвлэх
void printqueue(ArrayQueue &);

// Queue-д элемент нэмэх
void enqueue(ArrayQueue &, int);

// Queue-с элемент гаргах, хоосон бол -1 буцаах
int dequeue(ArrayQueue &);

#endif // ARRAYQUEUE_H
