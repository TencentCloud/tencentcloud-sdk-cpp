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

#include <tencentcloud/vod/v20180717/model/StatDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

StatDataItem::StatDataItem() :
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome StatDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatDataItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatDataItem.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string StatDataItem::GetTime() const
{
    return m_time;
}

void StatDataItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool StatDataItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t StatDataItem::GetValue() const
{
    return m_value;
}

void StatDataItem::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool StatDataItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

