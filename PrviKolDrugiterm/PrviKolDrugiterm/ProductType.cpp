#include"ProductType.h"
#include<iostream>

ProductType::ProductType() {
	this->kod = new char[];
	this->kod = nullptr;
	this->naziv = new char[];
	this->naziv = nullptr;
	this->vrsta = 0;
}

ProductType::ProductType(char* a,char* b,int c) {
	this->kod = new char[strlen(a)];
	this->naziv = new char[strlen(b)];
	this->vrsta = c;
	for (int i = 0; i < strlen(this->kod); i++)
		this->kod[i] = a[i];
	for (int i = 0; i < strlen(this->naziv); i++)
		this->naziv[i] = b[i];
}

ProductType::ProductType(ProductType& p) {
	this->kod = new char[strlen(p.kod)];
	this->naziv = new char[strlen(p.naziv)];
	this->vrsta = p.vrsta;
	for (int i = 0; i < strlen(this->kod); i++)
		this->kod[i] = p.kod[i];
	for (int i = 0; i < strlen(this->naziv); i++)
		this->naziv[i] = p.naziv[i];
}

ProductType::~ProductType() {
	if (!this->kod)
		delete[] this->kod;
	if (!this->naziv)
		delete[] this->naziv;
}