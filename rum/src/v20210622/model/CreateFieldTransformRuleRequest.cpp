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

#include <tencentcloud/rum/v20210622/model/CreateFieldTransformRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateFieldTransformRuleRequest::CreateFieldTransformRuleRequest() :
    m_projectIdHasBeenSet(false),
    m_targetFieldHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_matchPatternHasBeenSet(false),
    m_transformActionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_replaceValueHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string CreateFieldTransformRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_targetFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetField.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_transformActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transformAction.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replaceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateFieldTransformRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateFieldTransformRuleRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetTargetField() const
{
    return m_targetField;
}

void CreateFieldTransformRuleRequest::SetTargetField(const string& _targetField)
{
    m_targetField = _targetField;
    m_targetFieldHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::TargetFieldHasBeenSet() const
{
    return m_targetFieldHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetMatchType() const
{
    return m_matchType;
}

void CreateFieldTransformRuleRequest::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetMatchPattern() const
{
    return m_matchPattern;
}

void CreateFieldTransformRuleRequest::SetMatchPattern(const string& _matchPattern)
{
    m_matchPattern = _matchPattern;
    m_matchPatternHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::MatchPatternHasBeenSet() const
{
    return m_matchPatternHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetTransformAction() const
{
    return m_transformAction;
}

void CreateFieldTransformRuleRequest::SetTransformAction(const string& _transformAction)
{
    m_transformAction = _transformAction;
    m_transformActionHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::TransformActionHasBeenSet() const
{
    return m_transformActionHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetName() const
{
    return m_name;
}

void CreateFieldTransformRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateFieldTransformRuleRequest::GetReplaceValue() const
{
    return m_replaceValue;
}

void CreateFieldTransformRuleRequest::SetReplaceValue(const string& _replaceValue)
{
    m_replaceValue = _replaceValue;
    m_replaceValueHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::ReplaceValueHasBeenSet() const
{
    return m_replaceValueHasBeenSet;
}

int64_t CreateFieldTransformRuleRequest::GetPriority() const
{
    return m_priority;
}

void CreateFieldTransformRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool CreateFieldTransformRuleRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateFieldTransformRuleRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateFieldTransformRuleRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


