#include<iostream>
#include"String.h"

using namespace std;

int main()
{
	String a("Hello, world!");
	cout << "String a: \"";
	a.Print();
	cout << "\", Len = " << a.Len() << endl;


	String *p = new String("Good bye!");
	cout << "String in heap: \"";
	p->Print();
	cout << "\", Len = " << p->Len() << endl;
	delete p;

	system("pause");
	return 0;
}