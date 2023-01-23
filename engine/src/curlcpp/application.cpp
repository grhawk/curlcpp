#include <iostream>
#include <Log.h>
#include <curl/curl.h>

#include "application.h"

namespace curlcpp {

  Application::Application() 
  {
    _LOG_CRITICAL("Logging is included!");
	_LOG_CRITICAL("ASDASDASD");
    std::cout << "Starting application!" << std::endl;
  }

  const char* Application::dummyFunction()
  {
	CURL *curl = curl_easy_init();
	if (curl) {
	  _LOG_TRACE("<<<<");
	  curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/todos/1");
	  curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, true);
//	  res = curl_easy_perform(curl);
	  //std::cout << curl_easy_strerror(res);
	  curl_easy_cleanup(curl);
	}
    return "Hello!";
  }

  Application::~Application() = default;
}
