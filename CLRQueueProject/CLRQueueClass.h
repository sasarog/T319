#pragma once

namespace CLRQueueProject {
	using namespace System;
	ref class CLRQueueData {

	public:
		CLRQueueData();
		CLRQueueData(String^ n, int a);
		String^ GetData();

		String^ name;
		int age;
		CLRQueueData^ next;
	};
	ref class CLRQueueClass
	{
	public:
		CLRQueueClass();
		void Push(String^ n, int a);
		String^ Pop();
		bool IsEmpty();
		CLRQueueData^ current;
	};


	


}
