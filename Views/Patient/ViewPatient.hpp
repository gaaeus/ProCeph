// ViewPatient.hpp
#pragma once
#include "../../Models/Patient/Patient.hpp"
#include <iostream>
using namespace std;

#ifndef VIEW_PATIENT_HPP
#define VIEW_PATIENT_HPP

class ViewPatient
{
	private:
		Patient patient;

	public:
	
		// Constructor
		ViewPatient() = default;
		
		// Destructor
		~ViewPatient() = default;

		// Main functions
		ViewPatient(const Patient &patient);
		void SetModel(const Patient &patient);
		void Render();
};

#endif // VIEW_PATIENT_HPP
