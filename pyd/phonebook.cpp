#include "phonebook.h"

Persion::Persion():
m_Name(""), m_HomeNumber("")
{}

Persion::Persion(const std::string &name):
m_Name(name), m_HomeNumber("")
{}

void Persion::SetName(const std::string &name)
{
	m_Name = name;
}

std::string Persion::GetName() const
{
	return m_Name;
}

void Persion::SetHomeNumber(const std::string &number)
{
	m_HomeNumber = number;
}

std::string Persion::GetHomeNumber() const
{
	return m_HomeNumber;
}

Persion::~Persion()
{

}


int PhoneBook::GetSize() const
{
	return (int)m_PhoneBook.size();
}
void PhoneBook::AddPerson(Persion *p)
{
	m_PhoneBook[p->GetName()] = p;
}

void PhoneBook::RemovePersion(const std::string &name)
{
	m_PhoneBook.erase(name);
}

Persion *PhoneBook::FindPerison(const std::string &name)
{
	return m_PhoneBook[name];
}

void PersionWithCell::SetCellNumber(const std::string &number)
{
	m_CellNumber = number;
}

std::string PersionWithCell::GetCellNumber() const
{
	return m_CellNumber;
}

PersionWithCell::PersionWithCell():m_CellNumber(""), Persion()
{}

PersionWithCell::PersionWithCell(const std::string &name):m_CellNumber(""), Persion(name)
{}