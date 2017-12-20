#include "ViewPatient.hpp"

ViewPatient::ViewPatient(const Patient &patient)
{
	this->patient = patient;
}

void ViewPatient::SetModel(const Patient &patient)
{
	this->patient = patient;
}

void ViewPatient::Render()
{
	// This view is now responsible to show the patient's data
	
}
