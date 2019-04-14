#ifndef STRING_H
#define STRING_H

class String
{
public:
	String(const String &);
	String(const char *str = "");
	~String();

	int Len()const
	{
		return n;
	}

	void Print()const;


private:
	char *s;
	int n;
};

#endif // !STRING_H

