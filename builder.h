#pragma once
#include "stack.h"
#include "structuretype.h"
#include "linkedlist.h"
#include <iostream>
using namespace std;

class Builder
{
private:
  Stack stack;
  LinkedList list;
  int currentSector;

public:
  void returnHome();
  bool doCycle();
  void addRequest(int builderNum, int sectorNum, structure_type type);
  void setBuilderNum(int index);
};