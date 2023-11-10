#pragma once
#include <iostream>
#include <string>
using namespace std;


#include "Subscriber.h"
class ConcreteSubscribers : public Subscriber
{
private:
	string message;
	string name;

public:
	ConcreteSubscribers(string name_) : name(name_){}

	string update(string text) override
	{
		this->message = text;
		return name + " has notified.\n";
	}

	string getSubscriberNotify()
	{
		return name + " has notify: \"" + message + "\"\n";
	}
};

