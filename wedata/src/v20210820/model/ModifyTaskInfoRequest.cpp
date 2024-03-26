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

#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyTaskInfoRequest::ModifyTaskInfoRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_retriableHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_taskExtHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_taskParamInfosHasBeenSet(false),
    m_sourceServerHasBeenSet(false),
    m_targetServerHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_dependencyConfigDTOsHasBeenSet(false),
    m_executionTTLHasBeenSet(false),
    m_scriptChangeHasBeenSet(false),
    m_inChargeIdsHasBeenSet(false)
{
}

string ModifyTaskInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selfDepend, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_retriableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retriable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retriable, allocator);
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_taskExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskExt.begin(); itr != m_taskExt.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yarnQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_taskParamInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskParamInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskParamInfos.begin(); itr != m_taskParamInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sourceServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceServer.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetServer.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyConfigDTOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyConfigDTOs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependencyConfigDTOs.begin(); itr != m_dependencyConfigDTOs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_executionTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executionTTL, allocator);
    }

    if (m_scriptChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptChange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scriptChange, allocator);
    }

    if (m_inChargeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeIds.begin(); itr != m_inChargeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTaskInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyTaskInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyTaskInfoRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyTaskInfoRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetDelayTime() const
{
    return m_delayTime;
}

void ModifyTaskInfoRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetStartupTime() const
{
    return m_startupTime;
}

void ModifyTaskInfoRequest::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetSelfDepend() const
{
    return m_selfDepend;
}

void ModifyTaskInfoRequest::SetSelfDepend(const int64_t& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool ModifyTaskInfoRequest::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string ModifyTaskInfoRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyTaskInfoRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyTaskInfoRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyTaskInfoRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyTaskInfoRequest::GetTaskAction() const
{
    return m_taskAction;
}

void ModifyTaskInfoRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetCycleType() const
{
    return m_cycleType;
}

void ModifyTaskInfoRequest::SetCycleType(const int64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void ModifyTaskInfoRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool ModifyTaskInfoRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string ModifyTaskInfoRequest::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void ModifyTaskInfoRequest::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool ModifyTaskInfoRequest::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string ModifyTaskInfoRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void ModifyTaskInfoRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string ModifyTaskInfoRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void ModifyTaskInfoRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string ModifyTaskInfoRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyTaskInfoRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetRetryWait() const
{
    return m_retryWait;
}

void ModifyTaskInfoRequest::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool ModifyTaskInfoRequest::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetTryLimit() const
{
    return m_tryLimit;
}

void ModifyTaskInfoRequest::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetRetriable() const
{
    return m_retriable;
}

void ModifyTaskInfoRequest::SetRetriable(const int64_t& _retriable)
{
    m_retriable = _retriable;
    m_retriableHasBeenSet = true;
}

bool ModifyTaskInfoRequest::RetriableHasBeenSet() const
{
    return m_retriableHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetRunPriority() const
{
    return m_runPriority;
}

void ModifyTaskInfoRequest::SetRunPriority(const int64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool ModifyTaskInfoRequest::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

vector<TaskExtInfo> ModifyTaskInfoRequest::GetTaskExt() const
{
    return m_taskExt;
}

void ModifyTaskInfoRequest::SetTaskExt(const vector<TaskExtInfo>& _taskExt)
{
    m_taskExt = _taskExt;
    m_taskExtHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TaskExtHasBeenSet() const
{
    return m_taskExtHasBeenSet;
}

string ModifyTaskInfoRequest::GetResourceGroup() const
{
    return m_resourceGroup;
}

void ModifyTaskInfoRequest::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string ModifyTaskInfoRequest::GetYarnQueue() const
{
    return m_yarnQueue;
}

void ModifyTaskInfoRequest::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool ModifyTaskInfoRequest::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

string ModifyTaskInfoRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void ModifyTaskInfoRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool ModifyTaskInfoRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string ModifyTaskInfoRequest::GetInCharge() const
{
    return m_inCharge;
}

void ModifyTaskInfoRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string ModifyTaskInfoRequest::GetNotes() const
{
    return m_notes;
}

void ModifyTaskInfoRequest::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool ModifyTaskInfoRequest::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

vector<ParamInfo> ModifyTaskInfoRequest::GetTaskParamInfos() const
{
    return m_taskParamInfos;
}

void ModifyTaskInfoRequest::SetTaskParamInfos(const vector<ParamInfo>& _taskParamInfos)
{
    m_taskParamInfos = _taskParamInfos;
    m_taskParamInfosHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TaskParamInfosHasBeenSet() const
{
    return m_taskParamInfosHasBeenSet;
}

string ModifyTaskInfoRequest::GetSourceServer() const
{
    return m_sourceServer;
}

void ModifyTaskInfoRequest::SetSourceServer(const string& _sourceServer)
{
    m_sourceServer = _sourceServer;
    m_sourceServerHasBeenSet = true;
}

bool ModifyTaskInfoRequest::SourceServerHasBeenSet() const
{
    return m_sourceServerHasBeenSet;
}

string ModifyTaskInfoRequest::GetTargetServer() const
{
    return m_targetServer;
}

void ModifyTaskInfoRequest::SetTargetServer(const string& _targetServer)
{
    m_targetServer = _targetServer;
    m_targetServerHasBeenSet = true;
}

bool ModifyTaskInfoRequest::TargetServerHasBeenSet() const
{
    return m_targetServerHasBeenSet;
}

string ModifyTaskInfoRequest::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void ModifyTaskInfoRequest::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool ModifyTaskInfoRequest::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

vector<DependencyConfig> ModifyTaskInfoRequest::GetDependencyConfigDTOs() const
{
    return m_dependencyConfigDTOs;
}

void ModifyTaskInfoRequest::SetDependencyConfigDTOs(const vector<DependencyConfig>& _dependencyConfigDTOs)
{
    m_dependencyConfigDTOs = _dependencyConfigDTOs;
    m_dependencyConfigDTOsHasBeenSet = true;
}

bool ModifyTaskInfoRequest::DependencyConfigDTOsHasBeenSet() const
{
    return m_dependencyConfigDTOsHasBeenSet;
}

int64_t ModifyTaskInfoRequest::GetExecutionTTL() const
{
    return m_executionTTL;
}

void ModifyTaskInfoRequest::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

bool ModifyTaskInfoRequest::GetScriptChange() const
{
    return m_scriptChange;
}

void ModifyTaskInfoRequest::SetScriptChange(const bool& _scriptChange)
{
    m_scriptChange = _scriptChange;
    m_scriptChangeHasBeenSet = true;
}

bool ModifyTaskInfoRequest::ScriptChangeHasBeenSet() const
{
    return m_scriptChangeHasBeenSet;
}

vector<string> ModifyTaskInfoRequest::GetInChargeIds() const
{
    return m_inChargeIds;
}

void ModifyTaskInfoRequest::SetInChargeIds(const vector<string>& _inChargeIds)
{
    m_inChargeIds = _inChargeIds;
    m_inChargeIdsHasBeenSet = true;
}

bool ModifyTaskInfoRequest::InChargeIdsHasBeenSet() const
{
    return m_inChargeIdsHasBeenSet;
}


