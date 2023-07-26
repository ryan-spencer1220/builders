#include "linkedlist.h"

class Stack
{
private:
  LinkedList list;

public:
  Stack();
  void push(Request request);
  void pop();
  Request *peek();
  bool isEmpty();
};