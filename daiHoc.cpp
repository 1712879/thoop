#include "daiHoc.h"
#define N 50
#define MAX 10

khoa::khoa()
{
}

khoa::~khoa()
{
}

sinhVien::sinhVien()
{
}

sinhVien::~sinhVien()
{
}

mHoc::mHoc()
{
}

mHoc::~mHoc()
{
}

hPhan::hPhan()
{
}

hPhan::~hPhan()
{
}

ketQua::ketQua()
{
}

ketQua::~ketQua()
{
}

dKien::dKien()
{
}

dKien::~dKien()
{
}

daiHoc::daiHoc()
{
}

daiHoc::~daiHoc()
{
}

void khoa::nhapKhoa(){
	fflush(stdin);
	cout << "Nhap Ma Khoa: ";
	getline(cin, this->maKhoa);

	fflush(stdin);
	cout << "Nhap Ten Khoa: ";
	getline(cin, this->tenKhoa);

	cout << "Nhap Nam Thanh Lap: ";
	cin >> this->namThanhLap;

}

void khoa::xuatKhoa(){
	cout << "Ma Khoa: " << this->maKhoa << endl;
	cout << "Ten Khoa: " << this->tenKhoa << endl;
	cout << "Nhap Nam Thanh Lap: " << this->namThanhLap << endl;
}

string khoa::getMaKhoa(){
	return this->maKhoa;
}

void khoa::setKhoa(string khoa){
	this->maKhoa = khoa;
}

void sinhVien::nhapThongTin(){
	fflush(stdin);
	cout << "MSSV: ";
	getline(cin, this->maSV);

	fflush(stdin);
	cout << "Ho & Ten Sinh Vien: ";
	getline(cin, this->tenSV);

	fflush(stdin);
	cout << "Ma Khoa: ";
	getline(cin, this->maKhoa);

	fflush(stdin);
	cout << "Nam: ";
	cin >> this->nam;
	
	
}

void sinhVien::xuatThongTin(){
	cout << "MSSV: " << maSV << endl;
	cout << "Ho Ten SV: " << tenSV << endl;
	cout << "Ma Khoa: " << maKhoa << endl;
	cout << "Nam: " << nam << endl;
}

string sinhVien::getMaSV(){
	return this->maSV;
}

string sinhVien::getTenSV(){
	return this->tenSV;
}

void sinhVien::setMaSV(string maSV){
	this->maSV = maSV;
}

void sinhVien::setTen(string ten){
	this->tenSV = ten;
}

void mHoc::nhapMonHoc(){
	fflush(stdin);
	cout << "Nhap Ma MH: ";
	getline(cin, this->maMH);

	fflush(stdin);
	cout << "Ma Khoa: ";
	getline(cin, this->maKhoa);

	fflush(stdin);
	cout << "Nhap Ten MH: ";
	getline(cin, this->tenMH);

	fflush(stdin);
	cout << "Nhap Tin Chi: ";
	cin >> this->tinChi;
}

void mHoc::xuatMonHoc(){
	cout << "Ma MH: " << this->maMH << endl;
	cout << "Ma Khoa: " << maKhoa << endl;
	cout << "Ten MH: " << this->tenMH << endl;
	cout << "Tin Chi: " << this->tinChi << endl;
}

string mHoc::getMaMonHoc(){
	return maMH;
}

string mHoc::getTenMonHoc(){
	return tenMH;
}

int mHoc::getTinChi(){
	return tinChi;
}

void mHoc::setMaMonHoc(string maMH){
	this->maMH = maMH;
}

void mHoc::setTenMonHoc(string tenMH){
	this->tenMH = tenMH;
}

void mHoc::setTinChi(int tinChi){
	this->tinChi = tinChi;
}

void hPhan::nhapHocPhan(){
	fflush(stdin);
	cout << "Nhap Ma HP: ";
	getline(cin, this->maHP);

	fflush(stdin);
	cout << "Nhap Ma MH: ";
	getline(cin, this->maMH);

	cout << "Nhap Hoc Ky: ";
	cin >> this->hocKy;

	cout << "Nhap Nam Hoc: ";
	cin >> this->nam;

	fflush(stdin);
	cout << "Nhap GV: ";
	getline(cin, this->gV);
}

void hPhan::xuatHocPhan(){
	cout << "Ma HP: " << this->maHP << endl;
	cout << "Ma MH: " << this->maMH << endl;
	cout << "Hoc Ky: " << this->hocKy << endl;
	cout << "Nam: " << this->nam << endl;
	cout << "GV: " << this->gV << endl;
}

string hPhan::getMaHP(){
	return maHP;
}

int hPhan::getHocKy(){
	return hocKy;
}

int hPhan::getNamHoc(){
	return nam;
}

void hPhan::setMaHP(string maHP){
	this->maHP = maHP;
}

void hPhan::setHocKy(int hocKy){
	this->hocKy = hocKy;
}

void hPhan::setNamHoc(int nam){
	this->nam = nam;
}

void ketQua::nhapKetQua(){
	fflush(stdin);
	cout << "MSSV: ";
	getline(cin, this->maSV);

	fflush(stdin);
	cout << "Nhap Ma HP: ";
	getline(cin, this->maHP);

	cout << "Nhap Diem: ";
	cin >> this->diem;
}

void ketQua::xuatKetQua(){
	cout << "MSSV: " << maSV
		<< setw(15) << "Ma HP: " << this->maHP
		<< setw(15) << "Diem: " << this->diem << endl;
}

int ketQua::getDiem(){
	return diem;
}

void ketQua::setDiem(int diem){
	this->diem = diem;
}

void dKien::nhapDieuKien(){
	mHoc a;
	for (int i = 0; i < 2; i++)
	{
		a.nhapMonHoc();
		dkien.push_back(a);
	}
}

void dKien::xuatDieuKien(){
	list<mHoc> ::iterator i = dkien.begin();
	for (i; i != dkien.end(); i++)
	{
		i->xuatMonHoc();
	}
}

void daiHoc::menu(){
	cout << "0. Thoat" << endl;
	cout << "1. Nhap Thong Tin Khoa" << endl;
	cout << "2. Nhap Thong Tin Sinh Vien" << endl;
	cout << "3. Nhap Thong Tin Mon Hoc" << endl;
	cout << "4. Nhap Thong Tin Hoc Phan" << endl;
	cout << "5. Nhap Thong Tin Ket Qua" << endl;
	cout << "6. Nhap Thong Tin Dieu Kien" << endl;
	cout << "7. Tra Bang Diem Theo MSSV" << endl;
	cout << "8. In Danh Sach Khen Thuong" << endl;
	cout << "Nhap cong viec: ";
}

void daiHoc::xuatBangDiem(string mssv){
	list<ketQua>::iterator i = ketQuaDH.begin();
	list<sinhVien>::iterator j = sinhVienDH.begin();
	string ten; string maKhoa;
	while (j != sinhVienDH.end())
	{
		if (j->getMaSV() == mssv)
		{
			ten = j->getTenSV();
			maKhoa = j->getMaKhoa();
			break;
		}
		j++;
	}
	cout << "\t--- BANG DIEM SINH VIEN ---" << endl;
	cout << "Ho Ten: " << ten << "\t\t" << "Ma Khoa: " << maKhoa << endl;
	cout << setw(15) << "Ma HP"
		<< setw(15) << "Diem" << endl;
	for (i; i != ketQuaDH.end(); i++)
	{
		if (i->getMaSV() == mssv)
		{
			cout<< setw(15) << i->getMaHP()
				<< setw(15) << i->getDiem() << endl;
		}

	}
}

void hoanVi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void hoanViChuoi(string &a, string &b){
	string t = a;
	a = b;
	b = t;
}

void daiHoc::xuatDanhSachKhenThuong(int namHoc){

	list<sinhVien> danhSachSV;
	list<ketQua> danhSachKQ;
	list<ketQua>::iterator i = ketQuaDH.begin();
	list<hPhan>::iterator j = hocPhanDH.begin();
	
	int tongDiem[N] = { 0 };
	string doiTuong[N]; int soLuong = 0; 

	for (j; j != hocPhanDH.end(); j++)
	{
		bool flag = true;
		if (j->getNamHoc() == namHoc)
		{
			sinhVien a;
			a.setMaSV(i->getMaSV());
			list<sinhVien>::iterator k = sinhVienDH.begin();
			while (k != sinhVienDH.end())
			{
				if (i->getMaSV() == k->getMaSV())
				{
					a.setTen(k->getTenSV());
					break;
				}
				k++;
			}
			danhSachSV.push_back(a);

			for (int cnt = 0; cnt < soLuong; cnt++)
			{
				if (i->getMaSV() == doiTuong[cnt])
				{
					flag = false;
					break;
				}
			}

			if (flag)
			{
				doiTuong[soLuong] = i->getMaSV();
				soLuong++;
			}

			ketQua kq;
			kq.setMaSV(i->getMaSV());
			kq.setDiem(i->getDiem());
			kq.setMaHP(j->getMaHP());
			danhSachKQ.push_back(kq);
		}
		i++;
	}

	
	list<sinhVien>::iterator t = danhSachSV.begin();
	list<ketQua>::iterator u = danhSachKQ.begin();
	
	while (t != danhSachSV.end())
	{
		for (int m = 0; m < soLuong; m++)
		{
			if (doiTuong[m] == t->getMaSV())
			{
				tongDiem[m] += u->getDiem();
				break;
			}
		}
		t++; u++;
	}
 //-----------------------------
	int idMax;
	for (int dem = 0; dem < soLuong - 1; dem++)
	{
		idMax = dem;
		for (int dem1 = dem + 1; dem1 < soLuong; dem1++)
		{
			if (tongDiem[dem1] > tongDiem[idMax])
			{
				idMax = dem1;
			}
		}
		hoanVi(tongDiem[dem], tongDiem[idMax]);
		hoanViChuoi(doiTuong[dem], doiTuong[idMax]);
	}
//---------------------------------------------
	string sTenSV; int nDanhSachKhenThuong;
	cout << "--- DANH SACH SINH VIEN KHEN THUONG NAM HOC " << namHoc << " ---"<<endl;
	cout << setw(15) << "MSSV" 
		<< setw(15) << "Ho Ten"
		<< setw(15) << "Tong Diem" << endl;

	if (soLuong > 10)
	{
		nDanhSachKhenThuong = 10;
	}
		for (int m = 0; m < nDanhSachKhenThuong; m++)
		{
			list<sinhVien>::iterator v = danhSachSV.begin();
			while (v != danhSachSV.end())
			{
				if (v->getMaSV() == doiTuong[m])
				{
					sTenSV = v->getTenSV();
					break;
				}
				v++;
			}

			cout << setw(15) << doiTuong[m]
				<< setw(15) << sTenSV
				<< setw(15) << tongDiem[m] << endl;
		}
}

void daiHoc::quanLiSinhVien(){
	int n, nam; string s;
	do
	{
		menu();
		cin >> n;
		system("cls");
		switch (n)
		{
		case 1:
			cout << "Nhap So Luong Khoa: "; cin >> nKhoa;
			for (int i = 0; i < nKhoa; i++)
			{
				khoa a;
				a.nhapKhoa();
				khoaDH.push_back(a);
			}
			system("cls");
			break;
		case 2:
			cout << "Nhap So Luong Sinh Vien: "; cin >> nSinhVien;
			for (int i = 0; i < nSinhVien; i++)
			{
				sinhVien a;
				a.nhapThongTin();
				sinhVienDH.push_back(a);
			}
			system("cls");
			break;
		case 3:
			cout << "Nhap So Luong Mon Hoc: "; cin >> nMonHoc;
			for (int i = 0; i < nMonHoc; i++)
			{
				mHoc a;
				a.nhapMonHoc();
				monHocDH.push_back(a);
			}
			system("cls");
			break;
		case 4:
			cout << "Nhap So Luong Hoc Phan: "; cin >> nHocPhan;
			for (int i = 0; i < nHocPhan; i++)
			{
				hPhan a;
				a.nhapHocPhan();
				hocPhanDH.push_back(a);
			}
			system("cls");
			break;
		case 5:
			for (int i = 0; i < nHocPhan; i++)
			{
				ketQua a;
				a.nhapKetQua();
				ketQuaDH.push_back(a);
			}
			system("cls");
			break;
		case 6:
			dKienDH.nhapDieuKien();
			system("cls");
			break;
		case 7:
			fflush(stdin);
			cout << "Nhap MSSV: ";
			getline(cin, s);
			xuatBangDiem(s);

			cout << "\n(1. Tiep Tuc / 0. Thoat), nhap: ";
			cin >> n;
			system("cls");
			break;
		case 8:
			fflush(stdin);
			cout << "Nhap Nam Hoc: ";
			cin >> nam;
			xuatDanhSachKhenThuong(nam);

			cout << "\n(1. Tiep Tuc / 0. Thoat), nhap: ";
			cin >> n;
			system("cls");	
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (n != 0);

	
}

