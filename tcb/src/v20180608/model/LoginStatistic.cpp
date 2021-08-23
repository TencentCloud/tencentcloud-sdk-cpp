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

#include <tencentcloud/tcb/v20180608/model/LoginStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

LoginStatistic::LoginStatistic() :
    m_statisticalTypeHasBeenSet(false),
    m_statisticalCycleHasBeenSet(false),
    m_countHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LoginStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatisticalType") && !value["StatisticalType"].IsNull())
    {
        if (!value["StatisticalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginStatistic.StatisticalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statisticalType = string(value["StatisticalType"].GetString());
        m_statisticalTypeHasBeenSet = true;
    }

    if (value.HasMember("StatisticalCycle") && !value["StatisticalCycle"].IsNull())
    {
        if (!value["StatisticalCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginStatistic.StatisticalCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statisticalCycle = string(value["StatisticalCycle"].GetString());
        m_statisticalCycleHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginStatistic.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginStatistic.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statisticalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statisticalType.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticalCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticalCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statisticalCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string LoginStatistic::GetStatisticalType() const
{
    return m_statisticalType;
}

void LoginStatistic::SetStatisticalType(const string& _statisticalType)
{
    m_statisticalType = _statisticalType;
    m_statisticalTypeHasBeenSet = true;
}

bool LoginStatistic::StatisticalTypeHasBeenSet() const
{
    return m_statisticalTypeHasBeenSet;
}

string LoginStatistic::GetStatisticalCycle() const
{
    return m_statisticalCycle;
}

void LoginStatistic::SetStatisticalCycle(const string& _statisticalCycle)
{
    m_statisticalCycle = _statisticalCycle;
    m_statisticalCycleHasBeenSet = true;
}

bool LoginStatistic::StatisticalCycleHasBeenSet() const
{
    return m_statisticalCycleHasBeenSet;
}

uint64_t LoginStatistic::GetCount() const
{
    return m_count;
}

void LoginStatistic::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool LoginStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string LoginStatistic::GetUpdateTime() const
{
    return m_updateTime;
}

void LoginStatistic::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LoginStatistic::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

