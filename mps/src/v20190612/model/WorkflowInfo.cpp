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

#include <tencentcloud/mps/v20190612/model/WorkflowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

WorkflowInfo::WorkflowInfo() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.WorkflowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = value["WorkflowId"].GetInt64();
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.Trigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trigger.Deserialize(value["Trigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("MediaProcessTask") && !value["MediaProcessTask"].IsNull())
    {
        if (!value["MediaProcessTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.MediaProcessTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaProcessTask.Deserialize(value["MediaProcessTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaProcessTaskHasBeenSet = true;
    }

    if (value.HasMember("AiContentReviewTask") && !value["AiContentReviewTask"].IsNull())
    {
        if (!value["AiContentReviewTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.AiContentReviewTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiContentReviewTask.Deserialize(value["AiContentReviewTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiContentReviewTaskHasBeenSet = true;
    }

    if (value.HasMember("AiAnalysisTask") && !value["AiAnalysisTask"].IsNull())
    {
        if (!value["AiAnalysisTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.AiAnalysisTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiAnalysisTask.Deserialize(value["AiAnalysisTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiAnalysisTaskHasBeenSet = true;
    }

    if (value.HasMember("AiRecognitionTask") && !value["AiRecognitionTask"].IsNull())
    {
        if (!value["AiRecognitionTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.AiRecognitionTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRecognitionTask.Deserialize(value["AiRecognitionTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRecognitionTaskHasBeenSet = true;
    }

    if (value.HasMember("TaskNotifyConfig") && !value["TaskNotifyConfig"].IsNull())
    {
        if (!value["TaskNotifyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.TaskNotifyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskNotifyConfig.Deserialize(value["TaskNotifyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskNotifyConfigHasBeenSet = true;
    }

    if (value.HasMember("TaskPriority") && !value["TaskPriority"].IsNull())
    {
        if (!value["TaskPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.TaskPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPriority = value["TaskPriority"].GetInt64();
        m_taskPriorityHasBeenSet = true;
    }

    if (value.HasMember("OutputDir") && !value["OutputDir"].IsNull())
    {
        if (!value["OutputDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.OutputDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDir = string(value["OutputDir"].GetString());
        m_outputDirHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workflowId, allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaProcessTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaProcessTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPriority, allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkflowInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowInfo::SetWorkflowId(const int64_t& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowInfo::GetStatus() const
{
    return m_status;
}

void WorkflowInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkflowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

WorkflowTrigger WorkflowInfo::GetTrigger() const
{
    return m_trigger;
}

void WorkflowInfo::SetTrigger(const WorkflowTrigger& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool WorkflowInfo::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

TaskOutputStorage WorkflowInfo::GetOutputStorage() const
{
    return m_outputStorage;
}

void WorkflowInfo::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool WorkflowInfo::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

MediaProcessTaskInput WorkflowInfo::GetMediaProcessTask() const
{
    return m_mediaProcessTask;
}

void WorkflowInfo::SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask)
{
    m_mediaProcessTask = _mediaProcessTask;
    m_mediaProcessTaskHasBeenSet = true;
}

bool WorkflowInfo::MediaProcessTaskHasBeenSet() const
{
    return m_mediaProcessTaskHasBeenSet;
}

AiContentReviewTaskInput WorkflowInfo::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void WorkflowInfo::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool WorkflowInfo::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput WorkflowInfo::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void WorkflowInfo::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool WorkflowInfo::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput WorkflowInfo::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void WorkflowInfo::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool WorkflowInfo::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

TaskNotifyConfig WorkflowInfo::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void WorkflowInfo::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool WorkflowInfo::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t WorkflowInfo::GetTaskPriority() const
{
    return m_taskPriority;
}

void WorkflowInfo::SetTaskPriority(const int64_t& _taskPriority)
{
    m_taskPriority = _taskPriority;
    m_taskPriorityHasBeenSet = true;
}

bool WorkflowInfo::TaskPriorityHasBeenSet() const
{
    return m_taskPriorityHasBeenSet;
}

string WorkflowInfo::GetOutputDir() const
{
    return m_outputDir;
}

void WorkflowInfo::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool WorkflowInfo::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

string WorkflowInfo::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkflowInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkflowInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

