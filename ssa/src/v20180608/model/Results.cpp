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

#include <tencentcloud/ssa/v20180608/model/Results.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

Results::Results() :
    m_statisticsHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_taskMaxCountHasBeenSet(false)
{
}

CoreInternalOutcome Results::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Results.Statistics` is not array type"));

        const rapidjson::Value &tmpValue = value["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTypeStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Results.Result` is not array type"));

        const rapidjson::Value &tmpValue = value["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MappingResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_result.push_back(item);
        }
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Results.TaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetUint64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("TaskMaxCount") && !value["TaskMaxCount"].IsNull())
    {
        if (!value["TaskMaxCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Results.TaskMaxCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMaxCount = value["TaskMaxCount"].GetUint64();
        m_taskMaxCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Results::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_taskMaxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMaxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMaxCount, allocator);
    }

}


vector<AssetTypeStatistic> Results::GetStatistics() const
{
    return m_statistics;
}

void Results::SetStatistics(const vector<AssetTypeStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool Results::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

vector<MappingResult> Results::GetResult() const
{
    return m_result;
}

void Results::SetResult(const vector<MappingResult>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool Results::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t Results::GetTaskCount() const
{
    return m_taskCount;
}

void Results::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool Results::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

uint64_t Results::GetTaskMaxCount() const
{
    return m_taskMaxCount;
}

void Results::SetTaskMaxCount(const uint64_t& _taskMaxCount)
{
    m_taskMaxCount = _taskMaxCount;
    m_taskMaxCountHasBeenSet = true;
}

bool Results::TaskMaxCountHasBeenSet() const
{
    return m_taskMaxCountHasBeenSet;
}

