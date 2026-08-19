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

#include <tencentcloud/csip/v20221121/model/BaselineOverviewStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineOverviewStatistic::BaselineOverviewStatistic() :
    m_notPassItemCountHasBeenSet(false),
    m_notPassItemStatisticHasBeenSet(false),
    m_lastYearFixCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineOverviewStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotPassItemCount") && !value["NotPassItemCount"].IsNull())
    {
        if (!value["NotPassItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineOverviewStatistic.NotPassItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassItemCount = value["NotPassItemCount"].GetUint64();
        m_notPassItemCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassItemStatistic") && !value["NotPassItemStatistic"].IsNull())
    {
        if (!value["NotPassItemStatistic"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineOverviewStatistic.NotPassItemStatistic` is not array type"));

        const rapidjson::Value &tmpValue = value["NotPassItemStatistic"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotPassItemStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notPassItemStatistic.push_back(item);
        }
        m_notPassItemStatisticHasBeenSet = true;
    }

    if (value.HasMember("LastYearFixCount") && !value["LastYearFixCount"].IsNull())
    {
        if (!value["LastYearFixCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineOverviewStatistic.LastYearFixCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastYearFixCount = value["LastYearFixCount"].GetUint64();
        m_lastYearFixCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineOverviewStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notPassItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassItemCount, allocator);
    }

    if (m_notPassItemStatisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemStatistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notPassItemStatistic.begin(); itr != m_notPassItemStatistic.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastYearFixCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastYearFixCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastYearFixCount, allocator);
    }

}


uint64_t BaselineOverviewStatistic::GetNotPassItemCount() const
{
    return m_notPassItemCount;
}

void BaselineOverviewStatistic::SetNotPassItemCount(const uint64_t& _notPassItemCount)
{
    m_notPassItemCount = _notPassItemCount;
    m_notPassItemCountHasBeenSet = true;
}

bool BaselineOverviewStatistic::NotPassItemCountHasBeenSet() const
{
    return m_notPassItemCountHasBeenSet;
}

vector<NotPassItemStatistic> BaselineOverviewStatistic::GetNotPassItemStatistic() const
{
    return m_notPassItemStatistic;
}

void BaselineOverviewStatistic::SetNotPassItemStatistic(const vector<NotPassItemStatistic>& _notPassItemStatistic)
{
    m_notPassItemStatistic = _notPassItemStatistic;
    m_notPassItemStatisticHasBeenSet = true;
}

bool BaselineOverviewStatistic::NotPassItemStatisticHasBeenSet() const
{
    return m_notPassItemStatisticHasBeenSet;
}

uint64_t BaselineOverviewStatistic::GetLastYearFixCount() const
{
    return m_lastYearFixCount;
}

void BaselineOverviewStatistic::SetLastYearFixCount(const uint64_t& _lastYearFixCount)
{
    m_lastYearFixCount = _lastYearFixCount;
    m_lastYearFixCountHasBeenSet = true;
}

bool BaselineOverviewStatistic::LastYearFixCountHasBeenSet() const
{
    return m_lastYearFixCountHasBeenSet;
}

