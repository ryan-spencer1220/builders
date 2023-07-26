#include "request.h"
#include "structuretype.h"

Request::Request()
{
  this->location = 0;
  this->structure = UNK;
}

Request::Request(int location, structure_type structure)
{
  this->location = location;
  this->structure = structure;
}

structure_type Request::getType() const
{
  return structure;
}

int Request::getSector() const
{
  return location;
}

void Request::setType(structure_type structure)
{
  this->structure = structure;
}

void Request::setSector(int location)
{
  this->location = location;
}

void Request::print() const
{
  char str[20];
  toString(structure, str);
  cout << "Sector: " << location << " Structure: " << str << endl;
}