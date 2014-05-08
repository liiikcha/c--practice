#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "StudentInfo.h"
using namespace std;

int main(){
	vector<StudentInfo> students;
	StudentInfo record;
	string::size_type maxLen = 0; // max lengt	h of name.
	
	// read and record all the info of students.
	while(readScore(cin, record)){
		// find the longest name.
		maxLen = max(maxLen, record.name.size());
		students.push_back(record);
	}
	
	// sort by name.
	sort(students.begin(), students.end(), compare);
	
	// output name and score.
	for(vector<StudentInfo>::size_type i = 0; i != students.size(); i++){
		cout << setw(maxLen + 1) << students[i].name;
		
		//caculate score.
		try{
			double finalGrade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << finalGrade << setprecision(prec);
		}catch(domain_error e){
			cout << e.what();
		}
		cout << endl;
	}
	return 0;
}
