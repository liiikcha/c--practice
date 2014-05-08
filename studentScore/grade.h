#ifndef GRADE_H
#define GRADE_H

//grade.h
#include <vector>
#include "StudentInfo.h"
using namespace std;

double grade(double, double, double);
double grade(double, double, const vector<double>&);
double grade(const StudentInfo&);
#endif