#pragma once

#include "stdafx.h"
#include <string.h>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

class C_Record
{
public:
	C_Record();
	void setSKU(string sku) { SKU = sku; };
	void setItemDescription(string ID) { ItemDescription = ID; };
	void setAlternateSKU(string sku) { alternateSKU = sku; };
	void setQuantity(int qty = 0) { quantity = qty; };
	string getSKU() { return SKU; };
	string getItemDescription() { return ItemDescription; };
	string getAlternateSKU() { return alternateSKU; };
	int getQuantity() { return quantity; };
	//Record(const Record &obj); // copy constuctor
	/*
	void setID(string id) { ID = id; };
	void setFirstName(string name) { firstName = name; };
	void setMiddleName(string name) { middleName = name; };
	void setLastName(string name) { lastName = name; };
	void setCompanyName(string name) { companyName = name; };
	void setHomePhone(string num) { homePhone = num; };
	void setOfficePhone(string num) { officePhone = num; };
	void setEmail(string name) { email = name; };
	void setMobilePhone(string num) { mobilePhone = num; };
	void setStreeAddress(string name) { streetAddress = name; };
	void setCity(string name) { city = name; };
	void setState(string name) { state = name; };
	void setZipCode(string num) { zipCode = num; };
	void setCountry(string name) { country = name; };
	//void setAffiliate(string);
	string getID() { return ID; };
	string getFirstName() { return firstName; };
	string getMiddleName() { return middleName; };
	string getLastName() { return lastName; };
	string getCompanyName() { return companyName; };
	string getHomePhone() { return homePhone; };
	string getOfficePhone() { return officePhone; };
	string getEmail() { return email; };
	string getMobilePhone() { return mobilePhone; };
	string getStreetAddress() { return streetAddress; };
	string getCity() { return city; };
	string getState() { return state; }
	string getZipCode() { return zipCode; };
	string getCountry() { return country; };
	*/
	bool operator!=(C_Record rhs);
	bool operator>(C_Record rhs);
	bool operator<(C_Record rhs);
	bool operator<=(C_Record rhs);
	bool operator>=(C_Record rhs);
	bool operator==(C_Record rhs);
	friend ostream& operator<<(ostream& out, C_Record& rhs);

	void clear();
	bool exactSearch(string);
	bool containsSearch(string);

private:
	string SKU;
	string ItemDescription;
	string alternateSKU;
	int quantity;
	/*
	string ID;
	string firstName;
	string middleName;
	string lastName;
	string companyName;
	string homePhone;
	string officePhone;
	string email;
	string mobilePhone;
	string streetAddress;
	string city;
	string state;
	string zipCode;
	string country;
	*/
protected:
};

