#ifndef __PHANSO_H__
#define __PHANSO_H__
#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;
#pragma once
class phanSo
{
private:
	int tu, mau;
public:
	phanSo();
	~phanSo();

	void setTu(int tua);
	void setMau(int mau);

	int getTu();
	int getMau();
	void xuatPhanSo();
	void rutgon();
	void nhapPhanSo();
};

#endif