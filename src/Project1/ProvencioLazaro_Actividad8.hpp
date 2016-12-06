#include <exception>
#include <iostream>
#include <string>
#include <map>

using namespace std;

/*typedef std::map<Hora, std::string> innerMap;
typedef std::map<Fecha, std::string, innerMap> nestedMap;

std::map<Fecha, std::map <int, std::string>> mFecha;
std::map<Hora, std::string> mHora;*/

class Agenda
{
public:
	int p;

	Agenda();
	~Agenda();


private:
	typedef std::map<Hora, std::string> innerMap;
	typedef std::map<Fecha, std::string, innerMap> nestedMap;

	void insertarEvento(Fecha&, Hora&, std::string&);
	//void eventosDia(const Fecha&fecha);
	
};

Agenda::Agenda()
{

}

Agenda::~Agenda() 
{

}

//void Agenda::insertarEvento(const Fecha & fecha, const Hora & hora, const std::string & descripcion)
{

}



class Fecha 
{
private:
	int day, month, year;
	std::string mFecha;

	Fecha(int nDay, int nMonth, int nYear) :day(nDay), month(nMonth), year(nYear) 
	{

	}
	
public:
	bool operator==(const Fecha & p) const;
	bool operator<(const Fecha & p) const;

};

class Hora 
{
private:
	int hour, minute;
	std::string mHora;

	Hora(int nHour, int nMinute) :hour(nHour), minute(nMinute)
	{

	}
	
public:
	bool operator==(const Hora & p) const;

	bool operator<(const Hora & p) const;

};


Hora::Hora(const Hora &p)
{
	*this = p;
}

Fecha::Fecha(const Fecha &p) 
{
	*this = p;
}

// Overload Operators
bool Hora::operator == (const Hora &p) const
{
	return this->hour == p.hour && this->minute == p.minute;
}

bool Hora::operator < (const Hora &p) const 
{
	if ((this->hour < p.hour) || (this->hour >= p.hour && this->minute < p.minute))
	{
		return this->hour && this->minute; 
	}
}

bool Fecha::operator == (const Fecha &p) const
{
	return this->day == p.day && this->month == p.month && this->year == p.year;
}

bool Fecha::operator < (const Fecha &p) const 
{
	if ((this->year < p.year) || (this->year >= p.year && this->month < p.month) || (this->year >= p.year && this->month >= p.month && this->day < p.day))
	{
		return this->year && this->month && this->day;
	}
}





int main() 
{

}

