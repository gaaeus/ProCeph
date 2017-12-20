// Patient.hpp
#pragma once
#include <string>
#include <vector>
#include "../../Common/common.hpp"
using namespace std;

#ifndef PATIENT_HPP
#define PATIENT_HPP

class Patient
{
	
// Enum declarations
enum class enumStatus  { STATUS_INACTIVE, STATUS_ACTIVE, STATUS_DECEASED };
enum class enumGender { GENDER_MALE, GENDER_FEMALE, GENDER_NEUTRAL, GENDER_NOT_DECLARED };	
enum class enumMaritalStatus { MARITAL_STATUS_SINGLE, MARITAL_STATUS_MARRIED, MARITAL_STATUS_DIVORCED, MARITAL_STATUS_WIDOW };
enum class enumRace { RACE_ASIAN, RACE_BLACK, RACE_MIXED_ASIAN, RACE_MIXED_BLACK, RACE_MIXED_OTHER, RACE_WHITE };
enum class enumContactBy { CONTACT_EMAIL, CONTACT_FAX, CONTACT_PHONE }; // This choice must be validated, so the referenced fields must be populated
enum class enumEmpStatus { EMPLOYMENT_STATUS_EMPLOYED_SELF, EMPLOYMENT_STATUS_EMPLOYED_3RD_PARTY, EMPLOYMENT_STATUS_UNEMPLOYED, EMPLOYMENT_STATUS_INVALID };

private:
	unsigned long patient_id; // Internal identifier
	string identifier;
	string externalIdentifier;
	string name;
	string homePhone;
	string officePhone;
	string fax;
	string email;
	string address;
	string birthDate; // dd-MM-yyyy
	enumStatus status;
	enumGender gender;
	enumMaritalStatus maritalStatus;
	enumRace race;
	enumContactBy contactBy;
	enumEmpStatus employmentStatus;
	string socialSecurityNumber;
	string medicalRecordNumber;
	
	DataChangeHandler event = nullptr;
public:

	// Constructor
	Patient() = default; 

	// Destructor
	~Patient() = default;

	// Public getters & setters for private data members
	void setpatient_id(unsigned long patient_id);
	unsigned long getpatient_id() const;

	void setIdentifier(string identifier);
	string getIdentifier() const;
	
	void setExternalIdentifier(string externalIdentifier);
	string getExternalIdentifier() const;
	
	void setName(string name);
	string getName() const;
	
	void setHomePhone(string homePhone);
	string getHomePhone() const;
	
	void setOfficePhone(string officePhone);
	string getOfficePhone() const;
	
	void setFax(string fax);
	string getFax() const;
	
	void setEmail(string email);
	string getEmail() const;
	
	void setAddress(string address);
	string getAddress() const;
	
	void setBirthDate(string birthDate);
	string getBirthDate() const;
	
	void setStatus(enumStatus status);
	enumStatus getStatus() const;
	
	void setGender(enumGender gender);
	enumGender getGender() const;
	
	void setMaritalStatus(enumMaritalStatus maritalStatus);
	enumMaritalStatus getMaritalStatus() const;
	
	void setRace(enumRace race);
	enumRace getRace() const;
	
	void setContactBy(enumContactBy contactBy);
	enumContactBy getContactBy() const;
	
	void setEmploymentStatus(enumEmpStatus employmentStatus);
	enumEmpStatus getEmploymentStatus() const;
	
	void setSocialSecurityNumber(string socialSecurityNumber);
	string getSocialSecurityNumber() const;
	
	void setMedicalRecordNumber(string medicalRecordNumber);
	string getMedicalRecordNumber() const;
	
	// Main methods
	//  register the event when data changes.
    void RegisterDataChangeHandler(DataChangeHandler handler);
	
	// Data Access
	Patient getPatient(unsigned long patient_id);
	vector<Patient> getPatients(unsigned long patient_id);
	
};

#endif // PATIENT_HPP
/*
https://www.ahrq.gov/professionals/prevention-chronic-care/improve/system/pfhandbook/mod8appbmonicalatte.html

Patient Information

*Name: Monica Latte
*Home Phone: 444-444-4444
*Address: 4444 Coffee Ave
                Chocolate, California
*Office Phone:
*Patient ID: 0000-44444
*Fax:
*Birth Date: 04/04/1950
*Status: Active
*Gender: Female
*Marital Status: Divorced
*Contact By: Phone
*Race: Black
*Soc Sec No: 444-444-4444
*MRN: MR-111-1111
Emp. Status: Full-time
*Email:	
*External ID: MR-111-1111

Language: English
Resp Prov: Carl Savem
Referred by:	
Sens Chart: No
Home LOC:WeServeEveryone

MVC examples:
https://helloacm.com/model-view-controller-explained-in-c/
http://www.cplusplus.com/forum/beginner/169892/


Patients
- List
- Add Patient
- Personal Data
- Medical Record
- Documents
- Media
- Ceph Data

Settings
- General Options
- Help
- About

Cephalometry
- List
- Create New
- Edit
  - Export Analysis

My Data
- Edit
  
Other
- Backup/Restore


*/