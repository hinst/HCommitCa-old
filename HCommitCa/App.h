#pragma once

#include "http_sync_server.hpp"

namespace hca { namespace App {

using namespace std;

class App {
	
	string appDir = "";
	
	void run() {
		auto endpoint = boost::asio::ip::tcp::endpoint{boost::asio::ip::address::from_string("0.0.0.0"), 8080};
		auto server = beast::http::http_sync_server(endpoint);
	}
	
};

}}