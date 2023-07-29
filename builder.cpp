#include "builder.h"

void Builder::returnHome()
{
  while (!stack.isEmpty())
  {
    Request request = stack.pop();
    if (request.getSector() != currentSector)
    {
      cout << "Builder #" << request.getBuilderNum() << ": Moving to sector " << request.getSector() << endl;
      currentSector = request.getSector();
      cout << "Builder #" << request.getBuilderNum() << ": Finished building a " << str(request.getType()) << " in sector " << request.getSector() << endl;
    }
    else
    {
      cout << "Builder #" << request.getBuilderNum() << ": Finished building a " << str(request.getType()) << " in sector " << request.getSector() << endl;
    }
  }
};

bool Builder::doCycle()
{
  if (list.isEmpty())
  {
    return false;
  }
  else
  {
    Request request = list.getTail()->request;
    if (request.getSector() == currentSector)
    {
      cout << "Builder #" << request.getBuilderNum() << ": Building a " << str(request.getType()) << " in sector " << request.getSector() << endl;
      stack.push(request);
      list.removeBack();
      return true;
    }
    else
    {
      currentSector = request.getSector();
      cout << "Builder #" << request.getBuilderNum() << ": Moving to sector " << request.getSector() << endl;
      cout << "Builder #" << request.getBuilderNum() << ": Building a " << str(request.getType()) << " in sector " << request.getSector() << endl;
      stack.push(request);
      list.removeBack();
      return true;
    }
  }
};

// cout << "Builder #" << request.getBuilderNum() << ": Moving to sector " << request.getSector() << endl;

void Builder::addRequest(int builderNum, int sectorNum, structure_type type)
{
  const char temp[20] = "";

  Request request(builderNum, sectorNum, type);
  list.insertFront(request);
  cout << "Builder #" << request.getBuilderNum() << ": Received request to build a " << str(request.getType()) << " in sector " << request.getSector() << endl;
}

void Builder::setBuilderNum(int index){

};