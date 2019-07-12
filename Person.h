#ifndef _PERSON_H_
#define _PERSON_H_

#include "iostream"
#include "string"
#include "Date.h"
using namespace std;

class Person
{
private:
	string m_LastName;
	string m_FirstName;
	string m_PhoneNo;
	string m_ID;
	Date m_DOB;
	string m_Gender;
public:
	Person()
	{
		m_LastName = "";
		m_FirstName = "";
		m_PhoneNo = "";
		m_ID = "";
		m_Gender = "";
	}
	Person(string lname, string name, string phone, string id, Date d, string gender)
	{
		m_LastName = lname;
		m_FirstName = name;
		m_PhoneNo = phone;
		m_ID = id;
		m_DOB = d;
		m_Gender = gender;
	}
};

#endif 