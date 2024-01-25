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

#include <tencentcloud/ocr/v20181119/model/PassportRecognizeInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PassportRecognizeInfos::PassportRecognizeInfos() :
    m_typeHasBeenSet(false),
    m_issuingCountryHasBeenSet(false),
    m_passportIDHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_dateOfIssuanceHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_issuePlaceHasBeenSet(false),
    m_issuingAuthorityHasBeenSet(false)
{
}

CoreInternalOutcome PassportRecognizeInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IssuingCountry") && !value["IssuingCountry"].IsNull())
    {
        if (!value["IssuingCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.IssuingCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingCountry = string(value["IssuingCountry"].GetString());
        m_issuingCountryHasBeenSet = true;
    }

    if (value.HasMember("PassportID") && !value["PassportID"].IsNull())
    {
        if (!value["PassportID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.PassportID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportID = string(value["PassportID"].GetString());
        m_passportIDHasBeenSet = true;
    }

    if (value.HasMember("Surname") && !value["Surname"].IsNull())
    {
        if (!value["Surname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Surname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surname = string(value["Surname"].GetString());
        m_surnameHasBeenSet = true;
    }

    if (value.HasMember("GivenName") && !value["GivenName"].IsNull())
    {
        if (!value["GivenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.GivenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_givenName = string(value["GivenName"].GetString());
        m_givenNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("DateOfBirth") && !value["DateOfBirth"].IsNull())
    {
        if (!value["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(value["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("DateOfIssuance") && !value["DateOfIssuance"].IsNull())
    {
        if (!value["DateOfIssuance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.DateOfIssuance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssuance = string(value["DateOfIssuance"].GetString());
        m_dateOfIssuanceHasBeenSet = true;
    }

    if (value.HasMember("DateOfExpiration") && !value["DateOfExpiration"].IsNull())
    {
        if (!value["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(value["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (value.HasMember("Signature") && !value["Signature"].IsNull())
    {
        if (!value["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(value["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }

    if (value.HasMember("IssuePlace") && !value["IssuePlace"].IsNull())
    {
        if (!value["IssuePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.IssuePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuePlace = string(value["IssuePlace"].GetString());
        m_issuePlaceHasBeenSet = true;
    }

    if (value.HasMember("IssuingAuthority") && !value["IssuingAuthority"].IsNull())
    {
        if (!value["IssuingAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos.IssuingAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAuthority = string(value["IssuingAuthority"].GetString());
        m_issuingAuthorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PassportRecognizeInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_passportIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassportID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passportID.c_str(), allocator).Move(), allocator);
    }

    if (m_surnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surname.c_str(), allocator).Move(), allocator);
    }

    if (m_givenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_givenName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssuanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssuance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssuance.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiration.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_issuePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAuthority.c_str(), allocator).Move(), allocator);
    }

}


string PassportRecognizeInfos::GetType() const
{
    return m_type;
}

void PassportRecognizeInfos::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PassportRecognizeInfos::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PassportRecognizeInfos::GetIssuingCountry() const
{
    return m_issuingCountry;
}

void PassportRecognizeInfos::SetIssuingCountry(const string& _issuingCountry)
{
    m_issuingCountry = _issuingCountry;
    m_issuingCountryHasBeenSet = true;
}

bool PassportRecognizeInfos::IssuingCountryHasBeenSet() const
{
    return m_issuingCountryHasBeenSet;
}

string PassportRecognizeInfos::GetPassportID() const
{
    return m_passportID;
}

void PassportRecognizeInfos::SetPassportID(const string& _passportID)
{
    m_passportID = _passportID;
    m_passportIDHasBeenSet = true;
}

bool PassportRecognizeInfos::PassportIDHasBeenSet() const
{
    return m_passportIDHasBeenSet;
}

string PassportRecognizeInfos::GetSurname() const
{
    return m_surname;
}

void PassportRecognizeInfos::SetSurname(const string& _surname)
{
    m_surname = _surname;
    m_surnameHasBeenSet = true;
}

bool PassportRecognizeInfos::SurnameHasBeenSet() const
{
    return m_surnameHasBeenSet;
}

string PassportRecognizeInfos::GetGivenName() const
{
    return m_givenName;
}

void PassportRecognizeInfos::SetGivenName(const string& _givenName)
{
    m_givenName = _givenName;
    m_givenNameHasBeenSet = true;
}

bool PassportRecognizeInfos::GivenNameHasBeenSet() const
{
    return m_givenNameHasBeenSet;
}

string PassportRecognizeInfos::GetName() const
{
    return m_name;
}

void PassportRecognizeInfos::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PassportRecognizeInfos::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PassportRecognizeInfos::GetNationality() const
{
    return m_nationality;
}

void PassportRecognizeInfos::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool PassportRecognizeInfos::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string PassportRecognizeInfos::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

void PassportRecognizeInfos::SetDateOfBirth(const string& _dateOfBirth)
{
    m_dateOfBirth = _dateOfBirth;
    m_dateOfBirthHasBeenSet = true;
}

bool PassportRecognizeInfos::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string PassportRecognizeInfos::GetSex() const
{
    return m_sex;
}

void PassportRecognizeInfos::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool PassportRecognizeInfos::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PassportRecognizeInfos::GetDateOfIssuance() const
{
    return m_dateOfIssuance;
}

void PassportRecognizeInfos::SetDateOfIssuance(const string& _dateOfIssuance)
{
    m_dateOfIssuance = _dateOfIssuance;
    m_dateOfIssuanceHasBeenSet = true;
}

bool PassportRecognizeInfos::DateOfIssuanceHasBeenSet() const
{
    return m_dateOfIssuanceHasBeenSet;
}

string PassportRecognizeInfos::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

void PassportRecognizeInfos::SetDateOfExpiration(const string& _dateOfExpiration)
{
    m_dateOfExpiration = _dateOfExpiration;
    m_dateOfExpirationHasBeenSet = true;
}

bool PassportRecognizeInfos::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string PassportRecognizeInfos::GetSignature() const
{
    return m_signature;
}

void PassportRecognizeInfos::SetSignature(const string& _signature)
{
    m_signature = _signature;
    m_signatureHasBeenSet = true;
}

bool PassportRecognizeInfos::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

string PassportRecognizeInfos::GetIssuePlace() const
{
    return m_issuePlace;
}

void PassportRecognizeInfos::SetIssuePlace(const string& _issuePlace)
{
    m_issuePlace = _issuePlace;
    m_issuePlaceHasBeenSet = true;
}

bool PassportRecognizeInfos::IssuePlaceHasBeenSet() const
{
    return m_issuePlaceHasBeenSet;
}

string PassportRecognizeInfos::GetIssuingAuthority() const
{
    return m_issuingAuthority;
}

void PassportRecognizeInfos::SetIssuingAuthority(const string& _issuingAuthority)
{
    m_issuingAuthority = _issuingAuthority;
    m_issuingAuthorityHasBeenSet = true;
}

bool PassportRecognizeInfos::IssuingAuthorityHasBeenSet() const
{
    return m_issuingAuthorityHasBeenSet;
}

