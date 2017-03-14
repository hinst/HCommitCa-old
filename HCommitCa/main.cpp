#include <stdio.h>
#include <string>
#include <memory>
#include "h_http_sync_server.hpp"

#include "Web.h"
using namespace hca::Web;
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
