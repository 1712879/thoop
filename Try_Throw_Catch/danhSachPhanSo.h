#ifndef __DANHSACHPHANSO_H__
#define __DANHSACHPHANSO_H__
#include"phanSo.h"
#include<list>
#include<fstream>
#pragma once
class danhSachPhanSo : public phanSo
{
private:
	list<phanSo> dsPhanSo;
public:
	danhSachPhanSo();
	~danhSachPhanSo();
	void docFile();
	void xuatDanhSach();
	void nhapDanhSach();
};

#endif