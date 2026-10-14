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

#include <tencentcloud/adp/v20260520/model/BatchRunSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

BatchRunSummary::BatchRunSummary() :
    m_failedCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_failedIndexListHasBeenSet(false),
    m_justCompletedIndexListHasBeenSet(false),
    m_runningIndexListHasBeenSet(false),
    m_successIndexListHasBeenSet(false)
{
}

CoreInternalOutcome BatchRunSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("FailedIndexList") && !value["FailedIndexList"].IsNull())
    {
        if (!value["FailedIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.FailedIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedIndexList.push_back((*itr).GetInt64());
        }
        m_failedIndexListHasBeenSet = true;
    }

    if (value.HasMember("JustCompletedIndexList") && !value["JustCompletedIndexList"].IsNull())
    {
        if (!value["JustCompletedIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.JustCompletedIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["JustCompletedIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_justCompletedIndexList.push_back((*itr).GetInt64());
        }
        m_justCompletedIndexListHasBeenSet = true;
    }

    if (value.HasMember("RunningIndexList") && !value["RunningIndexList"].IsNull())
    {
        if (!value["RunningIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.RunningIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["RunningIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runningIndexList.push_back((*itr).GetInt64());
        }
        m_runningIndexListHasBeenSet = true;
    }

    if (value.HasMember("SuccessIndexList") && !value["SuccessIndexList"].IsNull())
    {
        if (!value["SuccessIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchRunSummary.SuccessIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successIndexList.push_back((*itr).GetInt64());
        }
        m_successIndexListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchRunSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_failedIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedIndexList.begin(); itr != m_failedIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_justCompletedIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JustCompletedIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_justCompletedIndexList.begin(); itr != m_justCompletedIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_runningIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runningIndexList.begin(); itr != m_runningIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_successIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successIndexList.begin(); itr != m_successIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t BatchRunSummary::GetFailedCount() const
{
    return m_failedCount;
}

void BatchRunSummary::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool BatchRunSummary::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t BatchRunSummary::GetSuccessCount() const
{
    return m_successCount;
}

void BatchRunSummary::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool BatchRunSummary::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t BatchRunSummary::GetTotalCount() const
{
    return m_totalCount;
}

void BatchRunSummary::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BatchRunSummary::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<int64_t> BatchRunSummary::GetFailedIndexList() const
{
    return m_failedIndexList;
}

void BatchRunSummary::SetFailedIndexList(const vector<int64_t>& _failedIndexList)
{
    m_failedIndexList = _failedIndexList;
    m_failedIndexListHasBeenSet = true;
}

bool BatchRunSummary::FailedIndexListHasBeenSet() const
{
    return m_failedIndexListHasBeenSet;
}

vector<int64_t> BatchRunSummary::GetJustCompletedIndexList() const
{
    return m_justCompletedIndexList;
}

void BatchRunSummary::SetJustCompletedIndexList(const vector<int64_t>& _justCompletedIndexList)
{
    m_justCompletedIndexList = _justCompletedIndexList;
    m_justCompletedIndexListHasBeenSet = true;
}

bool BatchRunSummary::JustCompletedIndexListHasBeenSet() const
{
    return m_justCompletedIndexListHasBeenSet;
}

vector<int64_t> BatchRunSummary::GetRunningIndexList() const
{
    return m_runningIndexList;
}

void BatchRunSummary::SetRunningIndexList(const vector<int64_t>& _runningIndexList)
{
    m_runningIndexList = _runningIndexList;
    m_runningIndexListHasBeenSet = true;
}

bool BatchRunSummary::RunningIndexListHasBeenSet() const
{
    return m_runningIndexListHasBeenSet;
}

vector<int64_t> BatchRunSummary::GetSuccessIndexList() const
{
    return m_successIndexList;
}

void BatchRunSummary::SetSuccessIndexList(const vector<int64_t>& _successIndexList)
{
    m_successIndexList = _successIndexList;
    m_successIndexListHasBeenSet = true;
}

bool BatchRunSummary::SuccessIndexListHasBeenSet() const
{
    return m_successIndexListHasBeenSet;
}

