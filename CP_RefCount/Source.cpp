
#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//create a smart string with const char*
	char* hello = "hello";
	StringBuffer* object = new StringBuffer("Testing", 7);
	StringBuffer* object2 = new StringBuffer();

	*object2 = *object;
	// Checking Append Fucntion
	object2->append('A'); // 1st character append to object 2
	object2->append('B'); // 2nd character appedn to object 2
	// Checking Length Function
	cout << "COW with Reference Counting "<< std::endl;
	cout << "Original Object Length =" << object->length() << std::endl;
	cout << "Copy Object Length =" << object2->length() << std::endl;
	std::cout << "new ss charAt 0 = " << object->charAt(0) << std::endl;
	std::cout<<"Printing Original: "<<std::endl;
	object->print();
	std::cout<<endl;
	std::cout<<"Printing Copy: "<<std::endl;
	object2->print();

	return 0;
}

