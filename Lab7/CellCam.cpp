#include "CellCam.h"
#include <iostream>
using namespace std;

CellCam::CellCam(string clock, int count) :CellNoCam(clock)
{
	this->countPics = (count > 0) ? count : 0;
}
void CellCam::SetPics()
{
	this->countPics++;
	cout << "make pictures\n";
}

int CellCam::GetPics() const
{
	return this->countPics;
}
