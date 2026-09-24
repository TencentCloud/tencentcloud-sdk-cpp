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

#include <tencentcloud/dlc/v20210125/model/RangePartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RangePartition::RangePartition() :
    m_nameHasBeenSet(false),
    m_lowerHasBeenSet(false),
    m_upperHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

CoreInternalOutcome RangePartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangePartition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Lower") && !value["Lower"].IsNull())
    {
        if (!value["Lower"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RangePartition.Lower` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lower.Deserialize(value["Lower"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowerHasBeenSet = true;
    }

    if (value.HasMember("Upper") && !value["Upper"].IsNull())
    {
        if (!value["Upper"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RangePartition.Upper` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upper.Deserialize(value["Upper"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upperHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RangePartition.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RangePartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lower.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upper.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RangePartition::GetName() const
{
    return m_name;
}

void RangePartition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RangePartition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Literal RangePartition::GetLower() const
{
    return m_lower;
}

void RangePartition::SetLower(const Literal& _lower)
{
    m_lower = _lower;
    m_lowerHasBeenSet = true;
}

bool RangePartition::LowerHasBeenSet() const
{
    return m_lowerHasBeenSet;
}

Literal RangePartition::GetUpper() const
{
    return m_upper;
}

void RangePartition::SetUpper(const Literal& _upper)
{
    m_upper = _upper;
    m_upperHasBeenSet = true;
}

bool RangePartition::UpperHasBeenSet() const
{
    return m_upperHasBeenSet;
}

vector<KVPair> RangePartition::GetProperties() const
{
    return m_properties;
}

void RangePartition::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool RangePartition::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

