namespace hca { namespace Web {
	
class WebServer {
	
public:

	string address = "0.0.0.0";
	int port = 8080;
	shared_ptr<beast::http::http_sync_server> server;

	void start() {
		boost::asio::ip::tcp::endpoint endpoint{boost::asio::ip::address::from_string(address), port};
		beast::http::http_sync_server server(endpoint, "");
	}
};

}}