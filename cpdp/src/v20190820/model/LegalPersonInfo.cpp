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

#include <tencentcloud/cpdp/v20190820/model/LegalPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

LegalPersonInfo::LegalPersonInfo() :
    m_idTypeHasBeenSet(false),
    m_idNumberHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_idValidityTypeHasBeenSet(false),
    m_idEffectiveDateHasBeenSet(false),
    m_contactPhoneHasBeenSet(false),
    m_idExpireDateHasBeenSet(false),
    m_contactAddressHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

CoreInternalOutcome LegalPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.IdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idType = string(value["IdType"].GetString());
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("IdValidityType") && !value["IdValidityType"].IsNull())
    {
        if (!value["IdValidityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.IdValidityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idValidityType = string(value["IdValidityType"].GetString());
        m_idValidityTypeHasBeenSet = true;
    }

    if (value.HasMember("IdEffectiveDate") && !value["IdEffectiveDate"].IsNull())
    {
        if (!value["IdEffectiveDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.IdEffectiveDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idEffectiveDate = string(value["IdEffectiveDate"].GetString());
        m_idEffectiveDateHasBeenSet = true;
    }

    if (value.HasMember("ContactPhone") && !value["ContactPhone"].IsNull())
    {
        if (!value["ContactPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.ContactPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPhone = string(value["ContactPhone"].GetString());
        m_contactPhoneHasBeenSet = true;
    }

    if (value.HasMember("IdExpireDate") && !value["IdExpireDate"].IsNull())
    {
        if (!value["IdExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.IdExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idExpireDate = string(value["IdExpireDate"].GetString());
        m_idExpireDateHasBeenSet = true;
    }

    if (value.HasMember("ContactAddress") && !value["ContactAddress"].IsNull())
    {
        if (!value["ContactAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.ContactAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactAddress = string(value["ContactAddress"].GetString());
        m_contactAddressHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalPersonInfo.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LegalPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_idValidityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdValidityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idValidityType.c_str(), allocator).Move(), allocator);
    }

    if (m_idEffectiveDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdEffectiveDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idEffectiveDate.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_idExpireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idExpireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_contactAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

}


string LegalPersonInfo::GetIdType() const
{
    return m_idType;
}

void LegalPersonInfo::SetIdType(const string& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool LegalPersonInfo::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string LegalPersonInfo::GetIdNumber() const
{
    return m_idNumber;
}

void LegalPersonInfo::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool LegalPersonInfo::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string LegalPersonInfo::GetPersonName() const
{
    return m_personName;
}

void LegalPersonInfo::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool LegalPersonInfo::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string LegalPersonInfo::GetIdValidityType() const
{
    return m_idValidityType;
}

void LegalPersonInfo::SetIdValidityType(const string& _idValidityType)
{
    m_idValidityType = _idValidityType;
    m_idValidityTypeHasBeenSet = true;
}

bool LegalPersonInfo::IdValidityTypeHasBeenSet() const
{
    return m_idValidityTypeHasBeenSet;
}

string LegalPersonInfo::GetIdEffectiveDate() const
{
    return m_idEffectiveDate;
}

void LegalPersonInfo::SetIdEffectiveDate(const string& _idEffectiveDate)
{
    m_idEffectiveDate = _idEffectiveDate;
    m_idEffectiveDateHasBeenSet = true;
}

bool LegalPersonInfo::IdEffectiveDateHasBeenSet() const
{
    return m_idEffectiveDateHasBeenSet;
}

string LegalPersonInfo::GetContactPhone() const
{
    return m_contactPhone;
}

void LegalPersonInfo::SetContactPhone(const string& _contactPhone)
{
    m_contactPhone = _contactPhone;
    m_contactPhoneHasBeenSet = true;
}

bool LegalPersonInfo::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}

string LegalPersonInfo::GetIdExpireDate() const
{
    return m_idExpireDate;
}

void LegalPersonInfo::SetIdExpireDate(const string& _idExpireDate)
{
    m_idExpireDate = _idExpireDate;
    m_idExpireDateHasBeenSet = true;
}

bool LegalPersonInfo::IdExpireDateHasBeenSet() const
{
    return m_idExpireDateHasBeenSet;
}

string LegalPersonInfo::GetContactAddress() const
{
    return m_contactAddress;
}

void LegalPersonInfo::SetContactAddress(const string& _contactAddress)
{
    m_contactAddress = _contactAddress;
    m_contactAddressHasBeenSet = true;
}

bool LegalPersonInfo::ContactAddressHasBeenSet() const
{
    return m_contactAddressHasBeenSet;
}

string LegalPersonInfo::GetEmailAddress() const
{
    return m_emailAddress;
}

void LegalPersonInfo::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool LegalPersonInfo::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

