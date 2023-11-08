#pragma once
#include <iostream>
using namespace std;


class HandlerClass {
protected:
	HandlerClass* next;

public:
	void setHandler(HandlerClass* next) {
		this->next = next;
	}

	HandlerClass() {}

	HandlerClass(HandlerClass* next) : next(next) {}

	virtual void handleRegistration() = 0;
};

