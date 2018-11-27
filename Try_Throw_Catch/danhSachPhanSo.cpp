#include "danhSachPhanSo.h"


danhSachPhanSo::danhSachPhanSo()
{
}


danhSachPhanSo::~danhSachPhanSo()
{
}


void danhSachPhanSo::docFile(){
	ifstream fp("data.txt");
	ofstream ip("log.txt");
	string s; int t, m; phanSo a;
	if (!fp.is_open())
	{
		cout << "Unable to open file";
	}
	while (!fp.eof())
	{

		fp >> t;
		fp.seekg(1, ios::cur);
		fp >> m;
		try{
			if (m == 0)
			{
				throw "Mau So Bang 0 roi nhe";
			}
			else
			{
				a.setTu(t);
				a.setMau(m);
				dsPhanSo.push_back(a);
			}
		}
		catch (char* e){
			ip << t << "/" << m << " : Mau bang 0" << endl;
		}
	}
	
}

void danhSachPhanSo::xuatDanhSach(){
	list<phanSo>::iterator it = dsPhanSo.begin();
	for (it; it != dsPhanSo.end(); it++)
	{
		cout << it->getTu() << "/" << it->getMau() << endl;
	}
}
void danhSachPhanSo::nhapDanhSach(){
	phanSo a; int n;
	cout << "nhap so luong phan so: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		a.nhapPhanSo();
		dsPhanSo.push_back(a);
	}
}