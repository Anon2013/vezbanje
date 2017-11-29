#pragma once
#include"ProductType.h";
#include"MaterialItem.h";

class ProductionRequest {
private:
	ProductType* tip;
	double kolicina;
	int bomCount;
	MaterialItem** bom;
	double* koliko_kog;
public:
	ProductionRequest();
	ProductionRequest(ProductType*,double,int,MaterialItem**,double*);
	ProductionRequest(ProductionRequest&);
	~ProductionRequest();
	friend class ProductType;
};