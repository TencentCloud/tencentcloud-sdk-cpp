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

#include <tencentcloud/wedata/v20250806/model/TrendData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TrendData::TrendData() :
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome TrendData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendData.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendData.Value` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetUint64();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrendData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


uint64_t TrendData::GetTimestamp() const
{
    return m_timestamp;
}

void TrendData::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool TrendData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t TrendData::GetValue() const
{
    return m_value;
}

void TrendData::SetValue(const uint64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TrendData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

