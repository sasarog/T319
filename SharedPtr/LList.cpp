#include "LList.h"



void LList::grab()
{
	if (this->next != nullptr) {
		this->data = this->next->data;
		this->next->grab();
	}
}

LList::LList()
{
	this->data = nullptr;
	this->next = nullptr;

}

LList::LList(string name, int age)
{

	this->data = make_shared<LLData>(name, age);
}

void LList::add(const string& name, int age)
{
	if (this->data == nullptr) {
		this->data = make_shared<LLData>(name, age);
		return;
	}
	if (this->next == nullptr) {
		this->next = make_shared<LList>(name, age);
	}
	else {
		this->next->add(name, age);
	}
}

void LList::print()
{
	if (this->data == nullptr) {
		return;
	}
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
void LList::deleteByName(const string& name)
{
	//���� ������ � ������ ����
	if (this->data != nullptr) {
		//���� ��� � ������ ���������
		if (this->data->name == name) {
			//������ ������ ����� �������� ��������
			this->grab();
			
		}
		//���� ��� �� �������
		else {
			//� ���� ��������� �������
			if (this->next != nullptr) {
				//������ ��� ������� �� �����
				this->next->deleteByName(name);
			}
		}
	}
	
}
shared_ptr<LLData> LList::findData(const string& s) {
	//���� ������ ����
	if (this->data != nullptr) {
		//���������, �� �� ���, ��� �� ������
		if (this->data->name == s) {
			//���� ��� ���������, ������������ ��������� �� ������
			return this->data;
		}
		//���� ��� �� ���������
		else {
			//���� ���� ��������� ������� � ������
			if (this->next != nullptr) {
				//������ � ���������� � ������ ����� ������
				return this->next->findData(s);
			}
		}
	}
	//���� ������� ������ �� �������
	//���������� ������
	else {
		return nullptr;
	}
}