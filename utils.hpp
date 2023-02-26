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

#endif