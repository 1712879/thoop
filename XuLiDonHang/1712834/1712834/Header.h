#ifndef __HEADER_H__
#define __HEADER_H__

#include<iostream>
#include<string>
#include<list>

using std::string;
using std::list;
using std::cout;
using std::cin;

class DH {
	int stt;
	std::string maDH;
	std::string maKH;
	std::string tenKH;
	std::string monAn;

public:
	string getMaDH();
	void nhap();
	virtual void xuat();
};

class DH_Online : public DH {

};

class DH_Offline : public DH {

};


template<class Type>
class Xuli{
	list<Type> queue;

public:
	void themDH(Type DH);	
	Type xuatDH();
	void huyDH(string);
	bool empty();
};

class XuliChung{
	Xuli<DH_Online> online;
	Xuli<DH_Offline> offline;
	int count;
public:
	XuliChung();
	void nhanDH(DH* donHang);
	void huyDH(std::string maDH);
	void layDH(list<DH*> donHang);
};

#endif