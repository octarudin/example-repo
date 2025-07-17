#pragma once

#ifndef REGISTERS_H
#define REGISTERS_H



#include "shared.h"

namespace registers
{
    enum KernelState
    {
        KernelState_None,
        KernelState_Init,
        KernelState_Run,
        KernelState_Halt,
        KernelState_Stop
    };

    enum MutexState
    {
        MutexState_Locked,
        MutexState_Opened
    };
    
    struct appReg
    {
        KernelState kernelState = KernelState_None; // Kernel State
        MutexState mutexState = MutexState_Opened; // Semaphore State

        unsigned int counter = 0; // counting from 0 to 100
        string studentScore;
    };
    
    extern appReg reg; // apps register
    
} // namespace register




#endif