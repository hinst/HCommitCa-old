#pragma once

#include "include.h"

namespace hca { namespace App {

using namespace std;

class App {

public: 
	string dir = "";
    shared_ptr<WebServer> server;

	void run() {
		server = make_shared<WebServer>();
		server->start();
		beast::test::sig_wait();
		server->stop();
	}

	string getWebDir() {
		return dir + "\\webFiles";
	}

};

}}