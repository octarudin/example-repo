#include "../header/kernel.h"

void kernel::startApp()
{
    kernel::init();

    while (1)
    {
        kernel::eventRoutine();
        
        Sleep(constant::KERNEL_DELAY);
    }
    
}

void kernel::init()
{
    setKernelState(KernelState_Init);
    setCounter(10);
    setKernelState(KernelState_Run);
}

void kernel::eventRoutine()
{
    printString("Hello world " + getCounter());
    increaseCounter();
}