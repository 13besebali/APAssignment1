#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	StringBuffer* object = new StringBuffer();
	StringBuffer* object2(object);

	object->append('A');
	object->append('B');
	object->append('C');
	object->append('D');
	object->append('E');
	cout << "Copied Pointers" << std::endl;
	cout << "Original objectect  Length =" << object->length() << std::endl;
	std::cout << "Original objectect 1 charAt 0 = " << object->charAt(0) << std::endl;
	cout<<"Printing Copy: "<<endl;
	
	object2->print();
	object2->append('X');
	cout<<std::endl;
	cout << "Copy objectect Length =" << object2->length() << std::endl;
	cout<<endl;
	cout<<"Printing charAt 5 of Copy: "<<object2->charAt(5)<<std::endl;
	delete object;

	return 0;
}

