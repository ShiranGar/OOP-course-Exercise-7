#include <iostream>
#include <string>
using namespace std;
#include "Phone.h"
#include "CellNoCam.h"
#include "CellCam.h"
#include "Phone.h"

int main() {
	Phone rph;
	rph.NowCall("02-6543217");
	rph.NowCall("02-5432145");
	cout << "Last calles: " << rph.LastCalled() << endl;
	rph.ListCalles();
	CellNoCam ct01("12:08:00");
	ct01.NowCall("052-6664455");
	ct01.NowCall("052-5656565");
	cout << "Last calles: " << ct01.LastCalled() << endl;
	cout << "Clock: " << ct01.GetClock() << "\n";
	ct01.ListCalles();
	CellCam ct02("14:10:40", 2);
	ct02.NowCall("054-2224455");
	ct02.NowCall("054-3236565");
	cout << "Last calles: " << ct02.LastCalled() << endl;
	cout << "Clock: " << ct02.GetClock() << endl;
	ct02.SetPics();
	ct02.SetPics();
	ct02.SetPics();
	cout << "pictures: " << ct02.GetPics() << "\n";
	ct02.ListCalles();
	return 0;
}