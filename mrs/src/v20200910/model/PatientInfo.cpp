/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/mrs/v20200910/model/PatientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PatientInfo::PatientInfo() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_healthCardNoHasBeenSet(false),
    m_socialSecurityCardNoHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_ethnicityHasBeenSet(false),
    m_marriedHasBeenSet(false),
    m_professionHasBeenSet(false),
    m_educationBackgroundHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_medicalInsuranceTypeHasBeenSet(false)
{
}

CoreInternalOutcome PatientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("IdCard") && !value["IdCard"].IsNull())
    {
        if (!value["IdCard"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(value["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (value.HasMember("HealthCardNo") && !value["HealthCardNo"].IsNull())
    {
        if (!value["HealthCardNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.HealthCardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCardNo = string(value["HealthCardNo"].GetString());
        m_healthCardNoHasBeenSet = true;
    }

    if (value.HasMember("SocialSecurityCardNo") && !value["SocialSecurityCardNo"].IsNull())
    {
        if (!value["SocialSecurityCardNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.SocialSecurityCardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_socialSecurityCardNo = string(value["SocialSecurityCardNo"].GetString());
        m_socialSecurityCardNoHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Ethnicity") && !value["Ethnicity"].IsNull())
    {
        if (!value["Ethnicity"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Ethnicity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ethnicity = string(value["Ethnicity"].GetString());
        m_ethnicityHasBeenSet = true;
    }

    if (value.HasMember("Married") && !value["Married"].IsNull())
    {
        if (!value["Married"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Married` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_married = string(value["Married"].GetString());
        m_marriedHasBeenSet = true;
    }

    if (value.HasMember("Profession") && !value["Profession"].IsNull())
    {
        if (!value["Profession"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Profession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profession = string(value["Profession"].GetString());
        m_professionHasBeenSet = true;
    }

    if (value.HasMember("EducationBackground") && !value["EducationBackground"].IsNull())
    {
        if (!value["EducationBackground"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.EducationBackground` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_educationBackground = string(value["EducationBackground"].GetString());
        m_educationBackgroundHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("MedicalInsuranceType") && !value["MedicalInsuranceType"].IsNull())
    {
        if (!value["MedicalInsuranceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PatientInfo.MedicalInsuranceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medicalInsuranceType = string(value["MedicalInsuranceType"].GetString());
        m_medicalInsuranceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCardNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCardNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCardNo.c_str(), allocator).Move(), allocator);
    }

    if (m_socialSecurityCardNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SocialSecurityCardNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_socialSecurityCardNo.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_ethnicityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ethnicity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ethnicity.c_str(), allocator).Move(), allocator);
    }

    if (m_marriedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Married";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_married.c_str(), allocator).Move(), allocator);
    }

    if (m_professionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profession.c_str(), allocator).Move(), allocator);
    }

    if (m_educationBackgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EducationBackground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_educationBackground.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_medicalInsuranceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalInsuranceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_medicalInsuranceType.c_str(), allocator).Move(), allocator);
    }

}


string PatientInfo::GetName() const
{
    return m_name;
}

void PatientInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PatientInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PatientInfo::GetSex() const
{
    return m_sex;
}

void PatientInfo::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool PatientInfo::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PatientInfo::GetAge() const
{
    return m_age;
}

void PatientInfo::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PatientInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string PatientInfo::GetPhone() const
{
    return m_phone;
}

void PatientInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool PatientInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string PatientInfo::GetAddress() const
{
    return m_address;
}

void PatientInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PatientInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PatientInfo::GetIdCard() const
{
    return m_idCard;
}

void PatientInfo::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool PatientInfo::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string PatientInfo::GetHealthCardNo() const
{
    return m_healthCardNo;
}

void PatientInfo::SetHealthCardNo(const string& _healthCardNo)
{
    m_healthCardNo = _healthCardNo;
    m_healthCardNoHasBeenSet = true;
}

bool PatientInfo::HealthCardNoHasBeenSet() const
{
    return m_healthCardNoHasBeenSet;
}

string PatientInfo::GetSocialSecurityCardNo() const
{
    return m_socialSecurityCardNo;
}

void PatientInfo::SetSocialSecurityCardNo(const string& _socialSecurityCardNo)
{
    m_socialSecurityCardNo = _socialSecurityCardNo;
    m_socialSecurityCardNoHasBeenSet = true;
}

bool PatientInfo::SocialSecurityCardNoHasBeenSet() const
{
    return m_socialSecurityCardNoHasBeenSet;
}

string PatientInfo::GetBirthday() const
{
    return m_birthday;
}

void PatientInfo::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PatientInfo::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string PatientInfo::GetEthnicity() const
{
    return m_ethnicity;
}

void PatientInfo::SetEthnicity(const string& _ethnicity)
{
    m_ethnicity = _ethnicity;
    m_ethnicityHasBeenSet = true;
}

bool PatientInfo::EthnicityHasBeenSet() const
{
    return m_ethnicityHasBeenSet;
}

string PatientInfo::GetMarried() const
{
    return m_married;
}

void PatientInfo::SetMarried(const string& _married)
{
    m_married = _married;
    m_marriedHasBeenSet = true;
}

bool PatientInfo::MarriedHasBeenSet() const
{
    return m_marriedHasBeenSet;
}

string PatientInfo::GetProfession() const
{
    return m_profession;
}

void PatientInfo::SetProfession(const string& _profession)
{
    m_profession = _profession;
    m_professionHasBeenSet = true;
}

bool PatientInfo::ProfessionHasBeenSet() const
{
    return m_professionHasBeenSet;
}

string PatientInfo::GetEducationBackground() const
{
    return m_educationBackground;
}

void PatientInfo::SetEducationBackground(const string& _educationBackground)
{
    m_educationBackground = _educationBackground;
    m_educationBackgroundHasBeenSet = true;
}

bool PatientInfo::EducationBackgroundHasBeenSet() const
{
    return m_educationBackgroundHasBeenSet;
}

string PatientInfo::GetNationality() const
{
    return m_nationality;
}

void PatientInfo::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool PatientInfo::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string PatientInfo::GetBirthPlace() const
{
    return m_birthPlace;
}

void PatientInfo::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PatientInfo::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PatientInfo::GetMedicalInsuranceType() const
{
    return m_medicalInsuranceType;
}

void PatientInfo::SetMedicalInsuranceType(const string& _medicalInsuranceType)
{
    m_medicalInsuranceType = _medicalInsuranceType;
    m_medicalInsuranceTypeHasBeenSet = true;
}

bool PatientInfo::MedicalInsuranceTypeHasBeenSet() const
{
    return m_medicalInsuranceTypeHasBeenSet;
}

