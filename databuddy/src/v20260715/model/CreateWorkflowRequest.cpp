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

#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateWorkflowRequest::CreateWorkflowRequest() :
    m_workspaceIdHasBeenSet(false),
    m_baseInfoHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_alarmHasBeenSet(false),
    m_monitorMetricHasBeenSet(false),
    m_advanceConfigHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_gitConfigIdHasBeenSet(false),
    m_gitBranchHasBeenSet(false)
{
}

string CreateWorkflowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trigger.begin(); itr != m_trigger.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_alarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarm.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_monitorMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorMetric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorMetric.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_advanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gitConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitBranch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gitBranch.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkflowRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateWorkflowRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

WorkflowBaseInfo CreateWorkflowRequest::GetBaseInfo() const
{
    return m_baseInfo;
}

void CreateWorkflowRequest::SetBaseInfo(const WorkflowBaseInfo& _baseInfo)
{
    m_baseInfo = _baseInfo;
    m_baseInfoHasBeenSet = true;
}

bool CreateWorkflowRequest::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

vector<WorkflowTriggerConfiguration> CreateWorkflowRequest::GetTrigger() const
{
    return m_trigger;
}

void CreateWorkflowRequest::SetTrigger(const vector<WorkflowTriggerConfiguration>& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool CreateWorkflowRequest::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

vector<ParamInfo> CreateWorkflowRequest::GetParamList() const
{
    return m_paramList;
}

void CreateWorkflowRequest::SetParamList(const vector<ParamInfo>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CreateWorkflowRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

vector<LabelBrief> CreateWorkflowRequest::GetLabelList() const
{
    return m_labelList;
}

void CreateWorkflowRequest::SetLabelList(const vector<LabelBrief>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool CreateWorkflowRequest::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

AlarmBrief CreateWorkflowRequest::GetAlarm() const
{
    return m_alarm;
}

void CreateWorkflowRequest::SetAlarm(const AlarmBrief& _alarm)
{
    m_alarm = _alarm;
    m_alarmHasBeenSet = true;
}

bool CreateWorkflowRequest::AlarmHasBeenSet() const
{
    return m_alarmHasBeenSet;
}

MonitorMetricBrief CreateWorkflowRequest::GetMonitorMetric() const
{
    return m_monitorMetric;
}

void CreateWorkflowRequest::SetMonitorMetric(const MonitorMetricBrief& _monitorMetric)
{
    m_monitorMetric = _monitorMetric;
    m_monitorMetricHasBeenSet = true;
}

bool CreateWorkflowRequest::MonitorMetricHasBeenSet() const
{
    return m_monitorMetricHasBeenSet;
}

WorkflowAdvanceConfig CreateWorkflowRequest::GetAdvanceConfig() const
{
    return m_advanceConfig;
}

void CreateWorkflowRequest::SetAdvanceConfig(const WorkflowAdvanceConfig& _advanceConfig)
{
    m_advanceConfig = _advanceConfig;
    m_advanceConfigHasBeenSet = true;
}

bool CreateWorkflowRequest::AdvanceConfigHasBeenSet() const
{
    return m_advanceConfigHasBeenSet;
}

vector<WorkflowTask> CreateWorkflowRequest::GetTaskList() const
{
    return m_taskList;
}

void CreateWorkflowRequest::SetTaskList(const vector<WorkflowTask>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool CreateWorkflowRequest::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

string CreateWorkflowRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateWorkflowRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateWorkflowRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateWorkflowRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void CreateWorkflowRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool CreateWorkflowRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

string CreateWorkflowRequest::GetGitConfigId() const
{
    return m_gitConfigId;
}

void CreateWorkflowRequest::SetGitConfigId(const string& _gitConfigId)
{
    m_gitConfigId = _gitConfigId;
    m_gitConfigIdHasBeenSet = true;
}

bool CreateWorkflowRequest::GitConfigIdHasBeenSet() const
{
    return m_gitConfigIdHasBeenSet;
}

string CreateWorkflowRequest::GetGitBranch() const
{
    return m_gitBranch;
}

void CreateWorkflowRequest::SetGitBranch(const string& _gitBranch)
{
    m_gitBranch = _gitBranch;
    m_gitBranchHasBeenSet = true;
}

bool CreateWorkflowRequest::GitBranchHasBeenSet() const
{
    return m_gitBranchHasBeenSet;
}


