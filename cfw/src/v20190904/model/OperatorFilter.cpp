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

#include <tencentcloud/cfw/v20190904/model/OperatorFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OperatorFilter::OperatorFilter() :
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operatorTypeHasBeenSet(false)
{
}

CoreInternalOutcome OperatorFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperatorFilter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("OperatorType") && !value["OperatorType"].IsNull())
    {
        if (!value["OperatorType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorFilter.OperatorType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorType = value["OperatorType"].GetUint64();
        m_operatorTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperatorFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorType, allocator);
    }

}


string OperatorFilter::GetName() const
{
    return m_name;
}

void OperatorFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OperatorFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> OperatorFilter::GetValues() const
{
    return m_values;
}

void OperatorFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool OperatorFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

uint64_t OperatorFilter::GetOperatorType() const
{
    return m_operatorType;
}

void OperatorFilter::SetOperatorType(const uint64_t& _operatorType)
{
    m_operatorType = _operatorType;
    m_operatorTypeHasBeenSet = true;
}

bool OperatorFilter::OperatorTypeHasBeenSet() const
{
    return m_operatorTypeHasBeenSet;
}

