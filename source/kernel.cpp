#include "../header/kernel.h"

void kernel::startApp()
{
    init();
    while (1)
    {
        eventRoutine();
        checkTheKernelState();
        Sleep(constant::KERNEL_DELAY);
    }
}

void kernel::init()
{
    setKernelState(KernelState_Init);
    setStudentQuantity(10);
    setCounter(1);
    setKernelState(KernelState_Run);
}

void kernel::eventRoutine()
{
    fillStudentScore(); 
    calculateStudentGrade();
    if (getCounter() >= getStudentQuantity()) 
    {
        printStudentGrade();
        setKernelState(KernelState_Stop);
        setCounter(0);
    }
    increaseCounter(); // next student
}

void kernel::checkTheKernelState()
{
    KernelState currentState = getKernelState();
    if(currentState == KernelState_Halt || currentState == KernelState_Stop)
    {
        while (1) {} // currently, it just infinity loop
    }
}

void kernel::fillStudentScore()
{
    string str = "Please input the student-" +  to_string(getCounter()) + " score: ";
    printString(str);
    setStudentScore();
}

void kernel::calculateStudentGrade()
{
    unsigned char score = getStudentScore();
    score >= 0  && score <= 59 ? setStudentGrade('E') : setStudentGrade('D');
    score >= 60 && score <= 69 ? setStudentGrade('D') : setStudentGrade('C');
    score >= 70 && score <= 79 ? setStudentGrade('C') : setStudentGrade('B');
    score >= 80 && score <= 89 ? setStudentGrade('B') : setStudentGrade('A');
}

void kernel::printStudentGrade()
{
    for (unsigned char index = 0; index < getStudentQuantity(); index++)
    {
        unsigned char currentStudent = index++;
        string str = "the student-" +  to_string(currentStudent) + " score: " + to_string(getStudentGrade(index));
        printString(str);
    }
}