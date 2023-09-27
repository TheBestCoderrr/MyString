#include <iostream>
#include "String.h"
#include "Consts.h"
using namespace std;

size_t String::CountStr = 0;

String::String() {
	str = new char[STRSIZE];
	CountStr++;
}

String::String(size_t size) {
	str = new char[size];
	CountStr++;
}

String::String(const char* str) {
	this->str = _strdup(str);
	CountStr++;
}

String::String(const String& OtherString) {
	if (OtherString.str) {
		str = _strdup(OtherString.str);
		CountStr++;
	}
}

String::~String() {
	delete[] str;
	CountStr--;
}

void String::SetStr(char* str) {
	delete[] this->str;
	this->str = _strdup(str);
}

char* String::GetStr() {
	return str;
}

size_t String::GetCountStr() {
	return CountStr;
}

void String::EnterStr() {
	cout << "Enter str: ";
	cin.getline(str, strlen(str));
}

void String::Show() const{
	cout << str << endl;
}

String& String::operator=(const String& OtherString) noexcept {
	if (this != &OtherString) {
		delete[] str;
		str = _strdup(OtherString.str);
	}
	return *this;
}