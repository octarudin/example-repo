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
    setStudentQuantity(10);
    setKernelState(KernelState_Run);
}

void kernel::eventRoutine()
{
    fillStudentScore(); // cin >> reg.studentScore;
    calculateStudentGrade();
    printStudentGrade();
    printString("Hello world " + getCounter());
}