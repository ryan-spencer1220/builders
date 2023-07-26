#include "builder.h"
#include "structuretype.h"
#include <iostream>
using namespace std;

void Builder::returnHome(){};

bool Builder::doCycle()
{
  return false;
};

void Builder::addRequest(int sectorNum, structure_type type)
{
  cout << "DOG" << endl;
};

void Builder::setBuilderNum(int index){

};