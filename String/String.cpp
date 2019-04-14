#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

#include"String.h"

using namespace std;

String::String(const String &str)
{
	n = str.n;
	s = new char[n + 1];

	strcpy(s, str.s);
}

String::String(const char *str)
{
	n = strlen(str);
	s = new char[n+1];

	strcpy(s, str);
}

String::~String()
{
	delete[]s;
}

void String::Print()const
{
	cout << s;
}