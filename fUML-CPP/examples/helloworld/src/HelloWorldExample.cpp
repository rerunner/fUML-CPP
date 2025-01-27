#include <string>

#include "HelloWorldExampleEnvironment.h"

//#include <iostream>
//using namespace std;

int main() {
	std::string mainString("main");
	examples::HelloWorldExample::HelloWorldExampleEnvironment::Instance()->execute(mainString);

	return 0;
}
