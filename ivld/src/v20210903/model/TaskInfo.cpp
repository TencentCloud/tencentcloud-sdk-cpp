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

#include <tencentcloud/ivld/v20210903/model/TaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TaskInfo::TaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_mediaIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskProgressHasBeenSet(false),
    m_taskTimeCostHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_mediaPreknownInfoHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_callbackURLHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("MediaId") && !value["MediaId"].IsNull())
    {
        if (!value["MediaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.MediaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaId = string(value["MediaId"].GetString());
        m_mediaIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskProgress") && !value["TaskProgress"].IsNull())
    {
        if (!value["TaskProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskProgress = value["TaskProgress"].GetDouble();
        m_taskProgressHasBeenSet = true;
    }

    if (value.HasMember("TaskTimeCost") && !value["TaskTimeCost"].IsNull())
    {
        if (!value["TaskTimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskTimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTimeCost = value["TaskTimeCost"].GetInt64();
        m_taskTimeCostHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStartTime") && !value["TaskStartTime"].IsNull())
    {
        if (!value["TaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStartTime = string(value["TaskStartTime"].GetString());
        m_taskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("MediaPreknownInfo") && !value["MediaPreknownInfo"].IsNull())
    {
        if (!value["MediaPreknownInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.MediaPreknownInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaPreknownInfo.Deserialize(value["MediaPreknownInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaPreknownInfoHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CallbackURL") && !value["CallbackURL"].IsNull())
    {
        if (!value["CallbackURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.CallbackURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackURL = string(value["CallbackURL"].GetString());
        m_callbackURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskProgress, allocator);
    }

    if (m_taskTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTimeCost, allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaPreknownInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPreknownInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaPreknownInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

}


string TaskInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInfo::GetTaskName() const
{
    return m_taskName;
}

void TaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskInfo::GetMediaId() const
{
    return m_mediaId;
}

void TaskInfo::SetMediaId(const string& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool TaskInfo::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

int64_t TaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskInfo::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

double TaskInfo::GetTaskProgress() const
{
    return m_taskProgress;
}

void TaskInfo::SetTaskProgress(const double& _taskProgress)
{
    m_taskProgress = _taskProgress;
    m_taskProgressHasBeenSet = true;
}

bool TaskInfo::TaskProgressHasBeenSet() const
{
    return m_taskProgressHasBeenSet;
}

int64_t TaskInfo::GetTaskTimeCost() const
{
    return m_taskTimeCost;
}

void TaskInfo::SetTaskTimeCost(const int64_t& _taskTimeCost)
{
    m_taskTimeCost = _taskTimeCost;
    m_taskTimeCostHasBeenSet = true;
}

bool TaskInfo::TaskTimeCostHasBeenSet() const
{
    return m_taskTimeCostHasBeenSet;
}

string TaskInfo::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void TaskInfo::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool TaskInfo::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string TaskInfo::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void TaskInfo::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool TaskInfo::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string TaskInfo::GetFailedReason() const
{
    return m_failedReason;
}

void TaskInfo::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool TaskInfo::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

MediaPreknownInfo TaskInfo::GetMediaPreknownInfo() const
{
    return m_mediaPreknownInfo;
}

void TaskInfo::SetMediaPreknownInfo(const MediaPreknownInfo& _mediaPreknownInfo)
{
    m_mediaPreknownInfo = _mediaPreknownInfo;
    m_mediaPreknownInfoHasBeenSet = true;
}

bool TaskInfo::MediaPreknownInfoHasBeenSet() const
{
    return m_mediaPreknownInfoHasBeenSet;
}

string TaskInfo::GetMediaName() const
{
    return m_mediaName;
}

void TaskInfo::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool TaskInfo::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

string TaskInfo::GetLabel() const
{
    return m_label;
}

void TaskInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool TaskInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string TaskInfo::GetCallbackURL() const
{
    return m_callbackURL;
}

void TaskInfo::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool TaskInfo::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

