#ifndef __DAIHOC_H__
#define __DAIHOC_H__


#pragma once
#include<iostream>
#include<string>
#include<list>
#include <windows.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;


class khoa
{
protected:
	string maKhoa;
private:
	string tenKhoa;
	int namThanhLap;
public:
	khoa();
	~khoa();

	void nhapKhoa();
	void xuatKhoa();

	string getMaKhoa();
	void setKhoa(string khoa);
};

class sinhVien : public khoa
{
protected:
	string maSV;
	
private:
	string tenSV;
	int nam;
public:
	sinhVien();
	~sinhVien();

	void nhapThongTin();
	void xuatThongTin();

	string getMaSV();
	string getTenSV();

	void setMaSV(string maSV);
	void setTen(string ten);
};

class mHoc : public khoa
{
protected:
	string maMH;
private:
	string tenMH;
	int tinChi;
public:
	mHoc();
	~mHoc();

	void nhapMonHoc();
	void xuatMonHoc();

	string getMaMonHoc();
	string getTenMonHoc();
	int getTinChi();

	void setMaMonHoc(string maMH);
	void setTenMonHoc(string tenMH);
	void setTinChi(int tinChi);
};

class hPhan : public mHoc
{
protected:
	string maHP;
private:
	string gV;
	int hocKy, nam;
public:
	hPhan();
	~hPhan();

	void nhapHocPhan();
	void xuatHocPhan();

	string getMaHP();
	int getHocKy();
	int getNamHoc();

	void setMaHP(string maHP);
	void setHocKy(int hocKy);
	void setNamHoc(int nam);
	
};

class ketQua : public sinhVien, public hPhan
{
private:
	int diem;
public:
	ketQua();
	~ketQua();

	void nhapKetQua();
	void xuatKetQua();
	int getDiem();
	void setDiem(int diem);
};

class dKien : mHoc
{
private:
	list<mHoc> dkien;
public:
	dKien();
	~dKien();

	void nhapDieuKien();
	void xuatDieuKien();
};

class daiHoc
{
private:
	int nKhoa, nSinhVien, nMonHoc, nHocPhan;
	list<khoa> khoaDH;
	list<sinhVien> sinhVienDH;
	list<mHoc> monHocDH;
	list<hPhan> hocPhanDH;
	list<ketQua> ketQuaDH;
	dKien dKienDH;

public:
	daiHoc();
	~daiHoc();

	void menu();
	void quanLiSinhVien();
	void xuatBangDiem(string mssv);
	void xuatDanhSachKhenThuong(int namHoc);
};

#endif