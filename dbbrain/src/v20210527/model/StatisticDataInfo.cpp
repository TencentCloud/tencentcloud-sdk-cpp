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

#include <tencentcloud/dbbrain/v20210527/model/StatisticDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

StatisticDataInfo::StatisticDataInfo() :
    m_nameHasBeenSet(false),
    m_timeAvgHasBeenSet(false),
    m_timeSumHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome StatisticDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticDataInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TimeAvg") && !value["TimeAvg"].IsNull())
    {
        if (!value["TimeAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticDataInfo.TimeAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeAvg = value["TimeAvg"].GetDouble();
        m_timeAvgHasBeenSet = true;
    }

    if (value.HasMember("TimeSum") && !value["TimeSum"].IsNull())
    {
        if (!value["TimeSum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticDataInfo.TimeSum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeSum = value["TimeSum"].GetDouble();
        m_timeSumHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticDataInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_timeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeAvg, allocator);
    }

    if (m_timeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSum, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string StatisticDataInfo::GetName() const
{
    return m_name;
}

void StatisticDataInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StatisticDataInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double StatisticDataInfo::GetTimeAvg() const
{
    return m_timeAvg;
}

void StatisticDataInfo::SetTimeAvg(const double& _timeAvg)
{
    m_timeAvg = _timeAvg;
    m_timeAvgHasBeenSet = true;
}

bool StatisticDataInfo::TimeAvgHasBeenSet() const
{
    return m_timeAvgHasBeenSet;
}

double StatisticDataInfo::GetTimeSum() const
{
    return m_timeSum;
}

void StatisticDataInfo::SetTimeSum(const double& _timeSum)
{
    m_timeSum = _timeSum;
    m_timeSumHasBeenSet = true;
}

bool StatisticDataInfo::TimeSumHasBeenSet() const
{
    return m_timeSumHasBeenSet;
}

int64_t StatisticDataInfo::GetCount() const
{
    return m_count;
}

void StatisticDataInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool StatisticDataInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

