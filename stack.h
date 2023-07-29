#include "linkedlist.h"

class Stack
{
private:
  LinkedList list;

public:
  Stack();
  void push(Request request);
  Request pop();
  Request *peek();
  bool isEmpty();
  void printStack();
};