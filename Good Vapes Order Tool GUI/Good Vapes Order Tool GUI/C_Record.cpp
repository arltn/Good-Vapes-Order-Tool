#include "stdafx.h"
#include "C_Record.h"

C_Record::C_Record()
{
	SKU = "";
	ItemDescription = "";
	alternateSKU = "";
	quantity = 0;
}
/*
C_Record::C_Record(const C_Record &obj)
{
}
*/

void C_Record::clear()
{
	SKU = "";
	ItemDescription = "";
	alternateSKU = "";
	quantity = 0;
}

bool C_Record::operator!=(C_Record rhs)
{
	if (this->getSKU().compare(rhs.getSKU()))
		return true;
	return false;
}

bool C_Record::operator>(C_Record rhs)
{
	if (this->getSKU() > rhs.getSKU())
		return true;
	return false;
}

bool C_Record::operator<(C_Record rhs)
{
	if (this->getSKU() < rhs.getSKU())
		return true;
	return false;
}

bool C_Record::operator<=(C_Record rhs)
{
	if (this->getSKU() <= rhs.getSKU())
		return true;
	return false;
}

bool C_Record::operator>=(C_Record rhs)
{
	if (this->getSKU() >= rhs.getSKU())
		return true;
	return false;
}

bool C_Record::operator==(C_Record rhs)
{
	if (this->getSKU() != rhs.getSKU())
		return false;
	else
		return true;
}
ostream& operator<<(ostream & out, C_Record &rhs)
{
	/*
	out << rhs.getID() << endl;
	out << rhs.getFirstName() << endl;
	out << rhs.getMiddleName() << endl;
	out << rhs.getLastName() << endl;
	out << rhs.getCompanyName() << endl;
	out << rhs.getHomePhone() << endl;
	out << rhs.getOfficePhone() << endl;
	out << rhs.getEmail() << endl;
	out << rhs.getMobilePhone() << endl;
	out << rhs.getStreetAddress() << endl;
	out << rhs.getCity() << endl;
	out << rhs.getState() << endl;
	out << rhs.getZipCode() << endl;
	out << rhs.getCountry() << endl;
	//out << "Number of affiliates: " << rhs.affiliates.size() << endl;
	//out << "AFFILIATES: " << endl;
	for (unsigned int x = 0; x < rhs.affiliates.size(); x++)
	{
		out << rhs.affiliates[x].getName() << rhs.affiliates[x].getInfo() << endl;
	}
	out << "|" << endl;
	*/
	out << rhs.getSKU().c_str() << endl;
	out << rhs.getItemDescription().c_str() << endl;
	out << rhs.getAlternateSKU().c_str() << endl;
	out << rhs.getQuantity() << endl;

	return out;
};

bool C_Record::exactSearch(string str)
{
	if (SKU == str)
		return true;
	if (ItemDescription == str)
		return true;
	return false;
	/*
	if (ID == str)
		return true;
	if (firstName == str)
		return true;
	if (middleName == str)
		return true;
	if (lastName == str)
		return true;
	if (companyName == str)
		return true;
	if (homePhone == str)
		return true;
	if (officePhone == str)
		return true;
	if (email == str)
		return true;
	if (mobilePhone == str)
		return true;
	if (streetAddress == str)
		return true;
	if (city == str)
		return true;
	if (state == str)
		return true;
	if (zipCode == str)
		return true;
	if (country == str)
		return true;
	for (unsigned int x = 0; x < affiliates.size(); x++)
	{
		if (affiliates[x].exact(str))
			return true;
	}
	*/
	return false;
};

string convertUpper(string str)
{
	string returnString("");
	char convertChar;
	for (int x = 0; x < str.length(); x++)
	{
		convertChar = toupper(str.at(x));
		returnString += convertChar;
	}
	return returnString;
}

bool C_Record::containsSearch(string str)
{
	string str1;
	str1 = convertUpper(str);
	if (convertUpper(SKU).find(str1) != string::npos)
		return true;
	if (convertUpper(ItemDescription).find(str1) != string::npos)
		return true;
	/*
	if (convertUpper(ID).find(str1) != string::npos)
		return true;
	if (convertUpper(firstName).find(str1) != string::npos)
		return true;
	if (convertUpper(middleName).find(str1) != string::npos)
		return true;
	if (convertUpper(lastName).find(str1) != string::npos)
		return true;
	if (convertUpper(companyName).find(str1) != string::npos)
		return true;
	if (convertUpper(homePhone).find(str1) != string::npos)
		return true;
	if (convertUpper(officePhone).find(str1) != string::npos)
		return true;
	if (convertUpper(email).find(str1) != string::npos)
		return true;
	if (convertUpper(mobilePhone).find(str1) != string::npos)
		return true;
	if (convertUpper(streetAddress).find(str1) != string::npos)
		return true;
	if (convertUpper(city).find(str1) != string::npos)
		return true;
	if (convertUpper(state).find(str1) != string::npos)
		return true;
	if (convertUpper(zipCode).find(str1) != string::npos)
		return true;
	if (convertUpper(country).find(str1) != string::npos)
		return true;
	for (unsigned int x = 0; x < affiliates.size(); x++)
	{
		if (affiliates[x].contains(str))
			return true;
	}
	*/
	return false;
};
