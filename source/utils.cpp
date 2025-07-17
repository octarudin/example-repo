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

void utils::setCounter(unsigned int number)
{
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.counter = number;
        setMutexState(MutexState_Opened);
    }
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

void utils::increaseCounter()
{
    unsigned int ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.counter++;
        setMutexState(MutexState_Opened);
    }
}

void utils::setStudentQuantity(unsigned char number)
{
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.studentQuantity = number;
        setMutexState(MutexState_Opened);
    }
}

unsigned char utils::getStudentQuantity()
{
    unsigned char ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        ret = reg.studentQuantity;
        setMutexState(MutexState_Opened);
    }
    return ret;
}

void utils::setStudentScore()
{
    unsigned char index = getCounter() - 1;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        cin >> reg.studentScore[index];
        setMutexState(MutexState_Opened);
    }
}

void utils::setStudentScore(unsigned char number)
{
    unsigned char index = getCounter() - 1;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.studentScore[index] = number;
        setMutexState(MutexState_Opened);
    }
}

unsigned char utils::getStudentScore()
{
    unsigned char index = getCounter() - 1;
    unsigned char ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        ret = reg.studentScore[index];
        setMutexState(MutexState_Opened);
    }
    return ret;
}

unsigned char utils::getStudentScore(unsigned char index)
{
    unsigned char ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        ret = reg.studentScore[index];
        setMutexState(MutexState_Opened);
    }
    return ret;
}

void utils::setStudentGrade(char grade)
{
    unsigned char index = getCounter() - 1;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        reg.studentGrade[index] = grade;
        setMutexState(MutexState_Opened);
    }
}

char utils::getStudentGrade(unsigned char index)
{
    char ret = 0;
    if (getMutexState() == MutexState_Opened)
    {
        setMutexState(MutexState_Locked);
        ret = reg.studentGrade[index];
        setMutexState(MutexState_Opened);
    }
    return ret;
}