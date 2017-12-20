// Config.hpp
#pragma once
#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Config {

private:
	string APP_NAME;
	string APP_LANG;
	string APP_DBFILE;
	string APP_VERSION;
	string APP_LOGFILE;
	string APP_DEBUGFILE;

public:
	// Constructor
	Config() = default; 

	// Destructor
	~Config() = default;

	// Public getters & setters for private data members
	void setAPP_NAME(string APP_NAME);
	string getAPP_NAME() const;
	
	void setAPP_LANG(string APP_LANG);
	string getAPP_LANG() const;
	
	void setAPP_DBFILE(string APP_DBFILE);
	string getAPP_DBFILE() const;
	
	void setAPP_VERSION(string APP_VERSION);
	string getAPP_VERSION() const;
	
	void setAPP_LOGFILE(string APP_LOGFILE);
	string getAPP_LOGFILE() const;
	
	void setAPP_DEBUGFILE(string APP_DEBUGFILE);
	string getAPP_DEBUGFILE() const;

	// Main methods
	void ReadConfiguration();
	void CreateDefaultConfiguration();
	void process(string *configline);
};

#endif // CONFIG_HPP
