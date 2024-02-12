#pragma once
namespace 	CLRStack {
	using namespace System;
	ref class MyStackElem {
	public:
		MyStackElem() {
			this->data = nullptr;
			this->next = nullptr;
		};
		MyStackElem(String^ s) {
			this->data = s;
			this->next = nullptr;
		}
		MyStackElem(String^ s, MyStackElem^ newElem) {
			this->data = s;
			this->next = newElem;
		}
		String^ data;
		MyStackElem^ next;
	};
	ref class MyStack
	{
	public:
		MyStackElem^ elem = nullptr;
		void push(String^ s);
		String^ pop();
	};


}