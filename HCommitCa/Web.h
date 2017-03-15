#pragma once

namespace hca { namespace Web {

using namespace std;

typedef shared_ptr<beast::http::request<beast::http::string_body>> TRequest;
typedef shared_ptr<beast::http::response<beast::http::string_body>> TResponse;

}}