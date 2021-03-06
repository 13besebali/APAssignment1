#pragma once
#include <iostream>

class StringBuffer {

public:

	StringBuffer();  //Constructor
	~StringBuffer(); //Destructor

	char charAt(int) const;	//	Character Index
	int length() const;		// String length
	void reserve(int);     // Memory Allocation
	void append(char);      //Appending character to string
	void print();
	StringBuffer(StringBuffer&);  //Shallow Copying
	StringBuffer(char*, int);		//Conversion 
private:
	char* string_buf;             //buffer to store the original string
	int strlen;                //length of the string
};

