#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>

using namespace std;

void printArray(double[7]);
double calculateAspectRatio(double, double);

void printArray(double array[7]) {
  for (int i = 0; i < 7; ++i) {
    std::cout << endl << array[i];
  }
  std::cout << endl;
  return;
}

double calculateAspectRatio(double width, double height) {
  return width / height;
}

// namespace wacom {
// double[7] toTabletDriver(double[7]);
//
// double[7] toTabletDriver(double array[7]) {
//   double height = array[2] - array[1];
//   double width = array[4] - array[3];
//
//   array[1] = height / 100;
//   array[2] = width / 100;
//   array[3] = array[3] / 100 + width / 200;
//   array[4] = array[4] / 100 + height / 200;
//
//   return array;
// }

}  // namespace wacom

#endif