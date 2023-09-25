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

String::String(const char* str, size_t size) : String(size) {
	this->str = _strdup(str);
}

String::~String() {
	delete[] str;
	CountStr--;
}

void String::SetStr(char* str) {
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
	cin.getline(str, TEXTSIZE);
}

void String::Show() const{
	cout << str;
}