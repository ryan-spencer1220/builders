#include "request.h"
#include "structuretype.h"

Request::Request()
{
  this->builderNum = 0;
  this->location = 0;
  this->structure = UNK;
}

Request::Request(int builderNum, int location, structure_type structure)
{
  this->builderNum = builderNum;
  this->location = location;
  this->structure = structure;
}

int Request::getBuilderNum() const
{
  return builderNum;
}

structure_type Request::getType() const
{
  return structure;
}

int Request::getSector() const
{
  return location;
}

void Request::print() const
{
  char str[20];
  toString(structure, str);
  cout << "Sector: " << location << " Structure: " << str << endl;
}