#include "linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
  head = NULL;
  tail = NULL;
  count = 0;
}

LinkedList::LinkedList(const LinkedList &other)
{
  if (this != &other)
  {
    Node *temp = other.head;
    while (temp != NULL)
    {
      Node *newNode = new Node;
      newNode->request = temp->request;
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
      count++;
      temp = temp->next;
    }
  }
}

LinkedList::~LinkedList()
{
  while (!isEmpty())
  {
    removeFront();
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
      newNode->request = temp->request;
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
      count++;
      temp = temp->next;
    }
  }
}

void LinkedList::insertFront(Request request)
{
  Node *newNode = new Node;
  newNode->request = request;
  newNode->next = head;
  head = newNode;
  if (tail == NULL)
  {
    tail = newNode;
  }
  count++;
}

void LinkedList::insertBack(Request request)
{
  Node *newNode = new Node;
  newNode->request = request;
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
  count++;
}

void LinkedList::removeFront()
{
  if (head == tail)
  {
    delete head;
    head = NULL;
    tail = NULL;
    count--;
  }
  if (head != NULL)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    count--;
  }
}

void LinkedList::removeBack()
{
  if (head == tail)
  {
    delete head;
    head = NULL;
    tail = NULL;
    count--;
  }
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
    count--;
  }
}

bool LinkedList::isEmpty() const
{
  return count == 0;
}

void LinkedList::printList() const
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->request.getSector() << " " << temp->request.getType() << endl;
    temp = temp->next;
  }
}

LinkedList::Node *LinkedList::getHead() const
{
  return head;
}