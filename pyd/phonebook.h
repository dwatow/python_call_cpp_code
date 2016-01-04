#include <string>
#include <map>

class Persion
{
	std::string m_Name;
	std::string m_HomeNumber;
public:
	Persion();
	explicit Persion(const std::string &name);
	virtual ~Persion();
	void SetName(const std::string &name);
	std::string GetName() const;
	void SetHomeNumber(const std::string &number);
	std::string GetHomeNumber() const;
};

class PersionWithCell : public Persion
{
	std::string m_CellNumber;
public:
	PersionWithCell();
	explicit PersionWithCell(const std::string &name);
	void SetCellNumber(const std::string &number);
	std::string GetCellNumber() const;
};

class PhoneBook
{
	std::map<std::string, Persion*> m_PhoneBook;
public:
	int GetSize() const;
	void AddPerson(Persion *p);
	void RemovePersion(const std::string &name);
	Persion *FindPerison(const std::string &name);
};

