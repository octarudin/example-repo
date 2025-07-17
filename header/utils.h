#pragma once

#ifndef UTILS_H
#define UTILS_H


#include "shared.h"

using namespace std;
using namespace registers;

namespace utils
{
    void setKernelState(KernelState newState); // set kernel state
    KernelState getKernelState(); // get kernel state
    void setMutexState(MutexState newState); // set mutex state
    MutexState getMutexState(); // get mutex state
    void printString(string param); // print a string
    unsigned int getCounter(); // get counter value
    void setStudentQuantity(unsigned int number); // set a counter number

} // namespace utils




#endif