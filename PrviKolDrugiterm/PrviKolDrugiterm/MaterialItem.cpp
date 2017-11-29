#include"MaterialItem.h"
#include<iostream>

MaterialItem::MaterialItem() {
	this->kod = new char[];
	this->kod = nullptr;
	this->naziv = new char[];
	this->naziv = nullptr;
	this->shelfLife = 0;
}

MaterialItem::MaterialItem(char* a,char* b,double c) {
	this->kod = new char[strlen(a)];
	this->naziv = new char[strlen(b)];
	this->shelfLife = c;
	for (int i = 0; i < strlen(this->kod); i++)
		this->kod[i] = a[i];
	for (int i = 0; i < strlen(this->naziv); i++)
		this->naziv[i] = b[i];
}

MaterialItem::MaterialItem(MaterialItem& m) {
	this->kod = new char[strlen(m.kod)];
	this->naziv = new char[strlen(m.naziv)];
	this->shelfLife = m.shelfLife;
	for (int i = 0; i < strlen(this->kod); i++)
		this->kod[i] = m.kod[i];
	for (int i = 0; i < strlen(this->naziv); i++)
		this->naziv[i] = m.naziv[i];
}

MaterialItem::~MaterialItem(){
	if (!this->kod)
		delete[] this->kod;
	if (!this->naziv)
		delete[] this->naziv;
}