#include "CellNoCam.h"
#include <iostream>
using namespace std;

CellNoCam::CellNoCam(string)
{
	SetClock(clock);
}

void CellNoCam::SetClock(string)
{
	this->clock = clock;
}

string CellNoCam::GetClock() const
{
	return this->clock;
}

void CellNoCam::SaveContact(const string& name, const string& phoneNumber)
{
	contacts[name] = phoneNumber;
}

void CellNoCam::DeleteContact(const string& name)
{
	contacts.erase(name);
}

void CellNoCam::DisplayContacts() const
{
	for (const auto& contact : contacts) {
		std::cout << contact.first << ": " << contact.second << std::endl;
	}
}
