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

#include <tencentcloud/gaap/v20180529/model/StatisticsDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

StatisticsDataInfo::StatisticsDataInfo() :
    m_timeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome StatisticsDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticsDataInfo.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticsDataInfo.Data` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_data = value["Data"].GetDouble();
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticsDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_data, allocator);
    }

}


uint64_t StatisticsDataInfo::GetTime() const
{
    return m_time;
}

void StatisticsDataInfo::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool StatisticsDataInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double StatisticsDataInfo::GetData() const
{
    return m_data;
}

void StatisticsDataInfo::SetData(const double& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool StatisticsDataInfo::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

