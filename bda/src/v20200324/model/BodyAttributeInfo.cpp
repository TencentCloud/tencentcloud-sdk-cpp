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

#include <tencentcloud/bda/v20200324/model/BodyAttributeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

BodyAttributeInfo::BodyAttributeInfo() :
    m_ageHasBeenSet(false),
    m_bagHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_upperBodyClothHasBeenSet(false),
    m_lowerBodyClothHasBeenSet(false)
{
}

CoreInternalOutcome BodyAttributeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.Age` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_age.Deserialize(value["Age"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Bag") && !value["Bag"].IsNull())
    {
        if (!value["Bag"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.Bag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bag.Deserialize(value["Bag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bagHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.Gender` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gender.Deserialize(value["Gender"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Orientation") && !value["Orientation"].IsNull())
    {
        if (!value["Orientation"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.Orientation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_orientation.Deserialize(value["Orientation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_orientationHasBeenSet = true;
    }

    if (value.HasMember("UpperBodyCloth") && !value["UpperBodyCloth"].IsNull())
    {
        if (!value["UpperBodyCloth"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.UpperBodyCloth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upperBodyCloth.Deserialize(value["UpperBodyCloth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upperBodyClothHasBeenSet = true;
    }

    if (value.HasMember("LowerBodyCloth") && !value["LowerBodyCloth"].IsNull())
    {
        if (!value["LowerBodyCloth"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BodyAttributeInfo.LowerBodyCloth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowerBodyCloth.Deserialize(value["LowerBodyCloth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowerBodyClothHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyAttributeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_age.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_genderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_gender.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_orientationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Orientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_orientation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upperBodyClothHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpperBodyCloth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_upperBodyCloth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowerBodyClothHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LowerBodyCloth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_lowerBodyCloth.ToJsonObject(value[key.c_str()], allocator);
    }

}


Age BodyAttributeInfo::GetAge() const
{
    return m_age;
}

void BodyAttributeInfo::SetAge(const Age& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool BodyAttributeInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

Bag BodyAttributeInfo::GetBag() const
{
    return m_bag;
}

void BodyAttributeInfo::SetBag(const Bag& _bag)
{
    m_bag = _bag;
    m_bagHasBeenSet = true;
}

bool BodyAttributeInfo::BagHasBeenSet() const
{
    return m_bagHasBeenSet;
}

Gender BodyAttributeInfo::GetGender() const
{
    return m_gender;
}

void BodyAttributeInfo::SetGender(const Gender& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool BodyAttributeInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

Orientation BodyAttributeInfo::GetOrientation() const
{
    return m_orientation;
}

void BodyAttributeInfo::SetOrientation(const Orientation& _orientation)
{
    m_orientation = _orientation;
    m_orientationHasBeenSet = true;
}

bool BodyAttributeInfo::OrientationHasBeenSet() const
{
    return m_orientationHasBeenSet;
}

UpperBodyCloth BodyAttributeInfo::GetUpperBodyCloth() const
{
    return m_upperBodyCloth;
}

void BodyAttributeInfo::SetUpperBodyCloth(const UpperBodyCloth& _upperBodyCloth)
{
    m_upperBodyCloth = _upperBodyCloth;
    m_upperBodyClothHasBeenSet = true;
}

bool BodyAttributeInfo::UpperBodyClothHasBeenSet() const
{
    return m_upperBodyClothHasBeenSet;
}

LowerBodyCloth BodyAttributeInfo::GetLowerBodyCloth() const
{
    return m_lowerBodyCloth;
}

void BodyAttributeInfo::SetLowerBodyCloth(const LowerBodyCloth& _lowerBodyCloth)
{
    m_lowerBodyCloth = _lowerBodyCloth;
    m_lowerBodyClothHasBeenSet = true;
}

bool BodyAttributeInfo::LowerBodyClothHasBeenSet() const
{
    return m_lowerBodyClothHasBeenSet;
}

