#include "StudentInfo.h"
using namespace std;

bool compare(const StudentInfo& StudentInfoA, const StudentInfo& StudentInfoB){
	return StudentInfoA.name < StudentInfoB.name;
}

istream& readHomework(istream& in, vector<double>& homework){
	if(in){
		// clear content exsited
		homework.clear();
		
		//read homework 
		double score;
		while(in >> score){
			homework.push_back(score);
		}
		
		in.clear();
	}
	return in;
}

istream& readScore(istream& is, StudentInfo& StudentInfo){
	// get and record student's name, midterm/final score.
	is >> StudentInfo.name >> StudentInfo.midScore >> StudentInfo.finScore;
	
	// get and record student's homework
	readHomework(is, StudentInfo.homework);
	return is;
}