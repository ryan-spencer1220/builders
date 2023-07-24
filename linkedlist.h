#pragma once
#include <cstring>
#include <fstream>
#include <iostream>

#include "structuretype.h"

class LinkedList
{
private:
  struct Node
  {
    int id;
    structure_type structure;
    int location;
    Node *next;
  };
  Node *head;
  Node *tail;
  int size;

public:
  LinkedList();
  LinkedList(const LinkedList &other);
  ~LinkedList();
  void operator=(const LinkedList &other);
  void addFront(Node *node);
  void addBack(Node *node);
  void removeFront();
  void removeBack();
};