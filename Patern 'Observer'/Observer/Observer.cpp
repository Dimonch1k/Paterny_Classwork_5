#include <iostream>
using namespace std;



#include "Publisher.h"
#include "ConcreteSubscribers.h"

int main()
{
    Subscriber* client1 = new ConcreteSubscribers("Client 1");
    Subscriber* client2 = new ConcreteSubscribers("Client 2");
    Subscriber* client3 = new ConcreteSubscribers("Client 3");
    Subscriber* client4 = new ConcreteSubscribers("Client 4");


    Publisher* publisher = new Publisher("Shop");
     
    publisher->addClient(client1);
    publisher->addClient(client2);
    publisher->addClient(client3);
    publisher->addClient(client4);


    cout << publisher->notify("Hello World, I'm from Ukraine") << "\n\n";
    cout << publisher->printClientsNotify() << "\n\n\n";
}