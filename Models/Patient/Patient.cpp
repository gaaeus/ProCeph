#include "Patient.hpp"

// Getters/Setters
void Patient::setpatient_id(unsigned long patient_id)
{
	this->patient_id = patient_id;
}
unsigned long Patient::getpatient_id() const {
	return this->patient_id;
}

void Patient::setIdentifier(string identifier) {
	this->identifier = identifier;
	if (this->event != nullptr) { // data change callback event
		this->event(identifier);
	}  
}
string Patient::getIdentifier() const {
	return this->identifier;
}
	
void Patient::setExternalIdentifier(string externalIdentifier) {
	this->externalIdentifier = externalIdentifier;
} 
string Patient::getExternalIdentifier() const {
	return this->externalIdentifier;
}

void Patient::setName(string name) {
	this->name = name;
} 
string Patient::getName() const {
	return this->name;
}

void Patient::setHomePhone(string homePhone) {
	this->homePhone = homePhone;
} 
string Patient::getHomePhone() const {
	return this->homePhone;
}

void Patient::setOfficePhone(string officePhone) {
	this->officePhone = officePhone;
} 
string Patient::getOfficePhone() const {
	return this->officePhone;
}

void Patient::setFax(string fax) {
	this->fax = fax;
} 
string Patient::getFax() const {
	return this->fax;
}

void Patient::setEmail(string email) {
	this->email = email;
} 
string Patient::getEmail() const {
	return this->email;
}

void Patient::setAddress(string address) {
	this->address = address;
} 
string Patient::getAddress() const {
	return this->address;
}

void Patient::setBirthDate(string birthDate) {
	this->birthDate = birthDate;
} 
string Patient::getBirthDate() const {
	return this->birthDate;
}

void Patient::setMaritalStatus(enumMaritalStatus maritalStatus) {
	this->maritalStatus = maritalStatus;
}
Patient::enumMaritalStatus Patient::getMaritalStatus() const {
	return this->maritalStatus;
}

void Patient::setStatus(enumStatus status) {
	this->status = status;
}
Patient::enumStatus Patient::getStatus() const {
	return this->status;
}

void Patient::setGender(enumGender gender) {
	this->gender = gender;
}

Patient::enumGender Patient::getGender() const {
	return this->gender;
}
	
void Patient::setRace(enumRace race) {
	this->race = race;
}
Patient::enumRace Patient::getRace() const {
	return this->race;
}

void Patient::setContactBy(enumContactBy contactBy) {
	this->contactBy = contactBy;
}
Patient::enumContactBy Patient::getContactBy() const {
	return this->contactBy;
}

void Patient::setEmploymentStatus(enumEmpStatus employmentStatus) {
	this->employmentStatus = employmentStatus;
}
Patient::enumEmpStatus Patient::getEmploymentStatus() const {
	return this->employmentStatus;
}
// End Getters/Setters

// Main Methods

void Patient::RegisterDataChangeHandler(DataChangeHandler handler) {
	this->event = handler;
}
// End Main Methods

// Data Access 
Patient Patient::getPatient(unsigned long patient_id)
{
	//Patient patient = new Patient();
	//return; //patient;
}
vector<Patient> Patient::getPatients(unsigned long patient_id)
{
	vector<Patient> patients;
	return patients;
}
// End Data Access
