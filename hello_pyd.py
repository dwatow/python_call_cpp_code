import debug.phonebook as phonebook
'''
book = phonebook.PhoneBook()

p = phonebook.Persion()
p.name = "Chris"
p.home_number = '(07)8315846'
book.add_persion(p)

p = phonebook.Persion('Mary')
#p.name = 'Mary'
p.home_number = '(06)2689062'
book.add_persion(p)

print('No. of contacts =', book.size())
print(book.find_persion('Mary').home_number)
print(p)

print('--------')

import debug.phonebook as phonebook
p = phonebook.Persion('Mary')
print(p)
p.home_number = '(06)2689062'
print(p)


def persion_str(self):
	return "Name: %s\nHome: %s" % (self.name, self.home_number)

phonebook.Persion.__str__ = persion_str
p = phonebook.Persion()
p.name = "Chris"
p.home_number = "(07) 8315846"
print (p)
'''
book = phonebook.PhoneBook()

class PyPersionWithCell(phonebook.Persion):
	def get_cell_number(self):
		return self.cell
	def set_cell_number(self, n):
		cell = n
	celll_number = property(get_cell_number, set_cell_number)

p = PyPersionWithCell()
p.name = 'Martin'
p.home_number = '(123) 456-7890'
p.celll_number = '(123) 097-2134'
p2 = book.find_persion('Martin')
print(p2)