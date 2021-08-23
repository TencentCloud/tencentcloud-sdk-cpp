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

#include <tencentcloud/bda/v20200324/model/AttributesOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

AttributesOptions::AttributesOptions() :
    m_ageHasBeenSet(false),
    m_bagHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_upperBodyClothHasBeenSet(false),
    m_lowerBodyClothHasBeenSet(false)
{
}

CoreInternalOutcome AttributesOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.Age` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetBool();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Bag") && !value["Bag"].IsNull())
    {
        if (!value["Bag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.Bag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bag = value["Bag"].GetBool();
        m_bagHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.Gender` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetBool();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Orientation") && !value["Orientation"].IsNull())
    {
        if (!value["Orientation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.Orientation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_orientation = value["Orientation"].GetBool();
        m_orientationHasBeenSet = true;
    }

    if (value.HasMember("UpperBodyCloth") && !value["UpperBodyCloth"].IsNull())
    {
        if (!value["UpperBodyCloth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.UpperBodyCloth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_upperBodyCloth = value["UpperBodyCloth"].GetBool();
        m_upperBodyClothHasBeenSet = true;
    }

    if (value.HasMember("LowerBodyCloth") && !value["LowerBodyCloth"].IsNull())
    {
        if (!value["LowerBodyCloth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesOptions.LowerBodyCloth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lowerBodyCloth = value["LowerBodyCloth"].GetBool();
        m_lowerBodyClothHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributesOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_bagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bag, allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_orientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orientation, allocator);
    }

    if (m_upperBodyClothHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperBodyCloth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upperBodyCloth, allocator);
    }

    if (m_lowerBodyClothHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerBodyCloth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowerBodyCloth, allocator);
    }

}


bool AttributesOptions::GetAge() const
{
    return m_age;
}

void AttributesOptions::SetAge(const bool& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool AttributesOptions::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

bool AttributesOptions::GetBag() const
{
    return m_bag;
}

void AttributesOptions::SetBag(const bool& _bag)
{
    m_bag = _bag;
    m_bagHasBeenSet = true;
}

bool AttributesOptions::BagHasBeenSet() const
{
    return m_bagHasBeenSet;
}

bool AttributesOptions::GetGender() const
{
    return m_gender;
}

void AttributesOptions::SetGender(const bool& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool AttributesOptions::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

bool AttributesOptions::GetOrientation() const
{
    return m_orientation;
}

void AttributesOptions::SetOrientation(const bool& _orientation)
{
    m_orientation = _orientation;
    m_orientationHasBeenSet = true;
}

bool AttributesOptions::OrientationHasBeenSet() const
{
    return m_orientationHasBeenSet;
}

bool AttributesOptions::GetUpperBodyCloth() const
{
    return m_upperBodyCloth;
}

void AttributesOptions::SetUpperBodyCloth(const bool& _upperBodyCloth)
{
    m_upperBodyCloth = _upperBodyCloth;
    m_upperBodyClothHasBeenSet = true;
}

bool AttributesOptions::UpperBodyClothHasBeenSet() const
{
    return m_upperBodyClothHasBeenSet;
}

bool AttributesOptions::GetLowerBodyCloth() const
{
    return m_lowerBodyCloth;
}

void AttributesOptions::SetLowerBodyCloth(const bool& _lowerBodyCloth)
{
    m_lowerBodyCloth = _lowerBodyCloth;
    m_lowerBodyClothHasBeenSet = true;
}

bool AttributesOptions::LowerBodyClothHasBeenSet() const
{
    return m_lowerBodyClothHasBeenSet;
}

