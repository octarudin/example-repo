#pragma once

#ifndef KERNEL_H
#define KERNEL_H



#include "shared.h"

using namespace std;
using namespace utils;

namespace kernel
{
    void startApp(); // start the application
    void init(); // initialization the apps
    void eventRoutine(); // event routines

    void checkTheKernelState(); // check the kernel state

    void fillStudentScore(); // fill the current student score 
    void calculateStudentGrade(); // convert the current student score to alphabethical grade
    void printStudentGrade(); // print the all student grade

} // namespace kernel



#endif