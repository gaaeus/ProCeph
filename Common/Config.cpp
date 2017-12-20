#include "Config.hpp"

const string CONFIG_FILENAME = "config.properties";

// Getters/Setters
void Config::setAPP_NAME(string APP_NAME) {
	this->APP_NAME = APP_NAME;
}
string Config::getAPP_NAME() const {
	return this->APP_NAME;
}

void Config::setAPP_LANG(string APP_LANG) {
	this->APP_LANG = APP_LANG;
}
string Config::getAPP_LANG() const {
	return this->APP_LANG;
}

void Config::setAPP_DBFILE(string APP_DBFILE) {
	this->APP_DBFILE = APP_DBFILE;
}
string Config::getAPP_DBFILE() const {
	return this->APP_DBFILE;
}

void Config::setAPP_VERSION(string APP_VERSION) {
	this->APP_VERSION = APP_VERSION;
}
string Config::getAPP_VERSION() const {
	return this->APP_VERSION;
}

void Config::setAPP_LOGFILE(string APP_LOGFILE) {
	this->APP_LOGFILE = APP_LOGFILE;
}
string Config::getAPP_LOGFILE() const {
	return this->APP_LOGFILE;
}

void Config::setAPP_DEBUGFILE(string APP_DEBUGFILE) {
	this->APP_DEBUGFILE = APP_DEBUGFILE;
}
string Config::getAPP_DEBUGFILE() const {
	return this->APP_DEBUGFILE;
}
// End Getters/Setters

// Main Methods

void Config::process(string *configline_ptr)
{
	try {
		string configline = *configline_ptr;
		string delimiter = ":";
		
		int index = configline.find(delimiter);
		string config_param = configline.substr(0, index);
		
		if(config_param == "APP_LANG")
		{
			this->setAPP_LANG(configline.substr(index + 1, configline.length()-index));
		}
		else if(config_param == "APP_DBFILE")
		{
			this->setAPP_DBFILE(configline.substr(index + 1, configline.length()-index));
		}
		else if(config_param == "APP_NAME")
		{
			this->setAPP_NAME(configline.substr(index + 1, configline.length()-index));
		}
		else if(config_param == "APP_VERSION")
		{
			this->setAPP_VERSION(configline.substr(index + 1, configline.length()-index));
		}
		else if(config_param == "APP_LOGFILE")
		{
			this->setAPP_LOGFILE(configline.substr(index + 1, configline.length()-index));
		}
		else if(config_param == "APP_DEBUGFILE")
		{
			this->setAPP_DEBUGFILE(configline.substr(index + 1, configline.length()-index));
		}
		
	}
	catch (const exception& e)
	{
		cout << e.what();
	}
}

void Config::ReadConfiguration()
{
	//https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
	try {
		string configline;
		
		ifstream f (CONFIG_FILENAME);
		
		while(getline(f, configline)) {
			process(&configline);
		}
		
		f.close();
	}
	catch (const exception& e)
	{
		cout << e.what();
	}
}

void Config::CreateDefaultConfiguration()
{
	
}

// End Main Methods