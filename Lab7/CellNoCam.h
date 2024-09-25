#pragma once
#include "Phone.h"
#include <map>
class CellNoCam : public Phone
{
private:
	string clock;
	map<string, string> contacts;

public:
	CellNoCam(string);
	void SetClock(string);
	string GetClock() const;
	void SaveContact(const string& name, const string& phoneNumber);
	void DeleteContact(const string& name);
	void DisplayContacts() const;
};

