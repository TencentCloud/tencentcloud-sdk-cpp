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

#include <tencentcloud/mna/v20210119/model/MonitorData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

MonitorData::MonitorData() :
    m_timeHasBeenSet(false),
    m_businessMetricsHasBeenSet(false),
    m_slotNetInfoHasBeenSet(false)
{
}

CoreInternalOutcome MonitorData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("BusinessMetrics") && !value["BusinessMetrics"].IsNull())
    {
        if (!value["BusinessMetrics"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorData.BusinessMetrics` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_businessMetrics = value["BusinessMetrics"].GetDouble();
        m_businessMetricsHasBeenSet = true;
    }

    if (value.HasMember("SlotNetInfo") && !value["SlotNetInfo"].IsNull())
    {
        if (!value["SlotNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorData.SlotNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SlotNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotNetInfo.push_back(item);
        }
        m_slotNetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_businessMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessMetrics, allocator);
    }

    if (m_slotNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotNetInfo.begin(); itr != m_slotNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MonitorData::GetTime() const
{
    return m_time;
}

void MonitorData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MonitorData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double MonitorData::GetBusinessMetrics() const
{
    return m_businessMetrics;
}

void MonitorData::SetBusinessMetrics(const double& _businessMetrics)
{
    m_businessMetrics = _businessMetrics;
    m_businessMetricsHasBeenSet = true;
}

bool MonitorData::BusinessMetricsHasBeenSet() const
{
    return m_businessMetricsHasBeenSet;
}

vector<SlotNetInfo> MonitorData::GetSlotNetInfo() const
{
    return m_slotNetInfo;
}

void MonitorData::SetSlotNetInfo(const vector<SlotNetInfo>& _slotNetInfo)
{
    m_slotNetInfo = _slotNetInfo;
    m_slotNetInfoHasBeenSet = true;
}

bool MonitorData::SlotNetInfoHasBeenSet() const
{
    return m_slotNetInfoHasBeenSet;
}

