#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "StudentInfo.h"

double grade(double midScore, double finScore, double homework){
	return 0.2 * midScore + 0.4 * finScore + 0.4 * homework;
}

double grade(double midScore, double finScore, const vector<double>& homework){
	if(homework.size() == 0){
		throw domain_error("student has done no homework!");
	}
	return grade(midScore, finScore, median(homework));
}

double grade(const StudentInfo& StudentInfo){
	return grade(StudentInfo.midScore, StudentInfo.finScore, StudentInfo.homework);
}