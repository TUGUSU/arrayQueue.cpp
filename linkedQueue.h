#include <iostream>

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

struct item {
  int value;
  item *next = NULL;
};

struct LinkedQueue {
  item *head = NULL;
  item *tail = NULL;
};

// Queue-н элементүүдийг хэвлэх
void printqueue(LinkedQueue &);

// Queue-д элемент нэмэх
void enqueue(LinkedQueue &, int);

// Queue-с элемент гаргах, хоосон бол -1 буцаах
int dequeue(LinkedQueue &);

// Queue-н уртыг олох
int lengthqueue(LinkedQueue &);

#endif // LINKEDQUEUE_H
