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

#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

CreateAlarmPolicyRequest::CreateAlarmPolicyRequest() :
    m_moduleHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_eventConditionHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_triggerTasksHasBeenSet(false)
{
}

string CreateAlarmPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventConditionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_eventCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_noticeIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_noticeIds.begin(); itr != m_noticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_triggerTasksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTasks.begin(); itr != m_triggerTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAlarmPolicyRequest::GetModule() const
{
    return m_module;
}

void CreateAlarmPolicyRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateAlarmPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreateAlarmPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CreateAlarmPolicyRequest::GetMonitorType() const
{
    return m_monitorType;
}

void CreateAlarmPolicyRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string CreateAlarmPolicyRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateAlarmPolicyRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateAlarmPolicyRequest::GetRemark() const
{
    return m_remark;
}

void CreateAlarmPolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetEnable() const
{
    return m_enable;
}

void CreateAlarmPolicyRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateAlarmPolicyRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

AlarmPolicyCondition CreateAlarmPolicyRequest::GetCondition() const
{
    return m_condition;
}

void CreateAlarmPolicyRequest::SetCondition(const AlarmPolicyCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

AlarmPolicyEventCondition CreateAlarmPolicyRequest::GetEventCondition() const
{
    return m_eventCondition;
}

void CreateAlarmPolicyRequest::SetEventCondition(const AlarmPolicyEventCondition& _eventCondition)
{
    m_eventCondition = _eventCondition;
    m_eventConditionHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::EventConditionHasBeenSet() const
{
    return m_eventConditionHasBeenSet;
}

vector<string> CreateAlarmPolicyRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void CreateAlarmPolicyRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<AlarmPolicyTriggerTask> CreateAlarmPolicyRequest::GetTriggerTasks() const
{
    return m_triggerTasks;
}

void CreateAlarmPolicyRequest::SetTriggerTasks(const vector<AlarmPolicyTriggerTask>& _triggerTasks)
{
    m_triggerTasks = _triggerTasks;
    m_triggerTasksHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::TriggerTasksHasBeenSet() const
{
    return m_triggerTasksHasBeenSet;
}


