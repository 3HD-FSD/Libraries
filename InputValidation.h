#pragma once

#include <iostream>
#include "Date.h"
#include "Util.h"

using namespace std;

class InputValidation
{
public:
	static bool isNumberBetween(int number, int from, int to)
	{
		if (from > to)
		{
			Util::swap(from, to);
		}
		return (number >= from && number <= to);
	}

	static bool inNumberBetween(float number, float from, float to)
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

	static int readIntNumber(string errorMessage = "Invalid number, enter again : ")
	{
		int number;
		while (!(cin >> number))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return number;
	}

	static int readIntNumberBetween(string errorMessage = "Invalid number, enter again : ", int from, int to)
	{
		int number = readIntNumber();
		while (!isNumberBetween(number, from, to))
		{
			cout << errorMessage;
			number = readIntNumber();
		}
		return number;
	}

	static float readFloatNumber(string errorMessage = "Invalid number, enter again : ")
	{
		float number;
		while (!(cin >> number))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return number;
	}

	static float readFloatNumberBetween(string errorMessage = "Invalid number, enter again : ", float from, float to)
	{
		float number = readFloatNumber();
		while (!isNumberBetween(number, from, to))
		{
			cout << errorMessage;
			number = readFloatNumber();
		}
		return number;
	}

	static double readDoubleNumber(string errorMessage = "Invalid number, enter again : ")
	{
		double number;
		while (!(cin >> number))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return number;
	}

	static double readDoubleNumberBetween(string errorMessage = "Invalid number, enter again : ", double from, double to)
	{
		double number = readDoubleNumber();
		while (!isNumberBetween(number, from, to))
		{
			cout << errorMessage;
			number = readDoubleNumber();
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

