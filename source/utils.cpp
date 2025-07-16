#include "../header/utils.h"

void utils::printString(string param)
{
    cout << param << endl;
}

void utils::setKernelState(KernelState newState)
{
    reg.kernelState = newState;
}

KernelState utils::getKernelState()
{
    return reg.kernelState;
}

void utils::setMutexState(MutexState newState)
{
    reg.mutexState = newState;
}

MutexState utils::getMutexState()
{
    return reg.mutexState;
}

unsigned int utils::getCounter()
{
    unsigned int ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        ret = reg.counter;
        setMutexState(MutexState_Opened);
    }
    return ret;
}

void utils::setCounter(unsigned int number)
{
    reg.counter = number;
}

void utils::increaseCounter()
{
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.counter++;
        setMutexState(MutexState_Opened);
    }
}