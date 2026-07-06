#pragma once

#include "Date.h"

class Period
{
private:

	Date _startDate;
	Date _endDate;

	Period(Date startDate, Date endDate)
	{
		_startDate = startDate;
		_endDate = endDate;
	}

	void setStartDate(Date startDate)
	{
		_startDate = startDate;
	}

	Date getStartDate()
	{
		return _startDate;
	}

	void setEndDate(Date endDate)
	{
		_endDate = endDate;
	}

	Date getEndDate()
	{
		return _endDate;
	}

	__declspec(property(put = setStartDate, get = getStartDate)) Date startDate;
	__declspec(property(put = setEndDate, get = getEndDate)) Date endDate;

	static bool isOverlap(Period period1, Period period2)
	{
		if (Date::compareDates(period2.endDate, period1.startDate) == Date::enDateCompare::Before || Date::compareDates(period2.startDate, period1.endDate) == Date::enDateCompare::After)
			return false;
		else
			return true;
	}

	static bool isDateInPeriod(Date date, Period period)
	{
		return !(date.before(period.startDate) || date.after(period.endDate));
	}

	bool isDateInPeriod(Date date)
	{
		return isDateInPeriod(date, *this);
	}

	bool isOverLapWith(Period period)
	{
		return isOverlap(*this, period);
	}

	void Print()
	{
		cout << "Period Start: ";
		startDate.print();
		cout << "Period End: ";
		endDate.print();
	}

};
