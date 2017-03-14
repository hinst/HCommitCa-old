#include <stdio.h>
#include <string>
#include "App.h"

using namespace std;
using namespace hca::App;

int main(int argc, char *argv[])
{
	printf("[STARTING...]\n");
	App app;
	app.dir = string(argv[0]);
	return 0;
}
