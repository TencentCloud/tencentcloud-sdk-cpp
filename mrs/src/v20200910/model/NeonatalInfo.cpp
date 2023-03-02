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

#include <tencentcloud/mrs/v20200910/model/NeonatalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

NeonatalInfo::NeonatalInfo() :
    m_neonatalNameHasBeenSet(false),
    m_neonatalGenderHasBeenSet(false),
    m_birthLengthHasBeenSet(false),
    m_birthWeightHasBeenSet(false),
    m_gestationalAgeHasBeenSet(false),
    m_birthTimeHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_medicalInstitutionsHasBeenSet(false)
{
}

CoreInternalOutcome NeonatalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NeonatalName") && !value["NeonatalName"].IsNull())
    {
        if (!value["NeonatalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.NeonatalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_neonatalName = string(value["NeonatalName"].GetString());
        m_neonatalNameHasBeenSet = true;
    }

    if (value.HasMember("NeonatalGender") && !value["NeonatalGender"].IsNull())
    {
        if (!value["NeonatalGender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.NeonatalGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_neonatalGender = string(value["NeonatalGender"].GetString());
        m_neonatalGenderHasBeenSet = true;
    }

    if (value.HasMember("BirthLength") && !value["BirthLength"].IsNull())
    {
        if (!value["BirthLength"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.BirthLength` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthLength = string(value["BirthLength"].GetString());
        m_birthLengthHasBeenSet = true;
    }

    if (value.HasMember("BirthWeight") && !value["BirthWeight"].IsNull())
    {
        if (!value["BirthWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.BirthWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthWeight = string(value["BirthWeight"].GetString());
        m_birthWeightHasBeenSet = true;
    }

    if (value.HasMember("GestationalAge") && !value["GestationalAge"].IsNull())
    {
        if (!value["GestationalAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.GestationalAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gestationalAge = string(value["GestationalAge"].GetString());
        m_gestationalAgeHasBeenSet = true;
    }

    if (value.HasMember("BirthTime") && !value["BirthTime"].IsNull())
    {
        if (!value["BirthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.BirthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthTime = string(value["BirthTime"].GetString());
        m_birthTimeHasBeenSet = true;
    }

    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("MedicalInstitutions") && !value["MedicalInstitutions"].IsNull())
    {
        if (!value["MedicalInstitutions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeonatalInfo.MedicalInstitutions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medicalInstitutions = string(value["MedicalInstitutions"].GetString());
        m_medicalInstitutionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NeonatalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_neonatalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeonatalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_neonatalName.c_str(), allocator).Move(), allocator);
    }

    if (m_neonatalGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeonatalGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_neonatalGender.c_str(), allocator).Move(), allocator);
    }

    if (m_birthLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthLength.c_str(), allocator).Move(), allocator);
    }

    if (m_birthWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthWeight.c_str(), allocator).Move(), allocator);
    }

    if (m_gestationalAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GestationalAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gestationalAge.c_str(), allocator).Move(), allocator);
    }

    if (m_birthTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthTime.c_str(), allocator).Move(), allocator);
    }

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_medicalInstitutionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalInstitutions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_medicalInstitutions.c_str(), allocator).Move(), allocator);
    }

}


string NeonatalInfo::GetNeonatalName() const
{
    return m_neonatalName;
}

void NeonatalInfo::SetNeonatalName(const string& _neonatalName)
{
    m_neonatalName = _neonatalName;
    m_neonatalNameHasBeenSet = true;
}

bool NeonatalInfo::NeonatalNameHasBeenSet() const
{
    return m_neonatalNameHasBeenSet;
}

string NeonatalInfo::GetNeonatalGender() const
{
    return m_neonatalGender;
}

void NeonatalInfo::SetNeonatalGender(const string& _neonatalGender)
{
    m_neonatalGender = _neonatalGender;
    m_neonatalGenderHasBeenSet = true;
}

bool NeonatalInfo::NeonatalGenderHasBeenSet() const
{
    return m_neonatalGenderHasBeenSet;
}

string NeonatalInfo::GetBirthLength() const
{
    return m_birthLength;
}

void NeonatalInfo::SetBirthLength(const string& _birthLength)
{
    m_birthLength = _birthLength;
    m_birthLengthHasBeenSet = true;
}

bool NeonatalInfo::BirthLengthHasBeenSet() const
{
    return m_birthLengthHasBeenSet;
}

string NeonatalInfo::GetBirthWeight() const
{
    return m_birthWeight;
}

void NeonatalInfo::SetBirthWeight(const string& _birthWeight)
{
    m_birthWeight = _birthWeight;
    m_birthWeightHasBeenSet = true;
}

bool NeonatalInfo::BirthWeightHasBeenSet() const
{
    return m_birthWeightHasBeenSet;
}

string NeonatalInfo::GetGestationalAge() const
{
    return m_gestationalAge;
}

void NeonatalInfo::SetGestationalAge(const string& _gestationalAge)
{
    m_gestationalAge = _gestationalAge;
    m_gestationalAgeHasBeenSet = true;
}

bool NeonatalInfo::GestationalAgeHasBeenSet() const
{
    return m_gestationalAgeHasBeenSet;
}

string NeonatalInfo::GetBirthTime() const
{
    return m_birthTime;
}

void NeonatalInfo::SetBirthTime(const string& _birthTime)
{
    m_birthTime = _birthTime;
    m_birthTimeHasBeenSet = true;
}

bool NeonatalInfo::BirthTimeHasBeenSet() const
{
    return m_birthTimeHasBeenSet;
}

string NeonatalInfo::GetBirthPlace() const
{
    return m_birthPlace;
}

void NeonatalInfo::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool NeonatalInfo::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string NeonatalInfo::GetMedicalInstitutions() const
{
    return m_medicalInstitutions;
}

void NeonatalInfo::SetMedicalInstitutions(const string& _medicalInstitutions)
{
    m_medicalInstitutions = _medicalInstitutions;
    m_medicalInstitutionsHasBeenSet = true;
}

bool NeonatalInfo::MedicalInstitutionsHasBeenSet() const
{
    return m_medicalInstitutionsHasBeenSet;
}

