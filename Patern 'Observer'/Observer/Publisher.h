#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ConcreteSubscribers.h"
#include "Subscriber.h"
class Publisher
{
private:
	string publisherName;
	vector<Subscriber*> subscribers;

public:
	Publisher(string name_) : publisherName(name_){}

	void addClient(Subscriber* client) {
		subscribers.push_back(client);
	}

	string notify(string message_)
	{
		string notify = "";
		for (int i = 0; i < subscribers.size(); i++)
		{
			notify += subscribers[i]->update(message_);
		}
		return notify;
	}

	string printClientsNotify()
	{
		string clientsNotify = "";
		for (int i = 0; i < subscribers.size(); i++)
		{
			clientsNotify += subscribers[i]->getSubscriberNotify();
		}
		return clientsNotify;
	}
};

