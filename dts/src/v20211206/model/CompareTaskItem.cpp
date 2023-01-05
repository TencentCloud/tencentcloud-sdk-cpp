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

#include <tencentcloud/dts/v20211206/model/CompareTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareTaskItem::CompareTaskItem() :
    m_jobIdHasBeenSet(false),
    m_compareTaskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_configHasBeenSet(false),
    m_checkProcessHasBeenSet(false),
    m_compareProcessHasBeenSet(false),
    m_conclusionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome CompareTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("CompareTaskId") && !value["CompareTaskId"].IsNull())
    {
        if (!value["CompareTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.CompareTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareTaskId = string(value["CompareTaskId"].GetString());
        m_compareTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("CheckProcess") && !value["CheckProcess"].IsNull())
    {
        if (!value["CheckProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.CheckProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkProcess.Deserialize(value["CheckProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkProcessHasBeenSet = true;
    }

    if (value.HasMember("CompareProcess") && !value["CompareProcess"].IsNull())
    {
        if (!value["CompareProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.CompareProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compareProcess.Deserialize(value["CompareProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compareProcessHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Conclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conclusion = string(value["Conclusion"].GetString());
        m_conclusionHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Options` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_options.Deserialize(value["Options"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compareProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string CompareTaskItem::GetJobId() const
{
    return m_jobId;
}

void CompareTaskItem::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CompareTaskItem::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CompareTaskItem::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void CompareTaskItem::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool CompareTaskItem::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

string CompareTaskItem::GetTaskName() const
{
    return m_taskName;
}

void CompareTaskItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CompareTaskItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CompareTaskItem::GetStatus() const
{
    return m_status;
}

void CompareTaskItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CompareTaskItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

CompareObject CompareTaskItem::GetConfig() const
{
    return m_config;
}

void CompareTaskItem::SetConfig(const CompareObject& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CompareTaskItem::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

ProcessProgress CompareTaskItem::GetCheckProcess() const
{
    return m_checkProcess;
}

void CompareTaskItem::SetCheckProcess(const ProcessProgress& _checkProcess)
{
    m_checkProcess = _checkProcess;
    m_checkProcessHasBeenSet = true;
}

bool CompareTaskItem::CheckProcessHasBeenSet() const
{
    return m_checkProcessHasBeenSet;
}

ProcessProgress CompareTaskItem::GetCompareProcess() const
{
    return m_compareProcess;
}

void CompareTaskItem::SetCompareProcess(const ProcessProgress& _compareProcess)
{
    m_compareProcess = _compareProcess;
    m_compareProcessHasBeenSet = true;
}

bool CompareTaskItem::CompareProcessHasBeenSet() const
{
    return m_compareProcessHasBeenSet;
}

string CompareTaskItem::GetConclusion() const
{
    return m_conclusion;
}

void CompareTaskItem::SetConclusion(const string& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool CompareTaskItem::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

string CompareTaskItem::GetCreatedAt() const
{
    return m_createdAt;
}

void CompareTaskItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool CompareTaskItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string CompareTaskItem::GetStartedAt() const
{
    return m_startedAt;
}

void CompareTaskItem::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool CompareTaskItem::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

string CompareTaskItem::GetFinishedAt() const
{
    return m_finishedAt;
}

void CompareTaskItem::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool CompareTaskItem::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

string CompareTaskItem::GetMethod() const
{
    return m_method;
}

void CompareTaskItem::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CompareTaskItem::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

CompareOptions CompareTaskItem::GetOptions() const
{
    return m_options;
}

void CompareTaskItem::SetOptions(const CompareOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool CompareTaskItem::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

string CompareTaskItem::GetMessage() const
{
    return m_message;
}

void CompareTaskItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CompareTaskItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

