#include "ControllerPatient.hpp"
		
ControllerPatient::ControllerPatient(const Patient &patient, const ViewPatient &viewPatient)
{
	this->SetModel(patient);
	this->SetView(viewPatient);
}

void ControllerPatient::SetModel(const Patient &patient)
{
	this->patient = patient;
}

void ControllerPatient::SetView(const ViewPatient &viewPatient)
{
	this->viewPatient = viewPatient;
}

void ControllerPatient::OnLoad()
{
	this->viewPatient.Render();
}
