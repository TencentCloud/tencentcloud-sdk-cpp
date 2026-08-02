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

#include <tencentcloud/mps/v20190612/model/CustomModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CustomModel::CustomModel() :
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_appearanceHasBeenSet(false),
    m_bodyTypeHasBeenSet(false)
{
}

CoreInternalOutcome CustomModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomModel.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomModel.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Appearance") && !value["Appearance"].IsNull())
    {
        if (!value["Appearance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomModel.Appearance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appearance = string(value["Appearance"].GetString());
        m_appearanceHasBeenSet = true;
    }

    if (value.HasMember("BodyType") && !value["BodyType"].IsNull())
    {
        if (!value["BodyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomModel.BodyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyType = string(value["BodyType"].GetString());
        m_bodyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_appearanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appearance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appearance.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyType.c_str(), allocator).Move(), allocator);
    }

}


string CustomModel::GetGender() const
{
    return m_gender;
}

void CustomModel::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool CustomModel::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string CustomModel::GetAge() const
{
    return m_age;
}

void CustomModel::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool CustomModel::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string CustomModel::GetAppearance() const
{
    return m_appearance;
}

void CustomModel::SetAppearance(const string& _appearance)
{
    m_appearance = _appearance;
    m_appearanceHasBeenSet = true;
}

bool CustomModel::AppearanceHasBeenSet() const
{
    return m_appearanceHasBeenSet;
}

string CustomModel::GetBodyType() const
{
    return m_bodyType;
}

void CustomModel::SetBodyType(const string& _bodyType)
{
    m_bodyType = _bodyType;
    m_bodyTypeHasBeenSet = true;
}

bool CustomModel::BodyTypeHasBeenSet() const
{
    return m_bodyTypeHasBeenSet;
}

