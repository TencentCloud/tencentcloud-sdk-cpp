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

#include <tencentcloud/monitor/v20180724/model/CreateConditionsTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateConditionsTemplateRequest::CreateConditionsTemplateRequest() :
    m_moduleHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_parentGroupIDHasBeenSet(false),
    m_isShieldedHasBeenSet(false),
    m_complexExpressionHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_eventConditionsHasBeenSet(false)
{
}

string CreateConditionsTemplateRequest::ToJsonString() const
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_parentGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentGroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentGroupID, allocator);
    }

    if (m_isShieldedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShielded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isShielded, allocator);
    }

    if (m_complexExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_complexExpression.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConditionsTemplateRequest::GetModule() const
{
    return m_module;
}

void CreateConditionsTemplateRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateConditionsTemplateRequest::GetViewName() const
{
    return m_viewName;
}

void CreateConditionsTemplateRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string CreateConditionsTemplateRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateConditionsTemplateRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t CreateConditionsTemplateRequest::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void CreateConditionsTemplateRequest::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

string CreateConditionsTemplateRequest::GetRemark() const
{
    return m_remark;
}

void CreateConditionsTemplateRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateConditionsTemplateRequest::GetParentGroupID() const
{
    return m_parentGroupID;
}

void CreateConditionsTemplateRequest::SetParentGroupID(const int64_t& _parentGroupID)
{
    m_parentGroupID = _parentGroupID;
    m_parentGroupIDHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::ParentGroupIDHasBeenSet() const
{
    return m_parentGroupIDHasBeenSet;
}

int64_t CreateConditionsTemplateRequest::GetIsShielded() const
{
    return m_isShielded;
}

void CreateConditionsTemplateRequest::SetIsShielded(const int64_t& _isShielded)
{
    m_isShielded = _isShielded;
    m_isShieldedHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::IsShieldedHasBeenSet() const
{
    return m_isShieldedHasBeenSet;
}

string CreateConditionsTemplateRequest::GetComplexExpression() const
{
    return m_complexExpression;
}

void CreateConditionsTemplateRequest::SetComplexExpression(const string& _complexExpression)
{
    m_complexExpression = _complexExpression;
    m_complexExpressionHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::ComplexExpressionHasBeenSet() const
{
    return m_complexExpressionHasBeenSet;
}

vector<ModifyConditionsTemplateRequestCondition> CreateConditionsTemplateRequest::GetConditions() const
{
    return m_conditions;
}

void CreateConditionsTemplateRequest::SetConditions(const vector<ModifyConditionsTemplateRequestCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<ModifyConditionsTemplateRequestEventCondition> CreateConditionsTemplateRequest::GetEventConditions() const
{
    return m_eventConditions;
}

void CreateConditionsTemplateRequest::SetEventConditions(const vector<ModifyConditionsTemplateRequestEventCondition>& _eventConditions)
{
    m_eventConditions = _eventConditions;
    m_eventConditionsHasBeenSet = true;
}

bool CreateConditionsTemplateRequest::EventConditionsHasBeenSet() const
{
    return m_eventConditionsHasBeenSet;
}


