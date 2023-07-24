#include "request.h"

Request::Request()
{
  this->id = 0;
  this->structure = UNK;
  this->location = 0;
}

Request::Request(int id, structure_type structure, int location)
{
  this->id = id;
  this->structure = structure;
  this->location = location;
}