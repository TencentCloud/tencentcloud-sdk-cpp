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

#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyPolicyGroupRequest::ModifyPolicyGroupRequest() :
    m_moduleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_eventConditionsHasBeenSet(false),
    m_conditionTempGroupIdHasBeenSet(false)
{
}

string ModifyPolicyGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUnionRule, allocator);
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

    if (m_conditionTempGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionTempGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_conditionTempGroupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPolicyGroupRequest::GetModule() const
{
    return m_module;
}

void ModifyPolicyGroupRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t ModifyPolicyGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyPolicyGroupRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyPolicyGroupRequest::GetViewName() const
{
    return m_viewName;
}

void ModifyPolicyGroupRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string ModifyPolicyGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifyPolicyGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ModifyPolicyGroupRequest::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void ModifyPolicyGroupRequest::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

vector<ModifyPolicyGroupCondition> ModifyPolicyGroupRequest::GetConditions() const
{
    return m_conditions;
}

void ModifyPolicyGroupRequest::SetConditions(const vector<ModifyPolicyGroupCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<ModifyPolicyGroupEventCondition> ModifyPolicyGroupRequest::GetEventConditions() const
{
    return m_eventConditions;
}

void ModifyPolicyGroupRequest::SetEventConditions(const vector<ModifyPolicyGroupEventCondition>& _eventConditions)
{
    m_eventConditions = _eventConditions;
    m_eventConditionsHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::EventConditionsHasBeenSet() const
{
    return m_eventConditionsHasBeenSet;
}

int64_t ModifyPolicyGroupRequest::GetConditionTempGroupId() const
{
    return m_conditionTempGroupId;
}

void ModifyPolicyGroupRequest::SetConditionTempGroupId(const int64_t& _conditionTempGroupId)
{
    m_conditionTempGroupId = _conditionTempGroupId;
    m_conditionTempGroupIdHasBeenSet = true;
}

bool ModifyPolicyGroupRequest::ConditionTempGroupIdHasBeenSet() const
{
    return m_conditionTempGroupIdHasBeenSet;
}


