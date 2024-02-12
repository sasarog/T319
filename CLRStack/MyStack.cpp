#include "MyStack.h"
using namespace System;

void CLRStack::MyStack::push(String^ s)
{
	if (s != "") {
		this->elem = gcnew MyStackElem(s, this->elem);
	}
}

String^ CLRStack::MyStack::pop()
{
	if (this->elem == nullptr) {
		throw gcnew Exception("���� ����");
	}
	String^ toReturn = this->elem->data;
	this->elem = this->elem->next;
	return toReturn;
}
