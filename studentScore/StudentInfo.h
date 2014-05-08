#ifndef STUDENT_INFO
#define STUDENT_INFO

// studentInfo.h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StudentInfo
{
	string name;
	double midScore;
	double finScore;
	vector<double> homework;
};

bool compare(const StudentInfo&, const StudentInfo&);
istream& readScore(istream&, StudentInfo&);
istream& readHomework(istream&, vector<double>&);
#endif