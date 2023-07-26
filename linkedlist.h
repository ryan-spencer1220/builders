#pragma once
#include <fstream>
#include <iostream>

#include "structuretype.h"
#include "request.h"

class LinkedList
{
private:
  struct Node
  {
    Request request;
    Node *next;
  };
  Node *head;
  Node *tail;
  int count;

public:
  LinkedList();
  LinkedList(const LinkedList &other);
  ~LinkedList();
  void operator=(const LinkedList &other);
  void insertFront(Request request);
  void insertBack(Request request);
  void removeFront();
  void removeBack();
  bool isEmpty() const;
  void printList() const;
  Node *getHead() const;
};