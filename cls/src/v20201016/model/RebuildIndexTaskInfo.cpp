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

#include <tencentcloud/cls/v20201016/model/RebuildIndexTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RebuildIndexTaskInfo::RebuildIndexTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_remainTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

CoreInternalOutcome RebuildIndexTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RemainTime") && !value["RemainTime"].IsNull())
    {
        if (!value["RemainTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.RemainTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainTime = value["RemainTime"].GetInt64();
        m_remainTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildIndexTaskInfo.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebuildIndexTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_remainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

}


string RebuildIndexTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void RebuildIndexTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RebuildIndexTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t RebuildIndexTaskInfo::GetStatus() const
{
    return m_status;
}

void RebuildIndexTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RebuildIndexTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RebuildIndexTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void RebuildIndexTaskInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RebuildIndexTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RebuildIndexTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void RebuildIndexTaskInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RebuildIndexTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t RebuildIndexTaskInfo::GetRemainTime() const
{
    return m_remainTime;
}

void RebuildIndexTaskInfo::SetRemainTime(const int64_t& _remainTime)
{
    m_remainTime = _remainTime;
    m_remainTimeHasBeenSet = true;
}

bool RebuildIndexTaskInfo::RemainTimeHasBeenSet() const
{
    return m_remainTimeHasBeenSet;
}

uint64_t RebuildIndexTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void RebuildIndexTaskInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RebuildIndexTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

double RebuildIndexTaskInfo::GetProgress() const
{
    return m_progress;
}

void RebuildIndexTaskInfo::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RebuildIndexTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t RebuildIndexTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RebuildIndexTaskInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RebuildIndexTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RebuildIndexTaskInfo::GetStatusMessage() const
{
    return m_statusMessage;
}

void RebuildIndexTaskInfo::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool RebuildIndexTaskInfo::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

