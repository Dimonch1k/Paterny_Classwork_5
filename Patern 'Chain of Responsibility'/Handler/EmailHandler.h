#pragma once
#include <iostream>
#include <string>
using namespace std;


#include "HandlerClass.h"
class EmailHandler : public HandlerClass
{
public:
	EmailHandler() : HandlerClass() {}

	EmailHandler(HandlerClass* next) : HandlerClass(next) {}

	void handleRegistration() override {		
		string email = "";
		cout << "Input your email: "; getline(cin, email);
		cout << "Email registration successfully.\n\n";

		if (next == nullptr) {
			cout << "Finish registration. Email handler\n\n";
			return;
		}
		next->handleRegistration();
	}

};

