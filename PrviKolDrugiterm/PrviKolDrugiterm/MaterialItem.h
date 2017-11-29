#pragma once

class MaterialItem {
private:
	char* kod;
	char* naziv;
	double shelfLife;
public:
	MaterialItem();
	MaterialItem(char*,char*,double);
	MaterialItem(MaterialItem&);
	~MaterialItem();
	friend class ProductionRequest;
};