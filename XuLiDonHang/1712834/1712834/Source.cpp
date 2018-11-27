#include"Header.h"

void DH::nhap(){
	cout << "Nhap stt don hang: ";
	cin >> stt;
	cout << "Nhap ma don hang: ";
	std::getline(cin >> std::ws, maDH);
	cout << "Nhap ma khach hang: ";
	std::getline(cin >> std::ws, maKH);
	cout << "Nhap ten KH: ";
	std::getline(cin >> std::ws, tenKH);
	cout << "Nhap mon an: ";
	std::getline(cin >> std::ws, monAn);
}

void DH::xuat(){
	cout << "STT: " << stt << '\n';
	cout << "Ma don hang: " << maDH << '\n';
	cout << "Ma khach hang: " << maKH << '\n';
	cout << "Ten khach hang: " << tenKH << '\n';
	cout << "Mon an: " << monAn << '\n';
}

string DH::getMaDH(){
	return maDH;
}

template<class Type>
void Xuli<Type>::themDH(Type DH){
	queue.push_back(newDH);
}

template<class Type> 
Type Xuli<Type>::xuatDH(){
	Type temp = queue.front();
	queue.pop_front();
}

template<>
void Xuli<DH_Online>::huyDH(string maDH){
	for (auto i = queue.begin(); i != queue.end(); i++){
		if (i->getMaDH() == maDH){
			queue.erase(i);
		}
	}
}

template<>
void Xuli<DH_Offline>::huyDH(string maDH){
	for (auto i = queue.begin(); i != queue.end(); i++){
		if (i->getMaDH() == maDH){
			queue.erase(i);
		}
	}
}

template<class Type>
bool Xuli<Type>::empty(){
	return queue.empty();
}

XuliChung::XuliChung() : count(0) {}

void XuliChung::nhanDH(DH* donHang){
	if (dynamic_cast<DH_Online*>(donHang))
		online.themDH(*dynamic_cast<DH_Online*>(donHang));
	else
		offline.themDH(*dynamic_cast<DH_Offline*>(donHang));
}

void XuliChung::huyDH(string maDH){
	online.huyDH(maDH);
	offline.huyDH(maDH);
}

void XuliChung::layDH(list<DH*> donHang){
	for (int i = 0; i < 2 && online.empty(); i++)
		donHang.push_back(new DH_Online(online.xuatDH()));
	if (!offline.empty())
		donHang.push_back(new DH_Offline(offline.xuatDH()));
}