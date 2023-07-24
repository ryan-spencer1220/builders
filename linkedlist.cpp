#include "linkedlist.h"

LinkedList::LinkedList()
{
  head = NULL;
  tail = NULL;
  size = 0;
}

LinkedList::LinkedList(const LinkedList &other)
{
  head = NULL;
  tail = NULL;
  size = 0;
  Node *temp = other.head;
  while (temp != NULL)
  {
    Node *newNode = new Node;
    newNode->id = temp->id;
    newNode->structure = temp->structure;
    newNode->location = temp->location;
    newNode->next = NULL;
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
    temp = temp->next;
  }
}

void LinkedList::operator=(const LinkedList &other)
{
  if (this != &other)
  {
    Node *temp = other.head;
    while (temp != NULL)
    {
      Node *newNode = new Node;
      newNode->id = temp->id;
      newNode->structure = temp->structure;
      newNode->location = temp->location;
      newNode->next = NULL;
      if (head == NULL)
      {
        head = newNode;
        tail = newNode;
      }
      else
      {
        tail->next = newNode;
        tail = newNode;
      }
      size++;
      temp = temp->next;
    }
  }
}

void LinkedList::addFront(Node *node)
{
  Node *newNode = new Node;
  newNode->id = node->id;
  newNode->structure = node->structure;
  newNode->location = node->location;
  newNode->next = NULL;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
  size++;
}

void LinkedList::addBack(Node *node)
{
  Node *newNode = new Node;
  newNode->id = node->id;
  newNode->structure = node->structure;
  newNode->location = node->location;
  newNode->next = NULL;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
  size++;
}

void LinkedList::removeFront()
{
  if (head != NULL)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    size--;
  }
}

void LinkedList::removeBack()
{
  if (head != NULL)
  {
    Node *temp = head;
    while (temp->next != tail)
    {
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
    size--;
  }
}