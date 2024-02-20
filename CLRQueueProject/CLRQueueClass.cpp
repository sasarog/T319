#include "CLRQueueClass.h"
	using namespace System;

	CLRQueueProject::CLRQueueData::CLRQueueData()
	{
		this->age = -1;
		this->name = nullptr;
		this->next = nullptr;
	}

	CLRQueueProject::CLRQueueData::CLRQueueData(String^ n, int a)
	{
		this->name = n;
		this->age = a;
		this->next = nullptr;
	}

	String^ CLRQueueProject::CLRQueueData::GetData()
	{
		return
			"NAME: " + this->name +
			" AGE: " + this->age.ToString();
	}


	bool CLRQueueProject::CLRQueueClass::IsEmpty()
	{
		return this->current == nullptr;
	}
	CLRQueueProject::CLRQueueClass::CLRQueueClass()
	{
		
	}
	void CLRQueueProject::CLRQueueClass::Push(String^ n, int a) {
		if (this->IsEmpty()) {
			this->current = gcnew CLRQueueData(n, a);
		}
		CLRQueueData^ tmp = this->current;
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}
		tmp->next = gcnew  CLRQueueData(n, a);

	}

	String^ CLRQueueProject::CLRQueueClass::Pop() {
		if (this->IsEmpty()) {
			throw gcnew Exception("Очередь пуста");
		}
		String^ toReturn = current->GetData();
		this->current = this->current->next;
		return toReturn;
	}

