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
#include <iterator>

using namespace std;

int main(){
	typedef vector<int>::size_type vec_size;
	#define MAX_SIZE_OF_VECTOR 8
	vector<int> bigVector;
	vector<int> subVector_1;
	vector<int> subVector_2;
	vector<int> subVector_3;
	vector<int> subVector_4;
	vec_size sizeOfVector = MAX_SIZE_OF_VECTOR;
	
	// create vector filled of integers.
	for(vec_size i = 0; i < sizeOfVector; i++){
		bigVector.push_back((i + 1) * 10);
	}
	
	// print content of vector to screen.
	copy(bigVector.begin(), bigVector.end(), ostream_iterator<int> (cout, "\n"));
	subVector_1.push_back(bigVector[0]);
	subVector_1.push_back(bigVector[1]);
	subVector_2.push_back(bigVector[2]);
	subVector_2.push_back(bigVector[3]);
	subVector_3.push_back(bigVector[4]);
	subVector_3.push_back(bigVector[5]);
	subVector_4.push_back(bigVector[6]);
	subVector_4.push_back(bigVector[7]);
	
	for(int i = 0; i < 2; i++){
		cout<<"element of subVector_4 are: "<<subVector_4[i]<<endl;
	}
	return 0;
}