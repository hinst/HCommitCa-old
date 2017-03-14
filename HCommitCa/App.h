#pragma once

#include "h_http_sync_server.hpp"

namespace hca { namespace App {

using namespace std;

class App {

public: 
	string dir = "";

	void run() {
		boost::asio::ip::tcp::endpoint endpoint{boost::asio::ip::address::from_string("0.0.0.0"), 8080};
		beast::http::http_sync_server server(endpoint, this->getWebDir());
	}

	string getWebDir() {
		return dir + "\\webFiles";
	}

};

}}