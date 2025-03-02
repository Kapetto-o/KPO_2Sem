#pragma once
#ifndef VARPARM_H
#define VARPARM_H

#include <climits>
#include <cfloat>

namespace Varparm
{
    int ivarparm(int count, ...);
    int svarparm(short count, ...);
    double fvarparm(float max, ...);
    double dvarparm(double max, ...);
}

#endif