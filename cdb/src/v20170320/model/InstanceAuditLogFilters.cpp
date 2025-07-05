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

#include <tencentcloud/cdb/v20170320/model/InstanceAuditLogFilters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InstanceAuditLogFilters::InstanceAuditLogFilters() :
    m_typeHasBeenSet(false),
    m_compareHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAuditLogFilters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditLogFilters.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Compare") && !value["Compare"].IsNull())
    {
        if (!value["Compare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditLogFilters.Compare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compare = string(value["Compare"].GetString());
        m_compareHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAuditLogFilters.Value` is not array type"));

        const rapidjson::Value &tmpValue = value["Value"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_value.push_back((*itr).GetString());
        }
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAuditLogFilters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_compareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compare.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_value.begin(); itr != m_value.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstanceAuditLogFilters::GetType() const
{
    return m_type;
}

void InstanceAuditLogFilters::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceAuditLogFilters::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InstanceAuditLogFilters::GetCompare() const
{
    return m_compare;
}

void InstanceAuditLogFilters::SetCompare(const string& _compare)
{
    m_compare = _compare;
    m_compareHasBeenSet = true;
}

bool InstanceAuditLogFilters::CompareHasBeenSet() const
{
    return m_compareHasBeenSet;
}

vector<string> InstanceAuditLogFilters::GetValue() const
{
    return m_value;
}

void InstanceAuditLogFilters::SetValue(const vector<string>& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InstanceAuditLogFilters::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

