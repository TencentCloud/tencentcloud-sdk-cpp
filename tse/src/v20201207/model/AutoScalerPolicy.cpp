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

#include <tencentcloud/tse/v20201207/model/AutoScalerPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AutoScalerPolicy::AutoScalerPolicy() :
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_periodSecondsHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalerPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerPolicy.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerPolicy.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("PeriodSeconds") && !value["PeriodSeconds"].IsNull())
    {
        if (!value["PeriodSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerPolicy.PeriodSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodSeconds = value["PeriodSeconds"].GetInt64();
        m_periodSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalerPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_periodSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodSeconds, allocator);
    }

}


string AutoScalerPolicy::GetType() const
{
    return m_type;
}

void AutoScalerPolicy::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AutoScalerPolicy::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AutoScalerPolicy::GetValue() const
{
    return m_value;
}

void AutoScalerPolicy::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AutoScalerPolicy::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t AutoScalerPolicy::GetPeriodSeconds() const
{
    return m_periodSeconds;
}

void AutoScalerPolicy::SetPeriodSeconds(const int64_t& _periodSeconds)
{
    m_periodSeconds = _periodSeconds;
    m_periodSecondsHasBeenSet = true;
}

bool AutoScalerPolicy::PeriodSecondsHasBeenSet() const
{
    return m_periodSecondsHasBeenSet;
}

