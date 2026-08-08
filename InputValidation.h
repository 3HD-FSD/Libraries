#pragma once

#include <iostream>
#include "Date.h"
#include "Util.h"

using namespace std;

class InputValidation
{
public:
	static template <typename T> T isNumberBetween(T number, T from, T to)
	{
		if (from > to)
		{
			Util::swap(from, to);
		}
		return (number >= from && number <= to);
	}

	static bool isDateBetween(Date date, Date dateFrom, Date dateTo)
	{
		if (Date::isDate1AfterDate2(dateFrom, dateTo))
		{
			Date::swap(dateFrom, dateTo);
		}
		return !(date.before(dateFrom) || date.after(dateTo));
	}

	static template <typename T> T readNumber(string errorMessage = "Invalid number, enter again : ")
	{
		T number;
		while (!(cin >> number))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return number;
	}

	static template <typename T> T readNumberBetween(string errorMessage = "Invalid number, enter again : ", T from, T to)
	{
		T number = readNumber<T>();
		while (!isNumberBetween(number, from, to))
		{
			cout << errorMessage;
			number = readNumber<T>();
		}
		return number;
	}

	static bool isValidDate(Date date)
	{
		return date.isValid();
	}

	static bool isValidEmail(string email, string domainName = "@gmail.com")
	{
		int pos;
		if ((pos = email.find("@")) != std::string::npos)
		{
			email = email.substr(pos, domainName.length());
		}
		return (email == domainName);
	}
};

