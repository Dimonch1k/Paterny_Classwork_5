#pragma once
#include <iostream>
using namespace std;


class Subscriber
{
public:
	virtual string update(string text) = 0;
	virtual string getSubscriberNotify() = 0;
};

