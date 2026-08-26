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

#include <tencentcloud/monitor/v20230616/model/EnvEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

EnvEntry::EnvEntry() :
    m_valueHasBeenSet(false),
    m_sensitiveHasBeenSet(false)
{
}

CoreInternalOutcome EnvEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvEntry.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Sensitive") && !value["Sensitive"].IsNull())
    {
        if (!value["Sensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvEntry.Sensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sensitive = value["Sensitive"].GetBool();
        m_sensitiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitive, allocator);
    }

}


string EnvEntry::GetValue() const
{
    return m_value;
}

void EnvEntry::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool EnvEntry::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool EnvEntry::GetSensitive() const
{
    return m_sensitive;
}

void EnvEntry::SetSensitive(const bool& _sensitive)
{
    m_sensitive = _sensitive;
    m_sensitiveHasBeenSet = true;
}

bool EnvEntry::SensitiveHasBeenSet() const
{
    return m_sensitiveHasBeenSet;
}

