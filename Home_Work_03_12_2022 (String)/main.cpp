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

	explicit String(size_t size = 80)
	{
		this->size = size;
		this->str = new char[size] {};
		cout.width(WIDTH);
		cout << left << "DefaultConstructor:" << this << endl;
	}
	String(const char* str)
	{
		this->size = strlen(str)+1;
		this->str = new char[size] {};
		strcpy(this->str, str);
		cout.width(WIDTH);
		cout << left << "Constructor:" << this << endl;
	}
	String(const String&other)
	{
		this->size = other.size;
		this->str = new char[size] {};
		strcpy(this->str, other.str);
		cout.width(WIDTH);
		cout << left << "CopyConstructor:" << this << endl;
	}
	~String()
	{
		delete[] str;
		cout.width(WIDTH);
		cout << left << "Destructor:" << this << endl;
	}

	// Operators:

	String& operator=(const String& other)
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

	void print() const
	{
		cout << "Size:\t" << size << endl;
		cout << "Str:\t" << str << endl;
	}
};

void main()
{
	setlocale(LC_ALL, " ");
	String str1(10);
	str1.print();

	String str2 = "Hello";
	str2 = str2;
	str2.print();

	String str3 = str2;
	str3.print();

	String str4;
	str4 = str3;
	str4.print();
}