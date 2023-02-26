#include <stdlib.h>

#include <cassert>
#include <cmath>
#include <exception>
#include <fstream>
#include <iostream>

#include "interface.hpp"

using namespace std;

/*------------------------------------------------------*/

int main() {
  double array[7] = {0, 0, 0, 0, 0, 0, 0};

  interface::interface(array);

  return 0;
}
