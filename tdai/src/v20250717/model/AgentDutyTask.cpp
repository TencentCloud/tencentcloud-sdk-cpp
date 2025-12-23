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

#include <tencentcloud/tdai/v20250717/model/AgentDutyTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

AgentDutyTask::AgentDutyTask() :
    m_taskIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultExtraKeyHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome AgentDutyTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResultExtraKey") && !value["ResultExtraKey"].IsNull())
    {
        if (!value["ResultExtraKey"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.ResultExtraKey` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultExtraKey"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resultExtraKey.push_back((*itr).GetString());
        }
        m_resultExtraKeyHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDutyTask.Extra` is not array type"));

        const rapidjson::Value &tmpValue = value["Extra"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtraInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extra.push_back(item);
        }
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentDutyTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resultExtraKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultExtraKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resultExtraKey.begin(); itr != m_resultExtraKey.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extra.begin(); itr != m_extra.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentDutyTask::GetTaskId() const
{
    return m_taskId;
}

void AgentDutyTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AgentDutyTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AgentDutyTask::GetCreateTime() const
{
    return m_createTime;
}

void AgentDutyTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AgentDutyTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AgentDutyTask::GetStartTime() const
{
    return m_startTime;
}

void AgentDutyTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AgentDutyTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AgentDutyTask::GetFinishTime() const
{
    return m_finishTime;
}

void AgentDutyTask::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AgentDutyTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string AgentDutyTask::GetStatus() const
{
    return m_status;
}

void AgentDutyTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentDutyTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AgentDutyTask::GetResultExtraKey() const
{
    return m_resultExtraKey;
}

void AgentDutyTask::SetResultExtraKey(const vector<string>& _resultExtraKey)
{
    m_resultExtraKey = _resultExtraKey;
    m_resultExtraKeyHasBeenSet = true;
}

bool AgentDutyTask::ResultExtraKeyHasBeenSet() const
{
    return m_resultExtraKeyHasBeenSet;
}

vector<ExtraInfo> AgentDutyTask::GetExtra() const
{
    return m_extra;
}

void AgentDutyTask::SetExtra(const vector<ExtraInfo>& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool AgentDutyTask::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

