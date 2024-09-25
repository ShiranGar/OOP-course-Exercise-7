#include "Phone.h"
#include <iostream>

void Phone::insertNumber(string pn[], const string& pnum)
{
	for (int i = 1; i < 10; i++)
		pn[i - 1] = pn[i];
	pn[9] = pnum;
}

Phone::Phone()
{
	countCall = 0;
	countRec = 0;
}

void Phone::NowCall(const string& pnum)
{
	if (countCall < 10)
		called[countCall++] = pnum;
	else
		insertNumber(called, pnum);
	cout << "now call : " << called[countCall - 1] << endl;
}

void Phone::NowCall(int i)
{
	if (i < countCall)
		cout << "now call : " << called[i] << endl;
	else
		cout << "number not set!!" << endl;
}

void Phone::NowRecive(const string& pnum)
{
	if (countRec < 10)
		called[countRec++] = pnum;
	else
		insertNumber(recived, pnum);
	cout << "now recive : " << recived[countRec - 1] << endl;
}

void Phone::NowRecive(int)
{
}

string Phone::LastCalled() const
{
	return called[countCall - 1];
}

string Phone::LastRecived() const
{
	return recived[countRec - 1];
}

void Phone::ListCalles() const
{
	for (int i = 0; i < countCall; i++)
		cout << called[i] << endl;
}

void Phone::ListReciveds() const
{
	for (int i = 0; i < countRec; i++)
		cout << recived[i] << endl;
}
