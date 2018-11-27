#include "phanSo.h"


phanSo::phanSo()
{
}


phanSo::~phanSo()
{
}

void phanSo::setTu(int tua){

	this->tu = tua;
}
void phanSo::setMau(int mau){
	this->mau = mau;
}

int phanSo::getTu(){
	return this->tu;
}
int phanSo::getMau(){
	return this->mau;
}

int UCLN(int a, int b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (a != b)
		a > b ? a -= b : b -= a;
	return a;
}
void phanSo::rutgon()
{
	int iUCLN = UCLN(tu, mau);
	tu = tu / iUCLN;
	mau = mau / iUCLN;
}

void phanSo::xuatPhanSo()
{
	cout << tu << "/" << mau << endl;
}

void phanSo::nhapPhanSo(){
	cout << "Nhap Tu So: "; cin >> tu;
	cout << "Nhap Mau So: "; cin >> mau;
}