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

#include <tencentcloud/cdwpg/v20201230/model/ValueRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ValueRange::ValueRange() :
    m_typeHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_stringHasBeenSet(false)
{
}

CoreInternalOutcome ValueRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueRange.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueRange.Range` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_range.Deserialize(value["Range"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("Enum") && !value["Enum"].IsNull())
    {
        if (!value["Enum"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ValueRange.Enum` is not array type"));

        const rapidjson::Value &tmpValue = value["Enum"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enum.push_back((*itr).GetString());
        }
        m_enumHasBeenSet = true;
    }

    if (value.HasMember("String") && !value["String"].IsNull())
    {
        if (!value["String"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueRange.String` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_string = string(value["String"].GetString());
        m_stringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_range.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enum.begin(); itr != m_enum.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "String";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_string.c_str(), allocator).Move(), allocator);
    }

}


string ValueRange::GetType() const
{
    return m_type;
}

void ValueRange::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ValueRange::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Range ValueRange::GetRange() const
{
    return m_range;
}

void ValueRange::SetRange(const Range& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ValueRange::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

vector<string> ValueRange::GetEnum() const
{
    return m_enum;
}

void ValueRange::SetEnum(const vector<string>& _enum)
{
    m_enum = _enum;
    m_enumHasBeenSet = true;
}

bool ValueRange::EnumHasBeenSet() const
{
    return m_enumHasBeenSet;
}

string ValueRange::GetString() const
{
    return m_string;
}

void ValueRange::SetString(const string& _string)
{
    m_string = _string;
    m_stringHasBeenSet = true;
}

bool ValueRange::StringHasBeenSet() const
{
    return m_stringHasBeenSet;
}

