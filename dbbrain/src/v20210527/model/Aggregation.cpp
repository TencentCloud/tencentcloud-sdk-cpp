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

#include <tencentcloud/dbbrain/v20210527/model/Aggregation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

Aggregation::Aggregation() :
    m_avgExecTimeHasBeenSet(false),
    m_avgDocsExaminedHasBeenSet(false),
    m_slowLogCountHasBeenSet(false),
    m_sortCountHasBeenSet(false),
    m_slowLogsHasBeenSet(false)
{
}

CoreInternalOutcome Aggregation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AvgExecTime") && !value["AvgExecTime"].IsNull())
    {
        if (!value["AvgExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregation.AvgExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgExecTime = value["AvgExecTime"].GetInt64();
        m_avgExecTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgDocsExamined") && !value["AvgDocsExamined"].IsNull())
    {
        if (!value["AvgDocsExamined"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregation.AvgDocsExamined` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgDocsExamined = value["AvgDocsExamined"].GetInt64();
        m_avgDocsExaminedHasBeenSet = true;
    }

    if (value.HasMember("SlowLogCount") && !value["SlowLogCount"].IsNull())
    {
        if (!value["SlowLogCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregation.SlowLogCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slowLogCount = value["SlowLogCount"].GetInt64();
        m_slowLogCountHasBeenSet = true;
    }

    if (value.HasMember("SortCount") && !value["SortCount"].IsNull())
    {
        if (!value["SortCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregation.SortCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortCount = value["SortCount"].GetInt64();
        m_sortCountHasBeenSet = true;
    }

    if (value.HasMember("SlowLogs") && !value["SlowLogs"].IsNull())
    {
        if (!value["SlowLogs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Aggregation.SlowLogs` is not array type"));

        const rapidjson::Value &tmpValue = value["SlowLogs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slowLogs.push_back((*itr).GetString());
        }
        m_slowLogsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Aggregation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_avgExecTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgExecTime, allocator);
    }

    if (m_avgDocsExaminedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDocsExamined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDocsExamined, allocator);
    }

    if (m_slowLogCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowLogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slowLogCount, allocator);
    }

    if (m_sortCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortCount, allocator);
    }

    if (m_slowLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slowLogs.begin(); itr != m_slowLogs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t Aggregation::GetAvgExecTime() const
{
    return m_avgExecTime;
}

void Aggregation::SetAvgExecTime(const int64_t& _avgExecTime)
{
    m_avgExecTime = _avgExecTime;
    m_avgExecTimeHasBeenSet = true;
}

bool Aggregation::AvgExecTimeHasBeenSet() const
{
    return m_avgExecTimeHasBeenSet;
}

int64_t Aggregation::GetAvgDocsExamined() const
{
    return m_avgDocsExamined;
}

void Aggregation::SetAvgDocsExamined(const int64_t& _avgDocsExamined)
{
    m_avgDocsExamined = _avgDocsExamined;
    m_avgDocsExaminedHasBeenSet = true;
}

bool Aggregation::AvgDocsExaminedHasBeenSet() const
{
    return m_avgDocsExaminedHasBeenSet;
}

int64_t Aggregation::GetSlowLogCount() const
{
    return m_slowLogCount;
}

void Aggregation::SetSlowLogCount(const int64_t& _slowLogCount)
{
    m_slowLogCount = _slowLogCount;
    m_slowLogCountHasBeenSet = true;
}

bool Aggregation::SlowLogCountHasBeenSet() const
{
    return m_slowLogCountHasBeenSet;
}

int64_t Aggregation::GetSortCount() const
{
    return m_sortCount;
}

void Aggregation::SetSortCount(const int64_t& _sortCount)
{
    m_sortCount = _sortCount;
    m_sortCountHasBeenSet = true;
}

bool Aggregation::SortCountHasBeenSet() const
{
    return m_sortCountHasBeenSet;
}

vector<string> Aggregation::GetSlowLogs() const
{
    return m_slowLogs;
}

void Aggregation::SetSlowLogs(const vector<string>& _slowLogs)
{
    m_slowLogs = _slowLogs;
    m_slowLogsHasBeenSet = true;
}

bool Aggregation::SlowLogsHasBeenSet() const
{
    return m_slowLogsHasBeenSet;
}

