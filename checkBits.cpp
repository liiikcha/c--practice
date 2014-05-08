#include <iostream>

//using namespace std;
int main(){
	unsigned char uint8 = 0;
	signed char int8 = 0;
	unsigned short uint16 = 0;
	signed short int16 = 0;
	unsigned int uint32 = 0;
	signed int int32 = 0;
	float fp32 = 0;
	double fp64 = 0;
	unsigned long ulong = 0;
	
	std::cout<<"unsigned char is "<< (sizeof(uint8)*8) << " bit \n\r"<<std::endl;
	std::cout<<"signed char is "<< (sizeof(int8)*8) << " bit \n\r"<<std::endl;
	std::cout<<"unsigned short is "<< (sizeof(uint16)*8) << " bit \n\r"<<std::endl;
	std::cout<<"signed short is "<< (sizeof(int16)*8) << " bit \n\r"<<std::endl;
	std::cout<<"unsigned int is "<< (sizeof(uint32)*8) << " bit \n\r"<<std::endl;
	std::cout<<"signed int is "<< (sizeof(int32)*8) << " bit \n\r"<<std::endl;
	std::cout<<"float fp32 is "<< (sizeof(fp32)*8) << " bit \n\r"<<std::endl;
	std::cout<<"double fp64 is "<< (sizeof(fp64)*8) << " bit \n\r"<<std::endl;
	std::cout<<"unsigned long is "<< (sizeof(ulong)*8) << " bit \n\r"<<std::endl;
	return 0;
}
