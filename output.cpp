#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	/**
	 *  
	 */
	/*{
		const string s = "a string";
		cout<<s<<endl;
	}
	
	{
		const string s = "another string";
		cout<<s<<endl;
	}*/
	
	cout<<"what's your name?\n"<<endl;
	string name;
	cin>>name;
	cout<<"hello,"<<name
			<<endl<<"and what is yours	?\n";
	cin>>name;
	cout<<"hello, "<<name
			<<"; nice to meet you too!"<<endl;
	return 0;
}
