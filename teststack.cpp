#include <iostream>
#include "stack.h"
#include "request.h"
#include "structuretype.h"

using namespace std;

void dumpStack(stack &s)
{
    cout << "Dumping the stack" << endl;
    while (!s.isEmpty())
    {
	const Request* result = s.pop();
	cout << "Value: ";
	result->print();
    }
}

int main()
{
    stack* s = new stack(100);
    Request e1(1,WIND);
    Request e2(2,SOLAR);
    Request e3(3,WATER);
    const Request* ePtr;

    s->push(e1);
    dumpStack(*s);
    s->push(e2);
    s->push(e3);
    dumpStack(*s);

    delete s;
}
