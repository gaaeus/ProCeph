// Database.hpp
#pragma once
#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>
#include <iostream>
#include <future>

using namespace std;

class Database {

	private:
		Database() {} // Disallow creating an instance of this class

	public:
		void CreateDatabase();
		
	
};

#endif // DATABASE_HPP