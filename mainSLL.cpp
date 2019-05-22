#include "StringLinkedList.h"

int main()
{
    StringLinkedList<string> x;
    x.addFront("BOS");
    x.addFront("ATL");
    x.addFront("MSP");
    x.addFront("LAX");
    x.print();
    x.find("LAX");
    x.find("lax");
    return 0;
}