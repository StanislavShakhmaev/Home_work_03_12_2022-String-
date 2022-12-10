#include "String.h"


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