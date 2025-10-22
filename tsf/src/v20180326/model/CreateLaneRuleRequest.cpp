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

#include <tencentcloud/tsf/v20180326/model/CreateLaneRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateLaneRuleRequest::CreateLaneRuleRequest() :
    m_ruleNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleTagListHasBeenSet(false),
    m_ruleTagRelationshipHasBeenSet(false),
    m_laneIdHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateLaneRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleTagList.begin(); itr != m_ruleTagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ruleTagRelationshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTagRelationship";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleTagRelationship.c_str(), allocator).Move(), allocator);
    }

    if (m_laneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_laneId.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLaneRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateLaneRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateLaneRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateLaneRuleRequest::GetRemark() const
{
    return m_remark;
}

void CreateLaneRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateLaneRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<LaneRuleTag> CreateLaneRuleRequest::GetRuleTagList() const
{
    return m_ruleTagList;
}

void CreateLaneRuleRequest::SetRuleTagList(const vector<LaneRuleTag>& _ruleTagList)
{
    m_ruleTagList = _ruleTagList;
    m_ruleTagListHasBeenSet = true;
}

bool CreateLaneRuleRequest::RuleTagListHasBeenSet() const
{
    return m_ruleTagListHasBeenSet;
}

string CreateLaneRuleRequest::GetRuleTagRelationship() const
{
    return m_ruleTagRelationship;
}

void CreateLaneRuleRequest::SetRuleTagRelationship(const string& _ruleTagRelationship)
{
    m_ruleTagRelationship = _ruleTagRelationship;
    m_ruleTagRelationshipHasBeenSet = true;
}

bool CreateLaneRuleRequest::RuleTagRelationshipHasBeenSet() const
{
    return m_ruleTagRelationshipHasBeenSet;
}

string CreateLaneRuleRequest::GetLaneId() const
{
    return m_laneId;
}

void CreateLaneRuleRequest::SetLaneId(const string& _laneId)
{
    m_laneId = _laneId;
    m_laneIdHasBeenSet = true;
}

bool CreateLaneRuleRequest::LaneIdHasBeenSet() const
{
    return m_laneIdHasBeenSet;
}

vector<string> CreateLaneRuleRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateLaneRuleRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateLaneRuleRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


