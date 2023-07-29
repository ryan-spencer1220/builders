#pragma once

#include "structuretype.h"
#include <iostream>

using namespace std;

class Request
{
private:
  int builderNum;
  int location;
  structure_type structure;

public:
  Request();
  Request(int builderNum, int location, structure_type structure);
  structure_type getType() const;
  int getBuilderNum() const;
  int getSector() const;
  void print() const;
};