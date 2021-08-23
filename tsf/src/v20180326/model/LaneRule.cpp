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

#include <tencentcloud/tsf/v20180326/model/LaneRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

LaneRule::LaneRule() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleTagListHasBeenSet(false),
    m_ruleTagRelationshipHasBeenSet(false),
    m_laneIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LaneRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("RuleTagList") && !value["RuleTagList"].IsNull())
    {
        if (!value["RuleTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaneRule.RuleTagList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LaneRuleTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleTagList.push_back(item);
        }
        m_ruleTagListHasBeenSet = true;
    }

    if (value.HasMember("RuleTagRelationship") && !value["RuleTagRelationship"].IsNull())
    {
        if (!value["RuleTagRelationship"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.RuleTagRelationship` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTagRelationship = string(value["RuleTagRelationship"].GetString());
        m_ruleTagRelationshipHasBeenSet = true;
    }

    if (value.HasMember("LaneId") && !value["LaneId"].IsNull())
    {
        if (!value["LaneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.LaneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneId = string(value["LaneId"].GetString());
        m_laneIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRule.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaneRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleTagList.begin(); itr != m_ruleTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleTagRelationshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTagRelationship";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTagRelationship.c_str(), allocator).Move(), allocator);
    }

    if (m_laneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string LaneRule::GetRuleId() const
{
    return m_ruleId;
}

void LaneRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool LaneRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string LaneRule::GetRuleName() const
{
    return m_ruleName;
}

void LaneRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool LaneRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t LaneRule::GetPriority() const
{
    return m_priority;
}

void LaneRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LaneRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string LaneRule::GetRemark() const
{
    return m_remark;
}

void LaneRule::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool LaneRule::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<LaneRuleTag> LaneRule::GetRuleTagList() const
{
    return m_ruleTagList;
}

void LaneRule::SetRuleTagList(const vector<LaneRuleTag>& _ruleTagList)
{
    m_ruleTagList = _ruleTagList;
    m_ruleTagListHasBeenSet = true;
}

bool LaneRule::RuleTagListHasBeenSet() const
{
    return m_ruleTagListHasBeenSet;
}

string LaneRule::GetRuleTagRelationship() const
{
    return m_ruleTagRelationship;
}

void LaneRule::SetRuleTagRelationship(const string& _ruleTagRelationship)
{
    m_ruleTagRelationship = _ruleTagRelationship;
    m_ruleTagRelationshipHasBeenSet = true;
}

bool LaneRule::RuleTagRelationshipHasBeenSet() const
{
    return m_ruleTagRelationshipHasBeenSet;
}

string LaneRule::GetLaneId() const
{
    return m_laneId;
}

void LaneRule::SetLaneId(const string& _laneId)
{
    m_laneId = _laneId;
    m_laneIdHasBeenSet = true;
}

bool LaneRule::LaneIdHasBeenSet() const
{
    return m_laneIdHasBeenSet;
}

bool LaneRule::GetEnable() const
{
    return m_enable;
}

void LaneRule::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool LaneRule::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t LaneRule::GetCreateTime() const
{
    return m_createTime;
}

void LaneRule::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LaneRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t LaneRule::GetUpdateTime() const
{
    return m_updateTime;
}

void LaneRule::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LaneRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

