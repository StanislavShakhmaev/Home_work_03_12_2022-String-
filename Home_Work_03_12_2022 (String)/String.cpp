#include "String.h"
// Constructors:

String::String(size_t size) :size(size), str(new char[size] {})
{
	/*	this->size = size;
		this->str = new char[size] {};
		*/
	cout.width(WIDTH);
	cout << left << "DefaultConstructor:" << this << endl;

}
String::String(const char* str) :String(strlen(str) + 1)
{
	strcpy(this->str, str);
	cout.width(WIDTH);
	cout << left << "Constructor:" << this << endl;
}
String::String(const String&other) :String(other.str)
{
	strcpy(this->str, other.str);
	cout.width(WIDTH);
	cout << left << "CopyConstructor:" << this << endl;
}
String::String(String&& other) :size(other.size), str(other.str)
{
	other.size = 0;
	other.str = nullptr;
	cout.width(WIDTH);
	cout << left << "MoveConstructor:" << this << endl;
}

String::~String()
{
	delete[] str;
	cout.width(WIDTH);
	cout << left << "Destructor:" << this << endl;
}

// Operators:

String& String::operator=(const String& other)
{
	if (this->str == other.str) this;
	else
	{
		delete[] this->str;
		this->size = other.size;
		this->str = new char[size] {};
		strcpy(this->str, other.str);
		cout.width(WIDTH);
		cout << left << "CopyAssignment:" << this << endl;
		return *this;
	}
}

// Methods:

void String::print() const
{
	cout << "Size:\t" << size << endl;
	cout << "Str:\t" << str << endl;
}
