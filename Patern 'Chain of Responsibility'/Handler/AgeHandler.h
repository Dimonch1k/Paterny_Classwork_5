#pragma once
#include <iostream>
using namespace std;


#include "HandlerClass.h"
class AgeHandler : public HandlerClass
{
public:
	AgeHandler() : HandlerClass() {}

	AgeHandler(HandlerClass* next) : HandlerClass(next) {}

	void handleRegistration() override {
		int age = 0;
		cout << "Input your age: "; cin >> age;
		if (6 < age && age < 100) 
		{
			cout << "Age registration successfully.\n\n";
		}
		else {
			cout << "Wrong age. Age handler.\n";
			return;
		}
		

		if (next == nullptr) {
			cout << "Finish registration. Age handler\n\n";
			return;
		}
		next->handleRegistration();
	}

};

