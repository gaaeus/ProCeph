// ControllerPatient.hpp
#pragma once
#include "../../Models/Patient/Patient.hpp"
#include "../../Views/Patient/ViewPatient.hpp"
#include <iostream>
using namespace std;

#ifndef CONTROLLER_PATIENT_HPP
#define CONTROLLER_PATIENT_HPP

class ControllerPatient {
	
	private:
		Patient patient;
		ViewPatient viewPatient;
	
	public:
	
		// Constructor
		ControllerPatient() = default;
		
		// Destructor
		~ControllerPatient() = default;
	
		// Main methods
		ControllerPatient(const Patient &patient, const ViewPatient &viewPatient);
		void SetModel(const Patient &patient);
		void SetView(const ViewPatient &viewPatient);
		void OnLoad();
};

#endif