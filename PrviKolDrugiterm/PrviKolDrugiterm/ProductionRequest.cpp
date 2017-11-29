#include"ProductionRequest.h"
#include<iostream>

ProductType* tip;
double kolicina;
int bomCount;
MaterialItem** bom;
double* koliko_kog;


ProductionRequest::ProductionRequest() {
	this->tip = new ProductType[];
	this->bom = new MaterialItem*[];
	this->bom[0] = new MaterialItem[];
	this->koliko_kog = new double[];
	this->kolicina = 0;
	this->bomCount = 0;
	this->tip = nullptr;
	this->bom = nullptr;
	this->koliko_kog = nullptr;
}

ProductionRequest::ProductionRequest(char* p,double k,int bc,MaterialItem** bom,double* kk) {
	this->tip->kod = new char[strlen(p)];
	this->bom = new MaterialItem*[];
	for(int i = 0;i<bc;i++)
	this->bom[i] = new MaterialItem[];
	this->koliko_kog = new double[];
	this->kolicina = 0;
	this->bomCount = 0;
}