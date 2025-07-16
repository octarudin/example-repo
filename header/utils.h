#pragma once

#ifndef UTILS_H
#define UTILS_H


#include "shared.h"

using namespace std;
using namespace registers;

namespace utils
{
    void setKernelState(KernelState newState);
    KernelState getKernelState();
    void setMutexState(MutexState newState);
    MutexState getMutexState();
    void printString(string param); // print a string
    unsigned int getCounter();
    void setCounter(unsigned int number);
    void increaseCounter(); // increase 1 point

} // namespace utils




#endif