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

#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreatePolicyGroupRequest::CreatePolicyGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_conditionTempGroupIdHasBeenSet(false),
    m_isShieldedHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_eventConditionsHasBeenSet(false),
    m_backEndCallHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

string CreatePolicyGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_conditionTempGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionTempGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_conditionTempGroupId, allocator);
    }

    if (m_isShieldedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShielded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isShielded, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eventConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventConditions.begin(); itr != m_eventConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_backEndCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackEndCall";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backEndCall, allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUnionRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePolicyGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreatePolicyGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreatePolicyGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreatePolicyGroupRequest::GetModule() const
{
    return m_module;
}

void CreatePolicyGroupRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreatePolicyGroupRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreatePolicyGroupRequest::GetViewName() const
{
    return m_viewName;
}

void CreatePolicyGroupRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool CreatePolicyGroupRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreatePolicyGroupRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreatePolicyGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetConditionTempGroupId() const
{
    return m_conditionTempGroupId;
}

void CreatePolicyGroupRequest::SetConditionTempGroupId(const int64_t& _conditionTempGroupId)
{
    m_conditionTempGroupId = _conditionTempGroupId;
    m_conditionTempGroupIdHasBeenSet = true;
}

bool CreatePolicyGroupRequest::ConditionTempGroupIdHasBeenSet() const
{
    return m_conditionTempGroupIdHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetIsShielded() const
{
    return m_isShielded;
}

void CreatePolicyGroupRequest::SetIsShielded(const int64_t& _isShielded)
{
    m_isShielded = _isShielded;
    m_isShieldedHasBeenSet = true;
}

bool CreatePolicyGroupRequest::IsShieldedHasBeenSet() const
{
    return m_isShieldedHasBeenSet;
}

string CreatePolicyGroupRequest::GetRemark() const
{
    return m_remark;
}

void CreatePolicyGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreatePolicyGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetInsertTime() const
{
    return m_insertTime;
}

void CreatePolicyGroupRequest::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool CreatePolicyGroupRequest::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

vector<CreatePolicyGroupCondition> CreatePolicyGroupRequest::GetConditions() const
{
    return m_conditions;
}

void CreatePolicyGroupRequest::SetConditions(const vector<CreatePolicyGroupCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool CreatePolicyGroupRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<CreatePolicyGroupEventCondition> CreatePolicyGroupRequest::GetEventConditions() const
{
    return m_eventConditions;
}

void CreatePolicyGroupRequest::SetEventConditions(const vector<CreatePolicyGroupEventCondition>& _eventConditions)
{
    m_eventConditions = _eventConditions;
    m_eventConditionsHasBeenSet = true;
}

bool CreatePolicyGroupRequest::EventConditionsHasBeenSet() const
{
    return m_eventConditionsHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetBackEndCall() const
{
    return m_backEndCall;
}

void CreatePolicyGroupRequest::SetBackEndCall(const int64_t& _backEndCall)
{
    m_backEndCall = _backEndCall;
    m_backEndCallHasBeenSet = true;
}

bool CreatePolicyGroupRequest::BackEndCallHasBeenSet() const
{
    return m_backEndCallHasBeenSet;
}

int64_t CreatePolicyGroupRequest::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void CreatePolicyGroupRequest::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool CreatePolicyGroupRequest::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}


