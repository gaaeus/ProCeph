// Log.hpp
#pragma once
#ifndef LOG_HPP
#define LOG_HPP

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Logger {

	private:
		Logger() {} // Disallow creating an instance of this class

	public:

		static void LogToFile(string data);
		static void LogToConsole(string data);
		static void setPath(string path, string filename);
};

#endif // LOG_HPP