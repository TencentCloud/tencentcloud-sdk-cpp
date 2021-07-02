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

#include <tencentcloud/mrs/v20200910/model/PersonalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PersonalInfo::PersonalInfo() :
    m_nameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_iDCardHasBeenSet(false),
    m_healthCardNumHasBeenSet(false),
    m_socialSecurityCardNumHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_ethnicityHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_marriedHasBeenSet(false),
    m_professionHasBeenSet(false),
    m_educationBackgroundHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_medicalInsuranceTypeHasBeenSet(false),
    m_linkPhoneHasBeenSet(false),
    m_linkAddressHasBeenSet(false),
    m_kinsfolkNameHasBeenSet(false),
    m_kinsfolkRelationHasBeenSet(false),
    m_kinsfolkPhoneHasBeenSet(false)
{
}

CoreInternalOutcome PersonalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("IDCard") && !value["IDCard"].IsNull())
    {
        if (!value["IDCard"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.IDCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCard = string(value["IDCard"].GetString());
        m_iDCardHasBeenSet = true;
    }

    if (value.HasMember("HealthCardNum") && !value["HealthCardNum"].IsNull())
    {
        if (!value["HealthCardNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.HealthCardNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCardNum = string(value["HealthCardNum"].GetString());
        m_healthCardNumHasBeenSet = true;
    }

    if (value.HasMember("SocialSecurityCardNum") && !value["SocialSecurityCardNum"].IsNull())
    {
        if (!value["SocialSecurityCardNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.SocialSecurityCardNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_socialSecurityCardNum = string(value["SocialSecurityCardNum"].GetString());
        m_socialSecurityCardNumHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Ethnicity") && !value["Ethnicity"].IsNull())
    {
        if (!value["Ethnicity"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Ethnicity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ethnicity = string(value["Ethnicity"].GetString());
        m_ethnicityHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Married") && !value["Married"].IsNull())
    {
        if (!value["Married"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Married` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_married = string(value["Married"].GetString());
        m_marriedHasBeenSet = true;
    }

    if (value.HasMember("Profession") && !value["Profession"].IsNull())
    {
        if (!value["Profession"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.Profession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profession = string(value["Profession"].GetString());
        m_professionHasBeenSet = true;
    }

    if (value.HasMember("EducationBackground") && !value["EducationBackground"].IsNull())
    {
        if (!value["EducationBackground"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.EducationBackground` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_educationBackground = string(value["EducationBackground"].GetString());
        m_educationBackgroundHasBeenSet = true;
    }

    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("MedicalInsuranceType") && !value["MedicalInsuranceType"].IsNull())
    {
        if (!value["MedicalInsuranceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.MedicalInsuranceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medicalInsuranceType = string(value["MedicalInsuranceType"].GetString());
        m_medicalInsuranceTypeHasBeenSet = true;
    }

    if (value.HasMember("LinkPhone") && !value["LinkPhone"].IsNull())
    {
        if (!value["LinkPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.LinkPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkPhone = string(value["LinkPhone"].GetString());
        m_linkPhoneHasBeenSet = true;
    }

    if (value.HasMember("LinkAddress") && !value["LinkAddress"].IsNull())
    {
        if (!value["LinkAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.LinkAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkAddress = string(value["LinkAddress"].GetString());
        m_linkAddressHasBeenSet = true;
    }

    if (value.HasMember("KinsfolkName") && !value["KinsfolkName"].IsNull())
    {
        if (!value["KinsfolkName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.KinsfolkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kinsfolkName = string(value["KinsfolkName"].GetString());
        m_kinsfolkNameHasBeenSet = true;
    }

    if (value.HasMember("KinsfolkRelation") && !value["KinsfolkRelation"].IsNull())
    {
        if (!value["KinsfolkRelation"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.KinsfolkRelation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kinsfolkRelation = string(value["KinsfolkRelation"].GetString());
        m_kinsfolkRelationHasBeenSet = true;
    }

    if (value.HasMember("KinsfolkPhone") && !value["KinsfolkPhone"].IsNull())
    {
        if (!value["KinsfolkPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalInfo.KinsfolkPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kinsfolkPhone = string(value["KinsfolkPhone"].GetString());
        m_kinsfolkPhoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCard.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCardNum.c_str(), allocator).Move(), allocator);
    }

    if (m_socialSecurityCardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SocialSecurityCardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_socialSecurityCardNum.c_str(), allocator).Move(), allocator);
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

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
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

    if (m_linkPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_linkAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_kinsfolkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KinsfolkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kinsfolkName.c_str(), allocator).Move(), allocator);
    }

    if (m_kinsfolkRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KinsfolkRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kinsfolkRelation.c_str(), allocator).Move(), allocator);
    }

    if (m_kinsfolkPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KinsfolkPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kinsfolkPhone.c_str(), allocator).Move(), allocator);
    }

}


string PersonalInfo::GetName() const
{
    return m_name;
}

void PersonalInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PersonalInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PersonalInfo::GetGender() const
{
    return m_gender;
}

void PersonalInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PersonalInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string PersonalInfo::GetAge() const
{
    return m_age;
}

void PersonalInfo::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PersonalInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string PersonalInfo::GetIDCard() const
{
    return m_iDCard;
}

void PersonalInfo::SetIDCard(const string& _iDCard)
{
    m_iDCard = _iDCard;
    m_iDCardHasBeenSet = true;
}

bool PersonalInfo::IDCardHasBeenSet() const
{
    return m_iDCardHasBeenSet;
}

string PersonalInfo::GetHealthCardNum() const
{
    return m_healthCardNum;
}

void PersonalInfo::SetHealthCardNum(const string& _healthCardNum)
{
    m_healthCardNum = _healthCardNum;
    m_healthCardNumHasBeenSet = true;
}

bool PersonalInfo::HealthCardNumHasBeenSet() const
{
    return m_healthCardNumHasBeenSet;
}

string PersonalInfo::GetSocialSecurityCardNum() const
{
    return m_socialSecurityCardNum;
}

void PersonalInfo::SetSocialSecurityCardNum(const string& _socialSecurityCardNum)
{
    m_socialSecurityCardNum = _socialSecurityCardNum;
    m_socialSecurityCardNumHasBeenSet = true;
}

bool PersonalInfo::SocialSecurityCardNumHasBeenSet() const
{
    return m_socialSecurityCardNumHasBeenSet;
}

string PersonalInfo::GetBirthday() const
{
    return m_birthday;
}

void PersonalInfo::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PersonalInfo::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string PersonalInfo::GetEthnicity() const
{
    return m_ethnicity;
}

void PersonalInfo::SetEthnicity(const string& _ethnicity)
{
    m_ethnicity = _ethnicity;
    m_ethnicityHasBeenSet = true;
}

bool PersonalInfo::EthnicityHasBeenSet() const
{
    return m_ethnicityHasBeenSet;
}

string PersonalInfo::GetNationality() const
{
    return m_nationality;
}

void PersonalInfo::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool PersonalInfo::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string PersonalInfo::GetMarried() const
{
    return m_married;
}

void PersonalInfo::SetMarried(const string& _married)
{
    m_married = _married;
    m_marriedHasBeenSet = true;
}

bool PersonalInfo::MarriedHasBeenSet() const
{
    return m_marriedHasBeenSet;
}

string PersonalInfo::GetProfession() const
{
    return m_profession;
}

void PersonalInfo::SetProfession(const string& _profession)
{
    m_profession = _profession;
    m_professionHasBeenSet = true;
}

bool PersonalInfo::ProfessionHasBeenSet() const
{
    return m_professionHasBeenSet;
}

string PersonalInfo::GetEducationBackground() const
{
    return m_educationBackground;
}

void PersonalInfo::SetEducationBackground(const string& _educationBackground)
{
    m_educationBackground = _educationBackground;
    m_educationBackgroundHasBeenSet = true;
}

bool PersonalInfo::EducationBackgroundHasBeenSet() const
{
    return m_educationBackgroundHasBeenSet;
}

string PersonalInfo::GetBirthPlace() const
{
    return m_birthPlace;
}

void PersonalInfo::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PersonalInfo::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PersonalInfo::GetMedicalInsuranceType() const
{
    return m_medicalInsuranceType;
}

void PersonalInfo::SetMedicalInsuranceType(const string& _medicalInsuranceType)
{
    m_medicalInsuranceType = _medicalInsuranceType;
    m_medicalInsuranceTypeHasBeenSet = true;
}

bool PersonalInfo::MedicalInsuranceTypeHasBeenSet() const
{
    return m_medicalInsuranceTypeHasBeenSet;
}

string PersonalInfo::GetLinkPhone() const
{
    return m_linkPhone;
}

void PersonalInfo::SetLinkPhone(const string& _linkPhone)
{
    m_linkPhone = _linkPhone;
    m_linkPhoneHasBeenSet = true;
}

bool PersonalInfo::LinkPhoneHasBeenSet() const
{
    return m_linkPhoneHasBeenSet;
}

string PersonalInfo::GetLinkAddress() const
{
    return m_linkAddress;
}

void PersonalInfo::SetLinkAddress(const string& _linkAddress)
{
    m_linkAddress = _linkAddress;
    m_linkAddressHasBeenSet = true;
}

bool PersonalInfo::LinkAddressHasBeenSet() const
{
    return m_linkAddressHasBeenSet;
}

string PersonalInfo::GetKinsfolkName() const
{
    return m_kinsfolkName;
}

void PersonalInfo::SetKinsfolkName(const string& _kinsfolkName)
{
    m_kinsfolkName = _kinsfolkName;
    m_kinsfolkNameHasBeenSet = true;
}

bool PersonalInfo::KinsfolkNameHasBeenSet() const
{
    return m_kinsfolkNameHasBeenSet;
}

string PersonalInfo::GetKinsfolkRelation() const
{
    return m_kinsfolkRelation;
}

void PersonalInfo::SetKinsfolkRelation(const string& _kinsfolkRelation)
{
    m_kinsfolkRelation = _kinsfolkRelation;
    m_kinsfolkRelationHasBeenSet = true;
}

bool PersonalInfo::KinsfolkRelationHasBeenSet() const
{
    return m_kinsfolkRelationHasBeenSet;
}

string PersonalInfo::GetKinsfolkPhone() const
{
    return m_kinsfolkPhone;
}

void PersonalInfo::SetKinsfolkPhone(const string& _kinsfolkPhone)
{
    m_kinsfolkPhone = _kinsfolkPhone;
    m_kinsfolkPhoneHasBeenSet = true;
}

bool PersonalInfo::KinsfolkPhoneHasBeenSet() const
{
    return m_kinsfolkPhoneHasBeenSet;
}

