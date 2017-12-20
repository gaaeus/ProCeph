#include <iostream>

#include "Models/Patient/Patient.hpp"
#include "Views/Patient/ViewPatient.hpp"
#include "Controllers/Patient/ControllerPatient.hpp"
#include "Common/common.hpp"

using namespace std;

void DataChange(string data)
{
	cout << "Data changes: " << data << endl;
}

int main(void)
{
	Patient patient;
	ViewPatient viewPatient;
	patient.RegisterDataChangeHandler(&DataChange);
	
	// Binding Patient and its view
	ControllerPatient controllerPatient(patient, viewPatient);
	controllerPatient.OnLoad();
	patient.setIdentifier("Helio");
	
	return 0;	
}