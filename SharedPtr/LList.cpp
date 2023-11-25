#include "LList.h"

LList::LList()
{
}

LList::LList(string name, int age)
{

	this->data = make_shared<LLData>(name, age);
}

void LList::add(const string& name, int age)
{
	if (this->next == nullptr) {
		this->next = make_shared<LList>(name, age);
	}
	else {
		this->next->add(name, age);
	}
}

void LList::print()
{
	this->data->printData();
	if (this->next != nullptr) {
		this->next->print();
	}
}

void LList::deleteTailElem()
{
	if (this->next != nullptr) {
		if (this->next->next == nullptr) {
			this->next = nullptr;
		}
		else {
			this->next->deleteTailElem();
		}
	}
}

void LList::deleteByIndex(int index)
{
	if (this->next == nullptr && index > 0) {
		return;
	}
	if (index != 1) {
		this->next->deleteByIndex(index - 1);
	}
	else {
		this->next = this->next->next;
	}

}
