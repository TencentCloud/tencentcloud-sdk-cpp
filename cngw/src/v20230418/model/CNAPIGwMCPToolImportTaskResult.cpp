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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolImportTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwMCPToolImportTaskResult::CNAPIGwMCPToolImportTaskResult() :
    m_failedCountHasBeenSet(false),
    m_processedCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_toolsImportResultHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwMCPToolImportTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.FailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetUint64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessedCount") && !value["ProcessedCount"].IsNull())
    {
        if (!value["ProcessedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.ProcessedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processedCount = value["ProcessedCount"].GetUint64();
        m_processedCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("TaskEndTime") && !value["TaskEndTime"].IsNull())
    {
        if (!value["TaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.TaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEndTime = string(value["TaskEndTime"].GetString());
        m_taskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStartTime") && !value["TaskStartTime"].IsNull())
    {
        if (!value["TaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.TaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStartTime = string(value["TaskStartTime"].GetString());
        m_taskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("ToolsImportResult") && !value["ToolsImportResult"].IsNull())
    {
        if (!value["ToolsImportResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.ToolsImportResult` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolsImportResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CNAPIGwMCPToolImportResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_toolsImportResult.push_back(item);
        }
        m_toolsImportResultHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportTaskResult.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwMCPToolImportTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_processedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processedCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_toolsImportResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolsImportResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolsImportResult.begin(); itr != m_toolsImportResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


uint64_t CNAPIGwMCPToolImportTaskResult::GetFailedCount() const
{
    return m_failedCount;
}

void CNAPIGwMCPToolImportTaskResult::SetFailedCount(const uint64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

uint64_t CNAPIGwMCPToolImportTaskResult::GetProcessedCount() const
{
    return m_processedCount;
}

void CNAPIGwMCPToolImportTaskResult::SetProcessedCount(const uint64_t& _processedCount)
{
    m_processedCount = _processedCount;
    m_processedCountHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::ProcessedCountHasBeenSet() const
{
    return m_processedCountHasBeenSet;
}

uint64_t CNAPIGwMCPToolImportTaskResult::GetSuccessCount() const
{
    return m_successCount;
}

void CNAPIGwMCPToolImportTaskResult::SetSuccessCount(const uint64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string CNAPIGwMCPToolImportTaskResult::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void CNAPIGwMCPToolImportTaskResult::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

string CNAPIGwMCPToolImportTaskResult::GetTaskId() const
{
    return m_taskId;
}

void CNAPIGwMCPToolImportTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CNAPIGwMCPToolImportTaskResult::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void CNAPIGwMCPToolImportTaskResult::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string CNAPIGwMCPToolImportTaskResult::GetTaskStatus() const
{
    return m_taskStatus;
}

void CNAPIGwMCPToolImportTaskResult::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

vector<CNAPIGwMCPToolImportResult> CNAPIGwMCPToolImportTaskResult::GetToolsImportResult() const
{
    return m_toolsImportResult;
}

void CNAPIGwMCPToolImportTaskResult::SetToolsImportResult(const vector<CNAPIGwMCPToolImportResult>& _toolsImportResult)
{
    m_toolsImportResult = _toolsImportResult;
    m_toolsImportResultHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::ToolsImportResultHasBeenSet() const
{
    return m_toolsImportResultHasBeenSet;
}

uint64_t CNAPIGwMCPToolImportTaskResult::GetTotalCount() const
{
    return m_totalCount;
}

void CNAPIGwMCPToolImportTaskResult::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CNAPIGwMCPToolImportTaskResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

