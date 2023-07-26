#include "structuretype.h"

class Builder
{
private:
public:
  void returnHome();
  bool doCycle();
  void addRequest(int sectorNum, structure_type type);
  void setBuilderNum(int index);
};