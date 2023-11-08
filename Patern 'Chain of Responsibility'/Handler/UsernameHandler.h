#pragma once
#include <iostream>
#include <string>
using namespace std;


#include "HandlerClass.h"
class UsernameHandler : public HandlerClass
{
public:
	UsernameHandler() : HandlerClass() {}

	UsernameHandler(HandlerClass* next) : HandlerClass(next) {}

	void handleRegistration() override {
		
		string name = "";
		cin.ignore();
		cout << "Input your name: "; getline(cin, name);
		cout << "Username registration successfully.\n\n";

		if (next == nullptr) {
			cout << "Finish registration. Username registration\n";
			return;
		}
		next->handleRegistration();
	}

};

