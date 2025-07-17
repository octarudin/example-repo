#pragma once

#ifndef KERNEL_H
#define KERNEL_H



#include "shared.h"

using namespace utils;

namespace kernel
{
    void startApp(); // start the application
    void init(); // initialization the apps
    void eventRoutine(); // event routines

} // namespace kernel



#endif