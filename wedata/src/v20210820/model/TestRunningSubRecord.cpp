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

#include <tencentcloud/wedata/v20210820/model/TestRunningSubRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TestRunningSubRecord::TestRunningSubRecord() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_executionSubJobIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeCostHasBeenSet(false),
    m_resultTotalCountHasBeenSet(false),
    m_resultPreviewCountHasBeenSet(false),
    m_resultFilePathHasBeenSet(false),
    m_resultPreviewFilePathHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_logFilePathHasBeenSet(false),
    m_hasSubResultSetHasBeenSet(false)
{
}

CoreInternalOutcome TestRunningSubRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionSubJobId") && !value["ExecutionSubJobId"].IsNull())
    {
        if (!value["ExecutionSubJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ExecutionSubJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionSubJobId = string(value["ExecutionSubJobId"].GetString());
        m_executionSubJobIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("DetailId") && !value["DetailId"].IsNull())
    {
        if (!value["DetailId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.DetailId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detailId = value["DetailId"].GetInt64();
        m_detailIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.RecordId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = value["RecordId"].GetInt64();
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TimeCost") && !value["TimeCost"].IsNull())
    {
        if (!value["TimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.TimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCost = value["TimeCost"].GetInt64();
        m_timeCostHasBeenSet = true;
    }

    if (value.HasMember("ResultTotalCount") && !value["ResultTotalCount"].IsNull())
    {
        if (!value["ResultTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ResultTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultTotalCount = value["ResultTotalCount"].GetInt64();
        m_resultTotalCountHasBeenSet = true;
    }

    if (value.HasMember("ResultPreviewCount") && !value["ResultPreviewCount"].IsNull())
    {
        if (!value["ResultPreviewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ResultPreviewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultPreviewCount = value["ResultPreviewCount"].GetInt64();
        m_resultPreviewCountHasBeenSet = true;
    }

    if (value.HasMember("ResultFilePath") && !value["ResultFilePath"].IsNull())
    {
        if (!value["ResultFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ResultFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultFilePath = string(value["ResultFilePath"].GetString());
        m_resultFilePathHasBeenSet = true;
    }

    if (value.HasMember("ResultPreviewFilePath") && !value["ResultPreviewFilePath"].IsNull())
    {
        if (!value["ResultPreviewFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.ResultPreviewFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultPreviewFilePath = string(value["ResultPreviewFilePath"].GetString());
        m_resultPreviewFilePathHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.Sequence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = string(value["Sequence"].GetString());
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("LogFilePath") && !value["LogFilePath"].IsNull())
    {
        if (!value["LogFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.LogFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilePath = string(value["LogFilePath"].GetString());
        m_logFilePathHasBeenSet = true;
    }

    if (value.HasMember("HasSubResultSet") && !value["HasSubResultSet"].IsNull())
    {
        if (!value["HasSubResultSet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunningSubRecord.HasSubResultSet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasSubResultSet = value["HasSubResultSet"].GetBool();
        m_hasSubResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestRunningSubRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionSubJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionSubJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionSubJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detailId, allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordId, allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCost, allocator);
    }

    if (m_resultTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultTotalCount, allocator);
    }

    if (m_resultPreviewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultPreviewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultPreviewCount, allocator);
    }

    if (m_resultFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_resultPreviewFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultPreviewFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultPreviewFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sequence.c_str(), allocator).Move(), allocator);
    }

    if (m_logFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSubResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSubResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSubResultSet, allocator);
    }

}


string TestRunningSubRecord::GetStartTime() const
{
    return m_startTime;
}

void TestRunningSubRecord::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TestRunningSubRecord::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TestRunningSubRecord::GetEndTime() const
{
    return m_endTime;
}

void TestRunningSubRecord::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TestRunningSubRecord::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TestRunningSubRecord::GetExecutionJobId() const
{
    return m_executionJobId;
}

void TestRunningSubRecord::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool TestRunningSubRecord::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string TestRunningSubRecord::GetExecutionSubJobId() const
{
    return m_executionSubJobId;
}

void TestRunningSubRecord::SetExecutionSubJobId(const string& _executionSubJobId)
{
    m_executionSubJobId = _executionSubJobId;
    m_executionSubJobIdHasBeenSet = true;
}

bool TestRunningSubRecord::ExecutionSubJobIdHasBeenSet() const
{
    return m_executionSubJobIdHasBeenSet;
}

string TestRunningSubRecord::GetJobId() const
{
    return m_jobId;
}

void TestRunningSubRecord::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TestRunningSubRecord::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t TestRunningSubRecord::GetDetailId() const
{
    return m_detailId;
}

void TestRunningSubRecord::SetDetailId(const int64_t& _detailId)
{
    m_detailId = _detailId;
    m_detailIdHasBeenSet = true;
}

bool TestRunningSubRecord::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

int64_t TestRunningSubRecord::GetRecordId() const
{
    return m_recordId;
}

void TestRunningSubRecord::SetRecordId(const int64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool TestRunningSubRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string TestRunningSubRecord::GetScriptContent() const
{
    return m_scriptContent;
}

void TestRunningSubRecord::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool TestRunningSubRecord::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string TestRunningSubRecord::GetStatus() const
{
    return m_status;
}

void TestRunningSubRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TestRunningSubRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TestRunningSubRecord::GetTimeCost() const
{
    return m_timeCost;
}

void TestRunningSubRecord::SetTimeCost(const int64_t& _timeCost)
{
    m_timeCost = _timeCost;
    m_timeCostHasBeenSet = true;
}

bool TestRunningSubRecord::TimeCostHasBeenSet() const
{
    return m_timeCostHasBeenSet;
}

int64_t TestRunningSubRecord::GetResultTotalCount() const
{
    return m_resultTotalCount;
}

void TestRunningSubRecord::SetResultTotalCount(const int64_t& _resultTotalCount)
{
    m_resultTotalCount = _resultTotalCount;
    m_resultTotalCountHasBeenSet = true;
}

bool TestRunningSubRecord::ResultTotalCountHasBeenSet() const
{
    return m_resultTotalCountHasBeenSet;
}

int64_t TestRunningSubRecord::GetResultPreviewCount() const
{
    return m_resultPreviewCount;
}

void TestRunningSubRecord::SetResultPreviewCount(const int64_t& _resultPreviewCount)
{
    m_resultPreviewCount = _resultPreviewCount;
    m_resultPreviewCountHasBeenSet = true;
}

bool TestRunningSubRecord::ResultPreviewCountHasBeenSet() const
{
    return m_resultPreviewCountHasBeenSet;
}

string TestRunningSubRecord::GetResultFilePath() const
{
    return m_resultFilePath;
}

void TestRunningSubRecord::SetResultFilePath(const string& _resultFilePath)
{
    m_resultFilePath = _resultFilePath;
    m_resultFilePathHasBeenSet = true;
}

bool TestRunningSubRecord::ResultFilePathHasBeenSet() const
{
    return m_resultFilePathHasBeenSet;
}

string TestRunningSubRecord::GetResultPreviewFilePath() const
{
    return m_resultPreviewFilePath;
}

void TestRunningSubRecord::SetResultPreviewFilePath(const string& _resultPreviewFilePath)
{
    m_resultPreviewFilePath = _resultPreviewFilePath;
    m_resultPreviewFilePathHasBeenSet = true;
}

bool TestRunningSubRecord::ResultPreviewFilePathHasBeenSet() const
{
    return m_resultPreviewFilePathHasBeenSet;
}

string TestRunningSubRecord::GetUpdateTime() const
{
    return m_updateTime;
}

void TestRunningSubRecord::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TestRunningSubRecord::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TestRunningSubRecord::GetSequence() const
{
    return m_sequence;
}

void TestRunningSubRecord::SetSequence(const string& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool TestRunningSubRecord::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string TestRunningSubRecord::GetLogFilePath() const
{
    return m_logFilePath;
}

void TestRunningSubRecord::SetLogFilePath(const string& _logFilePath)
{
    m_logFilePath = _logFilePath;
    m_logFilePathHasBeenSet = true;
}

bool TestRunningSubRecord::LogFilePathHasBeenSet() const
{
    return m_logFilePathHasBeenSet;
}

bool TestRunningSubRecord::GetHasSubResultSet() const
{
    return m_hasSubResultSet;
}

void TestRunningSubRecord::SetHasSubResultSet(const bool& _hasSubResultSet)
{
    m_hasSubResultSet = _hasSubResultSet;
    m_hasSubResultSetHasBeenSet = true;
}

bool TestRunningSubRecord::HasSubResultSetHasBeenSet() const
{
    return m_hasSubResultSetHasBeenSet;
}

