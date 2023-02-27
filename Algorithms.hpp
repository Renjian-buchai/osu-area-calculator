#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <stdlib.h>

#include <iostream>

#include "utils.hpp"

using namespace std;

namespace wacom {
void output(double[7]);

namespace edit {
void wacom(double[7]);
void input(double[7]);

void wacom(double array[7]) {
  double height = array[2] - array[1];
  double width = array[4] - array[3];

  if (height <= 0) {
    std::cout << "Height cannot be less than 0." << endl;
    exit(1);
  }
  if (width <= 0) {
    std::cout << "Width cannot be less than 0." << endl;
    exit(1);
  }

  double changeInHeight = (height - array[6]) / 2;
  double changeInWidth = (changeInHeight / array[5]) / 2;

  array[0] = array[6];
  array[1] = array[1] + changeInHeight;
  array[2] = array[2] - changeInHeight;
  array[3] = array[3] + changeInWidth;
  array[4] = array[4] - changeInWidth;

  return;
}

void input(double array[7]) {
  std::cout << "Enter your current tablet data in order:\n"
               "top bottom left right\n"
               "separated by spaces."
            << endl;
  std::cin >> array[1] >> array[2] >> array[3] >> array[4];
  array[0] = calculateAspectRatio(array[4] - array[3], array[2] - array[1]);

  std::cout << "\nCurrent data:\n"
               "Aspect ratio: "
            << array[0] << "\nHeight: " << array[2] - array[1]
            << "\nWidth: " << array[4] - array[3] << endl
            << endl;

  std::cout << "Enter the tablet data you want in order:\n"
               "aspectRatio height\n"
               "separated by spaces."
            << endl;
  std::cin >> array[5] >> array[6];

  if (array[5] <= 0) {
    std::cout << "Aspect ratio cannot be less than or equal to 0." << endl;
    exit(1);
  }

  return;
}

}  // namespace edit

namespace scale {
void wacom(double[7]);
void input(double[7]);

void wacom(double array[7]) {
  double height = array[2] - array[1];
  double width = array[4] - array[3];

  if (height <= 0) {
    std::cout << "Height cannot be less than 0." << endl;
    exit(1);
  }
  if (width <= 0) {
    std::cout << "Width cannot be less than 0." << endl;
    exit(1);
  }

  double changeInHeight = height * array[5] / 2;
  double changeInWidth = changeInHeight / array[0] / 2;

  array[1] = array[1] + changeInHeight;
  array[2] = array[2] - changeInHeight;
  array[3] = array[3] + changeInWidth;
  array[4] = array[4] - changeInWidth;

  return;
}

void input(double array[7]) {
  std::cout << "Enter your current data in order:\n"
               "top bottom left right\n"
               "Separated by spaces."
            << endl;
  std::cin >> array[1] >> array[2] >> array[3] >> array[4];
  array[0] = calculateAspectRatio(array[2], array[1]);

  std::cout << "\nCurrent data:\n"
               "Aspect ratio: "
            << array[0] << "\nHeight: " << array[2] - array[1]
            << "\nWidth: " << array[4] - array[3] << endl
            << endl;

  std::cout << "Enter the scale of your tablet data that you want." << endl;
  std::cin >> array[5];

  if (array[5] <= 0) {
    std::cout << "Aspect ratio cannot be less than or equal to 0." << endl;
    exit(1);
  }

  return;
}

}  // namespace scale

void output(double array[7]) {
  std::cout << "Your current data: \n"
               "Top:    "
            << array[1] << "\nBottom: " << array[2] << "\nLeft:   " << array[3]
            << "\nRight:  " << array[4] << endl;
  return;
}

}  // namespace wacom

namespace tabletDriver {
void output(double[7]);

namespace edit {
void tabletDriver(double[7]);
void input(double[7]);

void tabletDriver(double array[7]) {
  double changeInHeight = (array[1] - array[6]) / 2;
  double changeInWidth = changeInHeight / array[5];

  array[0] = array[5];
  array[1] = array[6];
  array[2] = array[6] / array[5];
  array[3] = array[3];
  array[4] = array[4];

  return;
}

void input(double array[7]) {
  std::cout << "Enter your current data in order:\n"
               "height width X Y\n"
               "Separated by spaces."
            << endl;
  std::cin >> array[1] >> array[2] >> array[3] >> array[4];
  array[0] = calculateAspectRatio(array[2], array[1]);

  std::cout << "\nCurrent data:\n"
               "Aspect ratio: "
            << array[0] << endl
            << endl;

  std::cout << "Enter the tablet data you want in order: \n"
               "aspectRatio height\n"
               "separated by spaces."
            << endl;
  std::cin >> array[5] >> array[6];

  if (array[5] <= 0) {
    std::cout << "Aspect ratio cannot be less than or equal to 0." << endl;
    exit(1);
  }

  return;
}

}  // namespace edit

namespace scale {
void tabletDriver(double[7]);
void input(double[7]);

void tabletDriver(double array[7]) {
  double deltaHeight = array[1] * (1 - array[6]) / 2;
  double deltaWidth = deltaHeight / array[1];

  array[1] = array[1] - (2 * deltaHeight);
  array[2] = array[2] - (2 * deltaWidth);
  array[3] = array[3];
  array[4] = array[4];

  return;
}

void input(double array[7]) {
  std::cout << "Enter your current data in order:\n"
               "height width X Y\n"
               "Separated by spaces."
            << endl;
  std::cin >> array[1] >> array[2] >> array[3] >> array[4];
  array[0] = calculateAspectRatio(array[2], array[1]);

  std::cout << "\nCurrent data:\n"
               "Aspect ratio: "
            << array[0] << endl
            << endl;

  std::cout << "Enter the scale of your tablet data that you want." << endl;
  std::cin >> array[5];

  if (array[5] <= 0) {
    std::cout << "Aspect ratio cannot be less than or equal to 0." << endl;
    exit(1);
  }

  return;
}

}  // namespace scale

void output(double array[7]) {
  std::cout << "Your current data: \n"
               "Height: "
            << array[1] << "\nWidth: " << array[2] << "\nX: " << array[3]
            << "\nY: " << array[4] << endl;
  return;
}

}  // namespace tabletDriver

#endif