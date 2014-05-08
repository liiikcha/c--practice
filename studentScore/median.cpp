#include <stdexcept>
#include <vector>
#include "median.h"

double median(vector<double> vec){
	typedef vector<double>::size_type vec_sz;
	vec_sz vecSize = vec.size();
	
	if(vecSize == 0){
		throw domain_error("median of an empty vector!");
	}
	
	sort(vec.begin(), vec.end());
	vec_sz idxMid = vecSize / 2;
	
	return vecSize % 2 == 0 ? (vec[idxMid] + vec[idxMid - 1]) / 2 : vec[idxMid];
}