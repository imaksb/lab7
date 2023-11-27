#include "TEllipse.h"
#include "THyperbola.h"
#include "Shape.h"
#include <iostream>

int main()
{
    Shape p;
    TElipse t(2.0, 3.0);
    p.processFunction(&t, 7.0);
 

} 