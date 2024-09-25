#pragma once
#include <string>
using namespace std;

class Phone
{
private:
	string called[10];
	int countCall;
	string recived[10];
	int countRec;
	void insertNumber(string[], const string&);

public:
	Phone();
	~Phone() {};
	void NowCall(const string&);
	void NowCall(int);
	void NowRecive(const string&);
	void NowRecive(int);
	string LastCalled() const;
	string LastRecived() const;
	void ListCalles() const;
	void ListReciveds() const;
};

