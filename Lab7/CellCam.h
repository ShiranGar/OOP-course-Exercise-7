#pragma once
#include "Phone.h"
#include "CellNoCam.h"
class CellCam : public CellNoCam
{
private:
	int countPics;
public:
	CellCam(string, int);
	void SetPics();
	int GetPics() const;
};

