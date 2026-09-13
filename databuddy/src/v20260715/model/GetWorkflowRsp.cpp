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

#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetWorkflowRsp::GetWorkflowRsp() :
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

CoreInternalOutcome GetWorkflowRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("BaseInfo") && !value["BaseInfo"].IsNull())
    {
        if (!value["BaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.BaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseInfo.Deserialize(value["BaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseInfoHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.Trigger` is not array type"));

        const rapidjson::Value &tmpValue = value["Trigger"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowTriggerConfiguration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trigger.push_back(item);
        }
        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.ParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramList.push_back(item);
        }
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("LabelList") && !value["LabelList"].IsNull())
    {
        if (!value["LabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.LabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelList.push_back(item);
        }
        m_labelListHasBeenSet = true;
    }

    if (value.HasMember("Alarm") && !value["Alarm"].IsNull())
    {
        if (!value["Alarm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.Alarm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarm.Deserialize(value["Alarm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmHasBeenSet = true;
    }

    if (value.HasMember("MonitorMetric") && !value["MonitorMetric"].IsNull())
    {
        if (!value["MonitorMetric"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.MonitorMetric` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorMetric.Deserialize(value["MonitorMetric"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorMetricHasBeenSet = true;
    }

    if (value.HasMember("AdvanceConfig") && !value["AdvanceConfig"].IsNull())
    {
        if (!value["AdvanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.AdvanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advanceConfig.Deserialize(value["AdvanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advanceConfigHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }

    if (value.HasMember("GitConfigId") && !value["GitConfigId"].IsNull())
    {
        if (!value["GitConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.GitConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitConfigId = string(value["GitConfigId"].GetString());
        m_gitConfigIdHasBeenSet = true;
    }

    if (value.HasMember("GitBranch") && !value["GitBranch"].IsNull())
    {
        if (!value["GitBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowRsp.GitBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitBranch = string(value["GitBranch"].GetString());
        m_gitBranchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetWorkflowRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trigger.begin(); itr != m_trigger.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monitorMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorMetric.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitBranch.c_str(), allocator).Move(), allocator);
    }

}


string GetWorkflowRsp::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetWorkflowRsp::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetWorkflowRsp::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

WorkflowBaseInfoDetail GetWorkflowRsp::GetBaseInfo() const
{
    return m_baseInfo;
}

void GetWorkflowRsp::SetBaseInfo(const WorkflowBaseInfoDetail& _baseInfo)
{
    m_baseInfo = _baseInfo;
    m_baseInfoHasBeenSet = true;
}

bool GetWorkflowRsp::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

vector<WorkflowTriggerConfiguration> GetWorkflowRsp::GetTrigger() const
{
    return m_trigger;
}

void GetWorkflowRsp::SetTrigger(const vector<WorkflowTriggerConfiguration>& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool GetWorkflowRsp::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

vector<ParamInfo> GetWorkflowRsp::GetParamList() const
{
    return m_paramList;
}

void GetWorkflowRsp::SetParamList(const vector<ParamInfo>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool GetWorkflowRsp::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

vector<LabelBrief> GetWorkflowRsp::GetLabelList() const
{
    return m_labelList;
}

void GetWorkflowRsp::SetLabelList(const vector<LabelBrief>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool GetWorkflowRsp::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

AlarmBrief GetWorkflowRsp::GetAlarm() const
{
    return m_alarm;
}

void GetWorkflowRsp::SetAlarm(const AlarmBrief& _alarm)
{
    m_alarm = _alarm;
    m_alarmHasBeenSet = true;
}

bool GetWorkflowRsp::AlarmHasBeenSet() const
{
    return m_alarmHasBeenSet;
}

MonitorMetricBrief GetWorkflowRsp::GetMonitorMetric() const
{
    return m_monitorMetric;
}

void GetWorkflowRsp::SetMonitorMetric(const MonitorMetricBrief& _monitorMetric)
{
    m_monitorMetric = _monitorMetric;
    m_monitorMetricHasBeenSet = true;
}

bool GetWorkflowRsp::MonitorMetricHasBeenSet() const
{
    return m_monitorMetricHasBeenSet;
}

WorkflowAdvanceConfig GetWorkflowRsp::GetAdvanceConfig() const
{
    return m_advanceConfig;
}

void GetWorkflowRsp::SetAdvanceConfig(const WorkflowAdvanceConfig& _advanceConfig)
{
    m_advanceConfig = _advanceConfig;
    m_advanceConfigHasBeenSet = true;
}

bool GetWorkflowRsp::AdvanceConfigHasBeenSet() const
{
    return m_advanceConfigHasBeenSet;
}

vector<WorkflowTask> GetWorkflowRsp::GetTaskList() const
{
    return m_taskList;
}

void GetWorkflowRsp::SetTaskList(const vector<WorkflowTask>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool GetWorkflowRsp::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

string GetWorkflowRsp::GetBundleId() const
{
    return m_bundleId;
}

void GetWorkflowRsp::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool GetWorkflowRsp::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string GetWorkflowRsp::GetBundleInfo() const
{
    return m_bundleInfo;
}

void GetWorkflowRsp::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool GetWorkflowRsp::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

string GetWorkflowRsp::GetGitConfigId() const
{
    return m_gitConfigId;
}

void GetWorkflowRsp::SetGitConfigId(const string& _gitConfigId)
{
    m_gitConfigId = _gitConfigId;
    m_gitConfigIdHasBeenSet = true;
}

bool GetWorkflowRsp::GitConfigIdHasBeenSet() const
{
    return m_gitConfigIdHasBeenSet;
}

string GetWorkflowRsp::GetGitBranch() const
{
    return m_gitBranch;
}

void GetWorkflowRsp::SetGitBranch(const string& _gitBranch)
{
    m_gitBranch = _gitBranch;
    m_gitBranchHasBeenSet = true;
}

bool GetWorkflowRsp::GitBranchHasBeenSet() const
{
    return m_gitBranchHasBeenSet;
}

