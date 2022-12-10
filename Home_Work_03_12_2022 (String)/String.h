#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define WIDTH 20

class String
{
	size_t size;
	char* str;
public:

	// Constructors:

	explicit String(size_t size = 80);
	String(const char* str);
	String(const String&other);
	String(String&& other);
	~String();

	// Operators:

	String& operator=(const String& other);

	// Methods:

	void print() const;
};