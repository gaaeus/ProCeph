#include "Logger.hpp"

string _path;
string _filename;

void Logger::setPath(string path, string filename)
{
	path = _path;
	filename = _filename;
}

void Logger::LogToFile(string data)
{
	try
	{
		ofstream logFile;
		logFile.open ("example.txt");
		logFile << data << endl;
		logFile.close();
	}
	catch (const exception& e)
	{
		cout << e.what();
	}
}
		
void Logger::LogToConsole(string data)
{
	cout << data;
}
