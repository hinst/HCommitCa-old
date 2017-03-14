#pragma once

namespace hca { namespace Web {

typedef std::shared_ptr<beast::http::request<beast::http::string_body>> TRequest;
typedef std::shared_ptr<beast::http::response<beast::http::string_body>> TResponse;

}}