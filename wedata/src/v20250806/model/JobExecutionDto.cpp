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

#include <tencentcloud/wedata/v20250806/model/JobExecutionDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

JobExecutionDto::JobExecutionDto() :
    m_jobIdHasBeenSet(false),
    m_jobExecutionIdHasBeenSet(false),
    m_jobExecutionNameHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_executeStageInfoHasBeenSet(false),
    m_logFilePathHasBeenSet(false),
    m_resultFilePathHasBeenSet(false),
    m_resultPreviewFilePathHasBeenSet(false),
    m_resultTotalCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeCostHasBeenSet(false),
    m_contextScriptContentHasBeenSet(false),
    m_resultPreviewCountHasBeenSet(false),
    m_resultEffectCountHasBeenSet(false),
    m_collectingTotalResultHasBeenSet(false),
    m_scriptContentTruncateHasBeenSet(false)
{
}

CoreInternalOutcome JobExecutionDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobExecutionId") && !value["JobExecutionId"].IsNull())
    {
        if (!value["JobExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.JobExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutionId = string(value["JobExecutionId"].GetString());
        m_jobExecutionIdHasBeenSet = true;
    }

    if (value.HasMember("JobExecutionName") && !value["JobExecutionName"].IsNull())
    {
        if (!value["JobExecutionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.JobExecutionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutionName = string(value["JobExecutionName"].GetString());
        m_jobExecutionNameHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteStageInfo") && !value["ExecuteStageInfo"].IsNull())
    {
        if (!value["ExecuteStageInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ExecuteStageInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeStageInfo = string(value["ExecuteStageInfo"].GetString());
        m_executeStageInfoHasBeenSet = true;
    }

    if (value.HasMember("LogFilePath") && !value["LogFilePath"].IsNull())
    {
        if (!value["LogFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.LogFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilePath = string(value["LogFilePath"].GetString());
        m_logFilePathHasBeenSet = true;
    }

    if (value.HasMember("ResultFilePath") && !value["ResultFilePath"].IsNull())
    {
        if (!value["ResultFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ResultFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultFilePath = string(value["ResultFilePath"].GetString());
        m_resultFilePathHasBeenSet = true;
    }

    if (value.HasMember("ResultPreviewFilePath") && !value["ResultPreviewFilePath"].IsNull())
    {
        if (!value["ResultPreviewFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ResultPreviewFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultPreviewFilePath = string(value["ResultPreviewFilePath"].GetString());
        m_resultPreviewFilePathHasBeenSet = true;
    }

    if (value.HasMember("ResultTotalCount") && !value["ResultTotalCount"].IsNull())
    {
        if (!value["ResultTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ResultTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultTotalCount = value["ResultTotalCount"].GetInt64();
        m_resultTotalCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeCost") && !value["TimeCost"].IsNull())
    {
        if (!value["TimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.TimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCost = value["TimeCost"].GetInt64();
        m_timeCostHasBeenSet = true;
    }

    if (value.HasMember("ContextScriptContent") && !value["ContextScriptContent"].IsNull())
    {
        if (!value["ContextScriptContent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ContextScriptContent` is not array type"));

        const rapidjson::Value &tmpValue = value["ContextScriptContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_contextScriptContent.push_back((*itr).GetString());
        }
        m_contextScriptContentHasBeenSet = true;
    }

    if (value.HasMember("ResultPreviewCount") && !value["ResultPreviewCount"].IsNull())
    {
        if (!value["ResultPreviewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ResultPreviewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultPreviewCount = value["ResultPreviewCount"].GetInt64();
        m_resultPreviewCountHasBeenSet = true;
    }

    if (value.HasMember("ResultEffectCount") && !value["ResultEffectCount"].IsNull())
    {
        if (!value["ResultEffectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ResultEffectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultEffectCount = value["ResultEffectCount"].GetInt64();
        m_resultEffectCountHasBeenSet = true;
    }

    if (value.HasMember("CollectingTotalResult") && !value["CollectingTotalResult"].IsNull())
    {
        if (!value["CollectingTotalResult"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.CollectingTotalResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_collectingTotalResult = value["CollectingTotalResult"].GetBool();
        m_collectingTotalResultHasBeenSet = true;
    }

    if (value.HasMember("ScriptContentTruncate") && !value["ScriptContentTruncate"].IsNull())
    {
        if (!value["ScriptContentTruncate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobExecutionDto.ScriptContentTruncate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContentTruncate = value["ScriptContentTruncate"].GetBool();
        m_scriptContentTruncateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobExecutionDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobExecutionId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobExecutionName.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executeStageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteStageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeStageInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_logFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilePath.c_str(), allocator).Move(), allocator);
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

    if (m_resultTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultTotalCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCost, allocator);
    }

    if (m_contextScriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contextScriptContent.begin(); itr != m_contextScriptContent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultPreviewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultPreviewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultPreviewCount, allocator);
    }

    if (m_resultEffectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultEffectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultEffectCount, allocator);
    }

    if (m_collectingTotalResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectingTotalResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectingTotalResult, allocator);
    }

    if (m_scriptContentTruncateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContentTruncate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scriptContentTruncate, allocator);
    }

}


string JobExecutionDto::GetJobId() const
{
    return m_jobId;
}

void JobExecutionDto::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobExecutionDto::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobExecutionDto::GetJobExecutionId() const
{
    return m_jobExecutionId;
}

void JobExecutionDto::SetJobExecutionId(const string& _jobExecutionId)
{
    m_jobExecutionId = _jobExecutionId;
    m_jobExecutionIdHasBeenSet = true;
}

bool JobExecutionDto::JobExecutionIdHasBeenSet() const
{
    return m_jobExecutionIdHasBeenSet;
}

string JobExecutionDto::GetJobExecutionName() const
{
    return m_jobExecutionName;
}

void JobExecutionDto::SetJobExecutionName(const string& _jobExecutionName)
{
    m_jobExecutionName = _jobExecutionName;
    m_jobExecutionNameHasBeenSet = true;
}

bool JobExecutionDto::JobExecutionNameHasBeenSet() const
{
    return m_jobExecutionNameHasBeenSet;
}

string JobExecutionDto::GetScriptContent() const
{
    return m_scriptContent;
}

void JobExecutionDto::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool JobExecutionDto::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string JobExecutionDto::GetStatus() const
{
    return m_status;
}

void JobExecutionDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JobExecutionDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JobExecutionDto::GetCreateTime() const
{
    return m_createTime;
}

void JobExecutionDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobExecutionDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobExecutionDto::GetExecuteStageInfo() const
{
    return m_executeStageInfo;
}

void JobExecutionDto::SetExecuteStageInfo(const string& _executeStageInfo)
{
    m_executeStageInfo = _executeStageInfo;
    m_executeStageInfoHasBeenSet = true;
}

bool JobExecutionDto::ExecuteStageInfoHasBeenSet() const
{
    return m_executeStageInfoHasBeenSet;
}

string JobExecutionDto::GetLogFilePath() const
{
    return m_logFilePath;
}

void JobExecutionDto::SetLogFilePath(const string& _logFilePath)
{
    m_logFilePath = _logFilePath;
    m_logFilePathHasBeenSet = true;
}

bool JobExecutionDto::LogFilePathHasBeenSet() const
{
    return m_logFilePathHasBeenSet;
}

string JobExecutionDto::GetResultFilePath() const
{
    return m_resultFilePath;
}

void JobExecutionDto::SetResultFilePath(const string& _resultFilePath)
{
    m_resultFilePath = _resultFilePath;
    m_resultFilePathHasBeenSet = true;
}

bool JobExecutionDto::ResultFilePathHasBeenSet() const
{
    return m_resultFilePathHasBeenSet;
}

string JobExecutionDto::GetResultPreviewFilePath() const
{
    return m_resultPreviewFilePath;
}

void JobExecutionDto::SetResultPreviewFilePath(const string& _resultPreviewFilePath)
{
    m_resultPreviewFilePath = _resultPreviewFilePath;
    m_resultPreviewFilePathHasBeenSet = true;
}

bool JobExecutionDto::ResultPreviewFilePathHasBeenSet() const
{
    return m_resultPreviewFilePathHasBeenSet;
}

int64_t JobExecutionDto::GetResultTotalCount() const
{
    return m_resultTotalCount;
}

void JobExecutionDto::SetResultTotalCount(const int64_t& _resultTotalCount)
{
    m_resultTotalCount = _resultTotalCount;
    m_resultTotalCountHasBeenSet = true;
}

bool JobExecutionDto::ResultTotalCountHasBeenSet() const
{
    return m_resultTotalCountHasBeenSet;
}

string JobExecutionDto::GetUpdateTime() const
{
    return m_updateTime;
}

void JobExecutionDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobExecutionDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobExecutionDto::GetEndTime() const
{
    return m_endTime;
}

void JobExecutionDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool JobExecutionDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t JobExecutionDto::GetTimeCost() const
{
    return m_timeCost;
}

void JobExecutionDto::SetTimeCost(const int64_t& _timeCost)
{
    m_timeCost = _timeCost;
    m_timeCostHasBeenSet = true;
}

bool JobExecutionDto::TimeCostHasBeenSet() const
{
    return m_timeCostHasBeenSet;
}

vector<string> JobExecutionDto::GetContextScriptContent() const
{
    return m_contextScriptContent;
}

void JobExecutionDto::SetContextScriptContent(const vector<string>& _contextScriptContent)
{
    m_contextScriptContent = _contextScriptContent;
    m_contextScriptContentHasBeenSet = true;
}

bool JobExecutionDto::ContextScriptContentHasBeenSet() const
{
    return m_contextScriptContentHasBeenSet;
}

int64_t JobExecutionDto::GetResultPreviewCount() const
{
    return m_resultPreviewCount;
}

void JobExecutionDto::SetResultPreviewCount(const int64_t& _resultPreviewCount)
{
    m_resultPreviewCount = _resultPreviewCount;
    m_resultPreviewCountHasBeenSet = true;
}

bool JobExecutionDto::ResultPreviewCountHasBeenSet() const
{
    return m_resultPreviewCountHasBeenSet;
}

int64_t JobExecutionDto::GetResultEffectCount() const
{
    return m_resultEffectCount;
}

void JobExecutionDto::SetResultEffectCount(const int64_t& _resultEffectCount)
{
    m_resultEffectCount = _resultEffectCount;
    m_resultEffectCountHasBeenSet = true;
}

bool JobExecutionDto::ResultEffectCountHasBeenSet() const
{
    return m_resultEffectCountHasBeenSet;
}

bool JobExecutionDto::GetCollectingTotalResult() const
{
    return m_collectingTotalResult;
}

void JobExecutionDto::SetCollectingTotalResult(const bool& _collectingTotalResult)
{
    m_collectingTotalResult = _collectingTotalResult;
    m_collectingTotalResultHasBeenSet = true;
}

bool JobExecutionDto::CollectingTotalResultHasBeenSet() const
{
    return m_collectingTotalResultHasBeenSet;
}

bool JobExecutionDto::GetScriptContentTruncate() const
{
    return m_scriptContentTruncate;
}

void JobExecutionDto::SetScriptContentTruncate(const bool& _scriptContentTruncate)
{
    m_scriptContentTruncate = _scriptContentTruncate;
    m_scriptContentTruncateHasBeenSet = true;
}

bool JobExecutionDto::ScriptContentTruncateHasBeenSet() const
{
    return m_scriptContentTruncateHasBeenSet;
}

