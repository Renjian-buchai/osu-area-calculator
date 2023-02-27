#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <stdlib.h>

#include <iostream>

#include "Algorithms.hpp"

using namespace std;

namespace userInterface {
void interface(double array[7]) {
  char interfaceInput = 0;

  std::cout << "Welcome to Osu Area Calculator! What would you like to do?\n"
               "0: Edit tablet data\n"
               "1: Scale tablet data\n"
               "2: Exit"
            << endl;
  std::cin >> interfaceInput;

  if (interfaceInput == '0') {
    editInterface(array, interfaceInput);
  } else if (interfaceInput == '1') {
    scaleInterface(array, interfaceInput);
  } else if (interfaceInput == '2') {
    exit(0);
  } else {
    std::cout << "Invalid input!\n" << endl;
    exit(1);
  }
}

void editInterface(double array[7], char interfaceInput) {
  std::cout << "What tablet driver are you currently using?\n"
               "0: Wacom\n"
               "1: Open Tablet Driver"
            << endl;
  std::cin >> interfaceInput;

  if (interfaceInput == '0') {
    wacom::edit::input(array);
    wacom::edit::wacom(array);
    wacom::output(array);
  } else if (interfaceInput == '1') {
    tabletDriver::edit::input(array);
    tabletDriver::edit::tabletDriver(array);
    tabletDriver::output(array);
  } else {
    std::cout << "Invalid input!" << endl;
    exit(1);
  }
}

void scaleInterface(double array[7], char interfaceInput) {
  std::cout << "What tablet driver are you currently using?\n"
               "0: Wacom\n"
               "1: Open Tablet Driver"
            << endl;
  std::cin >> interfaceInput;
  if (interfaceInput == '0') {
    wacom::scale::input(array);
    wacom::scale::wacom(array);
    wacom::output(array);
  } else if (interfaceInput == '1') {
    tabletDriver::scale::input(array);
    tabletDriver::scale::tabletDriver(array);
    tabletDriver::output(array);
  }
}

}  // namespace userInterface

#endif