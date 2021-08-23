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

#include <tencentcloud/iot/v20180123/model/DataTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DataTemplate::DataTemplate() :
    m_numberHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_boolHasBeenSet(false)
{
}

CoreInternalOutcome DataTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataTemplate.Number` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_number.Deserialize(value["Number"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_numberHasBeenSet = true;
    }

    if (value.HasMember("String") && !value["String"].IsNull())
    {
        if (!value["String"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataTemplate.String` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_string.Deserialize(value["String"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stringHasBeenSet = true;
    }

    if (value.HasMember("Enum") && !value["Enum"].IsNull())
    {
        if (!value["Enum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataTemplate.Enum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enum.Deserialize(value["Enum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enumHasBeenSet = true;
    }

    if (value.HasMember("Bool") && !value["Bool"].IsNull())
    {
        if (!value["Bool"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataTemplate.Bool` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bool.Deserialize(value["Bool"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_number.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "String";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_string.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_boolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bool.ToJsonObject(value[key.c_str()], allocator);
    }

}


NumberData DataTemplate::GetNumber() const
{
    return m_number;
}

void DataTemplate::SetNumber(const NumberData& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool DataTemplate::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

StringData DataTemplate::GetString() const
{
    return m_string;
}

void DataTemplate::SetString(const StringData& _string)
{
    m_string = _string;
    m_stringHasBeenSet = true;
}

bool DataTemplate::StringHasBeenSet() const
{
    return m_stringHasBeenSet;
}

EnumData DataTemplate::GetEnum() const
{
    return m_enum;
}

void DataTemplate::SetEnum(const EnumData& _enum)
{
    m_enum = _enum;
    m_enumHasBeenSet = true;
}

bool DataTemplate::EnumHasBeenSet() const
{
    return m_enumHasBeenSet;
}

BoolData DataTemplate::GetBool() const
{
    return m_bool;
}

void DataTemplate::SetBool(const BoolData& _bool)
{
    m_bool = _bool;
    m_boolHasBeenSet = true;
}

bool DataTemplate::BoolHasBeenSet() const
{
    return m_boolHasBeenSet;
}

