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

#include <tencentcloud/aca/v20210323/model/PatientBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

PatientBaseInfo::PatientBaseInfo() :
    m_sexHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_livePlaceHasBeenSet(false),
    m_birthDayHasBeenSet(false)
{
}

CoreInternalOutcome PatientBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.Weight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weight = string(value["Weight"].GetString());
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PatientId") && !value["PatientId"].IsNull())
    {
        if (!value["PatientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.PatientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patientId = string(value["PatientId"].GetString());
        m_patientIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("LivePlace") && !value["LivePlace"].IsNull())
    {
        if (!value["LivePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.LivePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livePlace = string(value["LivePlace"].GetString());
        m_livePlaceHasBeenSet = true;
    }

    if (value.HasMember("BirthDay") && !value["BirthDay"].IsNull())
    {
        if (!value["BirthDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientBaseInfo.BirthDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthDay = string(value["BirthDay"].GetString());
        m_birthDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatientBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weight.c_str(), allocator).Move(), allocator);
    }

    if (m_patientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patientId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_livePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDay.c_str(), allocator).Move(), allocator);
    }

}


string PatientBaseInfo::GetSex() const
{
    return m_sex;
}

void PatientBaseInfo::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool PatientBaseInfo::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PatientBaseInfo::GetHeight() const
{
    return m_height;
}

void PatientBaseInfo::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool PatientBaseInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string PatientBaseInfo::GetWeight() const
{
    return m_weight;
}

void PatientBaseInfo::SetWeight(const string& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool PatientBaseInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string PatientBaseInfo::GetPatientId() const
{
    return m_patientId;
}

void PatientBaseInfo::SetPatientId(const string& _patientId)
{
    m_patientId = _patientId;
    m_patientIdHasBeenSet = true;
}

bool PatientBaseInfo::PatientIdHasBeenSet() const
{
    return m_patientIdHasBeenSet;
}

string PatientBaseInfo::GetName() const
{
    return m_name;
}

void PatientBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PatientBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PatientBaseInfo::GetAge() const
{
    return m_age;
}

void PatientBaseInfo::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool PatientBaseInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string PatientBaseInfo::GetBirthPlace() const
{
    return m_birthPlace;
}

void PatientBaseInfo::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PatientBaseInfo::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PatientBaseInfo::GetLivePlace() const
{
    return m_livePlace;
}

void PatientBaseInfo::SetLivePlace(const string& _livePlace)
{
    m_livePlace = _livePlace;
    m_livePlaceHasBeenSet = true;
}

bool PatientBaseInfo::LivePlaceHasBeenSet() const
{
    return m_livePlaceHasBeenSet;
}

string PatientBaseInfo::GetBirthDay() const
{
    return m_birthDay;
}

void PatientBaseInfo::SetBirthDay(const string& _birthDay)
{
    m_birthDay = _birthDay;
    m_birthDayHasBeenSet = true;
}

bool PatientBaseInfo::BirthDayHasBeenSet() const
{
    return m_birthDayHasBeenSet;
}

