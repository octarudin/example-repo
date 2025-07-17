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
    void setCounter(unsigned int number); // set counter value
    unsigned int getCounter(); // get counter value
    void increaseCounter(); // increase the counter by 1 point

    void setStudentQuantity(unsigned char number); // set a counter number
    unsigned char getStudentQuantity(); // set a counter number
    void setStudentScore(unsigned char number); // set student-X score by code, X = 1, 2, ..., 255
    void setStudentScore(); // set current student score
    unsigned char getStudentScore(unsigned char index); // get student-X score, X = 1, 2, ..., 255
    unsigned char getStudentScore(); // get current student score
    void setStudentGrade(char number); // set student-X grade, X = 1, 2, ..., 255
    char getStudentGrade(unsigned char index); // get student-X grade, X = 1, 2, ..., 255 

} // namespace utils




#endif