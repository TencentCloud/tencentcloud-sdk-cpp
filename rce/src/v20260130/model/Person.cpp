/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20260130/model/Person.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Person::Person() :
    m_nameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_degreeHasBeenSet(false),
    m_occupationHasBeenSet(false)
{
}

CoreInternalOutcome Person::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Degree") && !value["Degree"].IsNull())
    {
        if (!value["Degree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Degree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_degree = string(value["Degree"].GetString());
        m_degreeHasBeenSet = true;
    }

    if (value.HasMember("Occupation") && !value["Occupation"].IsNull())
    {
        if (!value["Occupation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Occupation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupation = string(value["Occupation"].GetString());
        m_occupationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Person::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_degreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Degree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_degree.c_str(), allocator).Move(), allocator);
    }

    if (m_occupationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occupation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occupation.c_str(), allocator).Move(), allocator);
    }

}


string Person::GetName() const
{
    return m_name;
}

void Person::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Person::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Person::GetGender() const
{
    return m_gender;
}

void Person::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool Person::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string Person::GetBirthday() const
{
    return m_birthday;
}

void Person::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool Person::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string Person::GetDegree() const
{
    return m_degree;
}

void Person::SetDegree(const string& _degree)
{
    m_degree = _degree;
    m_degreeHasBeenSet = true;
}

bool Person::DegreeHasBeenSet() const
{
    return m_degreeHasBeenSet;
}

string Person::GetOccupation() const
{
    return m_occupation;
}

void Person::SetOccupation(const string& _occupation)
{
    m_occupation = _occupation;
    m_occupationHasBeenSet = true;
}

bool Person::OccupationHasBeenSet() const
{
    return m_occupationHasBeenSet;
}

