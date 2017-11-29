#pragma once


class ProductType {
private:
	char* kod;
	char* naziv;
	int vrsta;
public:
	ProductType();
	ProductType(char*,char*,int);
	~ProductType();
	ProductType(ProductType&);
	friend class ProductionRequest;
};