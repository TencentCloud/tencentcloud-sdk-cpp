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

#include <tencentcloud/cdn/v20180606/model/DDoSStatsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DDoSStatsData::DDoSStatsData() :
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome DDoSStatsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSStatsData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSStatsData.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSStatsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string DDoSStatsData::GetTime() const
{
    return m_time;
}

void DDoSStatsData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DDoSStatsData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double DDoSStatsData::GetValue() const
{
    return m_value;
}

void DDoSStatsData::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DDoSStatsData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

