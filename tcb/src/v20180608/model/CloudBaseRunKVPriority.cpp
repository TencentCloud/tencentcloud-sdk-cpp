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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunKVPriority.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunKVPriority::CloudBaseRunKVPriority() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunKVPriority::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunKVPriority.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunKVPriority.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunKVPriority.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunKVPriority::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string CloudBaseRunKVPriority::GetKey() const
{
    return m_key;
}

void CloudBaseRunKVPriority::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CloudBaseRunKVPriority::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CloudBaseRunKVPriority::GetValue() const
{
    return m_value;
}

void CloudBaseRunKVPriority::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CloudBaseRunKVPriority::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t CloudBaseRunKVPriority::GetPriority() const
{
    return m_priority;
}

void CloudBaseRunKVPriority::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CloudBaseRunKVPriority::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

