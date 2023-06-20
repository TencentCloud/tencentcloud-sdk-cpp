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

#include <tencentcloud/dlc/v20210125/model/CommonMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CommonMetrics::CommonMetrics() :
    m_createTaskTimeHasBeenSet(false),
    m_processTimeHasBeenSet(false),
    m_queueTimeHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_isResultCacheHitHasBeenSet(false),
    m_matchedMVBytesHasBeenSet(false),
    m_matchedMVsHasBeenSet(false),
    m_affectedBytesHasBeenSet(false),
    m_affectedRowsHasBeenSet(false),
    m_processedBytesHasBeenSet(false),
    m_processedRowsHasBeenSet(false)
{
}

CoreInternalOutcome CommonMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTaskTime") && !value["CreateTaskTime"].IsNull())
    {
        if (!value["CreateTaskTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.CreateTaskTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_createTaskTime = value["CreateTaskTime"].GetDouble();
        m_createTaskTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessTime") && !value["ProcessTime"].IsNull())
    {
        if (!value["ProcessTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.ProcessTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_processTime = value["ProcessTime"].GetDouble();
        m_processTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueTime") && !value["QueueTime"].IsNull())
    {
        if (!value["QueueTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.QueueTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queueTime = value["QueueTime"].GetDouble();
        m_queueTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.ExecutionTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_executionTime = value["ExecutionTime"].GetDouble();
        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("IsResultCacheHit") && !value["IsResultCacheHit"].IsNull())
    {
        if (!value["IsResultCacheHit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.IsResultCacheHit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isResultCacheHit = value["IsResultCacheHit"].GetBool();
        m_isResultCacheHitHasBeenSet = true;
    }

    if (value.HasMember("MatchedMVBytes") && !value["MatchedMVBytes"].IsNull())
    {
        if (!value["MatchedMVBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.MatchedMVBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchedMVBytes = value["MatchedMVBytes"].GetInt64();
        m_matchedMVBytesHasBeenSet = true;
    }

    if (value.HasMember("MatchedMVs") && !value["MatchedMVs"].IsNull())
    {
        if (!value["MatchedMVs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.MatchedMVs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchedMVs = string(value["MatchedMVs"].GetString());
        m_matchedMVsHasBeenSet = true;
    }

    if (value.HasMember("AffectedBytes") && !value["AffectedBytes"].IsNull())
    {
        if (!value["AffectedBytes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.AffectedBytes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectedBytes = string(value["AffectedBytes"].GetString());
        m_affectedBytesHasBeenSet = true;
    }

    if (value.HasMember("AffectedRows") && !value["AffectedRows"].IsNull())
    {
        if (!value["AffectedRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.AffectedRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedRows = value["AffectedRows"].GetInt64();
        m_affectedRowsHasBeenSet = true;
    }

    if (value.HasMember("ProcessedBytes") && !value["ProcessedBytes"].IsNull())
    {
        if (!value["ProcessedBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.ProcessedBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processedBytes = value["ProcessedBytes"].GetInt64();
        m_processedBytesHasBeenSet = true;
    }

    if (value.HasMember("ProcessedRows") && !value["ProcessedRows"].IsNull())
    {
        if (!value["ProcessedRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMetrics.ProcessedRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processedRows = value["ProcessedRows"].GetInt64();
        m_processedRowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTaskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTaskTime, allocator);
    }

    if (m_processTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processTime, allocator);
    }

    if (m_queueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueTime, allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionTime, allocator);
    }

    if (m_isResultCacheHitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsResultCacheHit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isResultCacheHit, allocator);
    }

    if (m_matchedMVBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchedMVBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchedMVBytes, allocator);
    }

    if (m_matchedMVsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchedMVs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchedMVs.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectedBytes.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedRows, allocator);
    }

    if (m_processedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processedBytes, allocator);
    }

    if (m_processedRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processedRows, allocator);
    }

}


double CommonMetrics::GetCreateTaskTime() const
{
    return m_createTaskTime;
}

void CommonMetrics::SetCreateTaskTime(const double& _createTaskTime)
{
    m_createTaskTime = _createTaskTime;
    m_createTaskTimeHasBeenSet = true;
}

bool CommonMetrics::CreateTaskTimeHasBeenSet() const
{
    return m_createTaskTimeHasBeenSet;
}

double CommonMetrics::GetProcessTime() const
{
    return m_processTime;
}

void CommonMetrics::SetProcessTime(const double& _processTime)
{
    m_processTime = _processTime;
    m_processTimeHasBeenSet = true;
}

bool CommonMetrics::ProcessTimeHasBeenSet() const
{
    return m_processTimeHasBeenSet;
}

double CommonMetrics::GetQueueTime() const
{
    return m_queueTime;
}

void CommonMetrics::SetQueueTime(const double& _queueTime)
{
    m_queueTime = _queueTime;
    m_queueTimeHasBeenSet = true;
}

bool CommonMetrics::QueueTimeHasBeenSet() const
{
    return m_queueTimeHasBeenSet;
}

double CommonMetrics::GetExecutionTime() const
{
    return m_executionTime;
}

void CommonMetrics::SetExecutionTime(const double& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool CommonMetrics::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

bool CommonMetrics::GetIsResultCacheHit() const
{
    return m_isResultCacheHit;
}

void CommonMetrics::SetIsResultCacheHit(const bool& _isResultCacheHit)
{
    m_isResultCacheHit = _isResultCacheHit;
    m_isResultCacheHitHasBeenSet = true;
}

bool CommonMetrics::IsResultCacheHitHasBeenSet() const
{
    return m_isResultCacheHitHasBeenSet;
}

int64_t CommonMetrics::GetMatchedMVBytes() const
{
    return m_matchedMVBytes;
}

void CommonMetrics::SetMatchedMVBytes(const int64_t& _matchedMVBytes)
{
    m_matchedMVBytes = _matchedMVBytes;
    m_matchedMVBytesHasBeenSet = true;
}

bool CommonMetrics::MatchedMVBytesHasBeenSet() const
{
    return m_matchedMVBytesHasBeenSet;
}

string CommonMetrics::GetMatchedMVs() const
{
    return m_matchedMVs;
}

void CommonMetrics::SetMatchedMVs(const string& _matchedMVs)
{
    m_matchedMVs = _matchedMVs;
    m_matchedMVsHasBeenSet = true;
}

bool CommonMetrics::MatchedMVsHasBeenSet() const
{
    return m_matchedMVsHasBeenSet;
}

string CommonMetrics::GetAffectedBytes() const
{
    return m_affectedBytes;
}

void CommonMetrics::SetAffectedBytes(const string& _affectedBytes)
{
    m_affectedBytes = _affectedBytes;
    m_affectedBytesHasBeenSet = true;
}

bool CommonMetrics::AffectedBytesHasBeenSet() const
{
    return m_affectedBytesHasBeenSet;
}

int64_t CommonMetrics::GetAffectedRows() const
{
    return m_affectedRows;
}

void CommonMetrics::SetAffectedRows(const int64_t& _affectedRows)
{
    m_affectedRows = _affectedRows;
    m_affectedRowsHasBeenSet = true;
}

bool CommonMetrics::AffectedRowsHasBeenSet() const
{
    return m_affectedRowsHasBeenSet;
}

int64_t CommonMetrics::GetProcessedBytes() const
{
    return m_processedBytes;
}

void CommonMetrics::SetProcessedBytes(const int64_t& _processedBytes)
{
    m_processedBytes = _processedBytes;
    m_processedBytesHasBeenSet = true;
}

bool CommonMetrics::ProcessedBytesHasBeenSet() const
{
    return m_processedBytesHasBeenSet;
}

int64_t CommonMetrics::GetProcessedRows() const
{
    return m_processedRows;
}

void CommonMetrics::SetProcessedRows(const int64_t& _processedRows)
{
    m_processedRows = _processedRows;
    m_processedRowsHasBeenSet = true;
}

bool CommonMetrics::ProcessedRowsHasBeenSet() const
{
    return m_processedRowsHasBeenSet;
}

