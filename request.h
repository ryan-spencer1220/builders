#include "structuretype.h"

class Request
{
private:
  int id;
  structure_type structure;
  int location;

public:
  Request();
  Request(int id, structure_type structure, int location);
};