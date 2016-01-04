#include "phonebook.h"
#include <boost/python.hpp>

using namespace boost::python;

static std::string PrintPersion(const Persion &p)
{
	std::ostringstream stream;
	stream << p.GetName() << ": " << p.GetHomeNumber();
	return stream.str();
}

std::ostream &operator<<(std::ostream &os, const Persion &p)
{
	os << p.GetName() << ": " << p.GetHomeNumber();
	return os;
}

BOOST_PYTHON_MODULE(phonebook)
{
	class_<Persion>("Persion", init<>())
		.def(init<std::string>())
		.add_property("name", &Persion::GetName, &Persion::SetName)
		.add_property("home_number", &Persion::GetHomeNumber, &Persion::SetHomeNumber)
		.def("__str__", &PrintPersion)
		.def(self_ns::str(self))
		;

	//class_<PersionWithCell, bases<Persion>>("PersionWithCell")
	//	.def(init<std::string>())
	//	.add_property("cell_number", &PersionWithCell::GetCellNumber, &PersionWithCell::SetCellNumber)
	//	;

	class_<PhoneBook>("PhoneBook")
		.def("size", &PhoneBook::GetSize)
		.def("add_persion", &PhoneBook::AddPerson)
		.def("remove_persion", &PhoneBook::RemovePersion)
		.def("find_persion", &PhoneBook::FindPerison,
			return_value_policy<reference_existing_object>())
			;
}