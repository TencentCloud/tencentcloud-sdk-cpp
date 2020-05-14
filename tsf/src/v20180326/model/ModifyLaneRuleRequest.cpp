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

#include <tencentcloud/tsf/v20180326/model/ModifyLaneRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

ModifyLaneRuleRequest::ModifyLaneRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleTagListHasBeenSet(false),
    m_ruleTagRelationshipHasBeenSet(false),
    m_laneIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string ModifyLaneRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleTagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleTagList.begin(); itr != m_ruleTagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ruleTagRelationshipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleTagRelationship";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleTagRelationship.c_str(), allocator).Move(), allocator);
    }

    if (m_laneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_laneId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLaneRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyLaneRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyLaneRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyLaneRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyLaneRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyLaneRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ModifyLaneRuleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyLaneRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyLaneRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<LaneRuleTag> ModifyLaneRuleRequest::GetRuleTagList() const
{
    return m_ruleTagList;
}

void ModifyLaneRuleRequest::SetRuleTagList(const vector<LaneRuleTag>& _ruleTagList)
{
    m_ruleTagList = _ruleTagList;
    m_ruleTagListHasBeenSet = true;
}

bool ModifyLaneRuleRequest::RuleTagListHasBeenSet() const
{
    return m_ruleTagListHasBeenSet;
}

string ModifyLaneRuleRequest::GetRuleTagRelationship() const
{
    return m_ruleTagRelationship;
}

void ModifyLaneRuleRequest::SetRuleTagRelationship(const string& _ruleTagRelationship)
{
    m_ruleTagRelationship = _ruleTagRelationship;
    m_ruleTagRelationshipHasBeenSet = true;
}

bool ModifyLaneRuleRequest::RuleTagRelationshipHasBeenSet() const
{
    return m_ruleTagRelationshipHasBeenSet;
}

string ModifyLaneRuleRequest::GetLaneId() const
{
    return m_laneId;
}

void ModifyLaneRuleRequest::SetLaneId(const string& _laneId)
{
    m_laneId = _laneId;
    m_laneIdHasBeenSet = true;
}

bool ModifyLaneRuleRequest::LaneIdHasBeenSet() const
{
    return m_laneIdHasBeenSet;
}

bool ModifyLaneRuleRequest::GetEnable() const
{
    return m_enable;
}

void ModifyLaneRuleRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyLaneRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


