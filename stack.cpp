#include "stack.h"

Stack::Stack()
{
  list = LinkedList();
}

void Stack::push(Request request)
{
  list.insertFront(request);
}

void Stack::pop()
{
  list.removeFront();
}

Request *Stack::peek()
{
  return &list.getHead()->request;
}

bool Stack::isEmpty()
{
  return list.isEmpty();
}