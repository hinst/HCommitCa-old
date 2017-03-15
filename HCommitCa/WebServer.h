#pragma once

#include "include.h"

namespace hca { namespace Web {
	
class WebServer {
	
public:

	string address = "0.0.0.0";
	int port = 8080;
	shared_ptr<beast::http::http_sync_server> server;

	void start() {
		boost::asio::ip::tcp::endpoint endpoint{boost::asio::ip::address::from_string(address), port};
		server = make_shared<beast::http::http_sync_server>(endpoint, "");
	}
	
	void stop() {
		this->server = nullptr;
	}

};

}}