#include "stack.h"

Stack::Stack()
{
  list = LinkedList();
}

void Stack::push(Request request)
{
  list.insertFront(request);
}

Request Stack::pop()
{
  Request request = list.getHead()->request;
  list.removeFront();
  return request;
}

Request *Stack::peek()
{
  return &list.getHead()->request;
}

bool Stack::isEmpty()
{
  return list.isEmpty();
}

void Stack::printStack()
{
  list.printList();
}