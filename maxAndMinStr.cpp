/**
 *  Copyright (c) 2014, Tieto ltd.
 *  All right reserved.
 *  
 *  File name: maxAndMinStr.cpp
 *  Revision: 1.0
 *  Last changed on: $Date: 2014-05-6 09:29:30 GMT $
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
#include <stdexcept>

using namespace std;

int main(){
	//typedef vector<string>::size_type vec_sz;
	vector<string> strVector;
	int idxMaxLen = 0;
	int idxMinLen = 0;
	string strRandom;
	
	cout<<"please input some strings, follow by end-of-file.\n";
	while(cin>>strRandom){
		strVector.push_back(strRandom);
	}
	
	typedef vector<string>::size_type vec_sz;
	vec_sz size = strVector.size();
	vec_sz maxLen = strVector[0].length();
	vec_sz minLen = strVector[0].length();
	
	// if nothing entered, error reported.
	if(size == 0){
		//cout<<"nothing entered !\n"<<endl;
		//return 1;
		throw domain_error("nothing entered.");
	}
	
	// get the length and index of string with min length.
	for(vec_sz i = 1; i < size; i++){
		if(strVector[i].length() > maxLen){
			maxLen = strVector[i].length();
			idxMaxLen = i;
		}
	}
	
	//get the length and index of string with min length.
	for(vec_sz i = 1; i < size; i++){
		if(strVector[i].length() < minLen){
			minLen = strVector[i].length();
			idxMaxLen = i;
		}
	}
	
	// Output
	cout<<"the index of string with maximum length is: "<<strVector[idxMaxLen]<<" and length is: "<<maxLen<<endl;
	cout<<"the index of string with minimum length is: "<<strVector[idxMinLen]<<" and length is: "<<minLen<<endl;
	
	return 0;
}