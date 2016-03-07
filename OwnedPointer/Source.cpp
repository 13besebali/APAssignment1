
#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	StringBuffer* object = new StringBuffer();
	StringBuffer* object2 = new StringBuffer();
	
	object2 = object;
	// Appending characters
	object->append('a');
	object->append('b'); 
	object->append('c'); 
	object->append('d'); 
	object->append('e');
	cout << "Owned Pointer Implementation " << std::endl;
	cout<<"Printing Original: "<<endl;
	
	object->print(); 
	cout<<endl;
	
	cout << "Original Length Before Append =" << object->length() << std::endl;
	object2->append('T');
	
	// Checking Length Function
	cout << "OldOwner Length after Append =" << object->length() << std::endl;
	cout << "NewOwner Length after Append =" << object2->length() << std::endl;
	// Checking CharAt Function
	cout<<"Printing OldOwner: "<<endl;
	object->print();
	cout<<endl;
	cout<<"Printing NewOwner: "<<endl;
	object2->print(); 

	return 0;
}

