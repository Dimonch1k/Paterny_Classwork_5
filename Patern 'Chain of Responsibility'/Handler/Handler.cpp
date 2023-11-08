#include <iostream>
using namespace std;


#include "HandlerClass.h"

#include "AgeHandler.h"
#include "UsernameHandler.h"
#include "EmailHandler.h"


int main()
{
	HandlerClass* age = new AgeHandler();
	HandlerClass* username = new UsernameHandler();
	HandlerClass* email = new EmailHandler();

	age->setHandler(username);
	username->setHandler(email);

	cout << "\tREGISTRATION!!!\n\n";
	age->handleRegistration();
}