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

#include <tencentcloud/mrs/v20200910/model/ParentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ParentInfo::ParentInfo() :
    m_nameHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_ethnicityHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome ParentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("IdCard") && !value["IdCard"].IsNull())
    {
        if (!value["IdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(value["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (value.HasMember("Ethnicity") && !value["Ethnicity"].IsNull())
    {
        if (!value["Ethnicity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.Ethnicity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ethnicity = string(value["Ethnicity"].GetString());
        m_ethnicityHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
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

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string ParentInfo::GetName() const
{
    return m_name;
}

void ParentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParentInfo::GetAge() const
{
    return m_age;
}

void ParentInfo::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool ParentInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string ParentInfo::GetIdCard() const
{
    return m_idCard;
}

void ParentInfo::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool ParentInfo::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string ParentInfo::GetEthnicity() const
{
    return m_ethnicity;
}

void ParentInfo::SetEthnicity(const string& _ethnicity)
{
    m_ethnicity = _ethnicity;
    m_ethnicityHasBeenSet = true;
}

bool ParentInfo::EthnicityHasBeenSet() const
{
    return m_ethnicityHasBeenSet;
}

string ParentInfo::GetNationality() const
{
    return m_nationality;
}

void ParentInfo::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool ParentInfo::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string ParentInfo::GetAddress() const
{
    return m_address;
}

void ParentInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ParentInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

