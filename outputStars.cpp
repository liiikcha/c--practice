/**
 *  Copyright (c) 2014, Tieto ltd.
 *  All right reserved.
 *  
 *  File name: outputStars.cpp
 *  Revision: 1.0
 *  Last changed on: $Date: 2010-03-10 09:29:30 GMT $
 *  Last changed by: $Author: Li Chang $
 *  History: 
 */

#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;
// using std::cin;
// using std::endl;
// using std::precision;
// using std::setprecision;
// using std::string;
// using std::streamsize;

int main(){
	// ask for students's name
	cout<<"please enter you first name: \n"<<endl;
	string name;
	cin>>name;
	cout<<"hello, "<<name<<"!"<<endl;
	
	// ask for students's midterm and final exam grades
	cout<<"please enter your midterm and final exam grades: \n"<<endl;
	double midtermScore;
	double finalScore;
	cin>>midtermScore>>finalScore;
	
	// ask for homework score.
	cout<<"please enter all your homework grades, "
          "follow by end-of-file: \n";
		  
	// homework number and total score so far
	int homeworkCount = 0;
	double homeworkSum = 0;
	
	// read homework grades to variable
	double x;
	vector<double> homeworkScore;
	
	while(cin>>x){
		// ++homeworkCount;
		// homeworkSum += x;
		homeworkScore.push_back(x);
	}
	
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homeworkScore.size();
	
	if(size == 0){
		cout<<"\n you must enter your grades. "
		    "please try again."<<endl;
		return 1;
	}
	
	sort(homeworkScore.begin(), homeworkScore.end());
	
	for(vec_sz i = 0; i < size; i++){
		cout<<"homeworkScore is: "<<homeworkScore[i]<<"\n"<<endl;
	}
	vec_sz mid = size / 2;
	double median = 0;
	median = size % 2 == 0 ? (homeworkScore[mid] + homeworkScore[mid - 1]) : homeworkScore[mid];
	
	//output result
	streamsize prec = cout.precision();
	cout<<"your final grades is "<<setprecision(3)
	    <<0.2 * midtermScore + 0.4 * finalScore + 0.4 * median
		<<setprecision(prec)<<endl;
	return 0;
}