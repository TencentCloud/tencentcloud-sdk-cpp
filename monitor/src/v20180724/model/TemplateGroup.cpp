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

#include <tencentcloud/monitor/v20180724/model/TemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

TemplateGroup::TemplateGroup() :
    m_conditionsHasBeenSet(false),
    m_eventConditionsHasBeenSet(false),
    m_policyGroupsHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

CoreInternalOutcome TemplateGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Condition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("EventConditions") && !value["EventConditions"].IsNull())
    {
        if (!value["EventConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.EventConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["EventConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventConditions.push_back(item);
        }
        m_eventConditionsHasBeenSet = true;
    }

    if (value.HasMember("PolicyGroups") && !value["PolicyGroups"].IsNull())
    {
        if (!value["PolicyGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.PolicyGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolicyGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyGroups.push_back(item);
        }
        m_policyGroupsHasBeenSet = true;
    }

    if (value.HasMember("GroupID") && !value["GroupID"].IsNull())
    {
        if (!value["GroupID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.GroupID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupID = value["GroupID"].GetInt64();
        m_groupIDHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.LastEditUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = value["LastEditUin"].GetInt64();
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("IsUnionRule") && !value["IsUnionRule"].IsNull())
    {
        if (!value["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = value["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventConditions.begin(); itr != m_eventConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyGroups.begin(); itr != m_policyGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupID, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastEditUin, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

}


vector<Condition> TemplateGroup::GetConditions() const
{
    return m_conditions;
}

void TemplateGroup::SetConditions(const vector<Condition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool TemplateGroup::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<EventCondition> TemplateGroup::GetEventConditions() const
{
    return m_eventConditions;
}

void TemplateGroup::SetEventConditions(const vector<EventCondition>& _eventConditions)
{
    m_eventConditions = _eventConditions;
    m_eventConditionsHasBeenSet = true;
}

bool TemplateGroup::EventConditionsHasBeenSet() const
{
    return m_eventConditionsHasBeenSet;
}

vector<PolicyGroup> TemplateGroup::GetPolicyGroups() const
{
    return m_policyGroups;
}

void TemplateGroup::SetPolicyGroups(const vector<PolicyGroup>& _policyGroups)
{
    m_policyGroups = _policyGroups;
    m_policyGroupsHasBeenSet = true;
}

bool TemplateGroup::PolicyGroupsHasBeenSet() const
{
    return m_policyGroupsHasBeenSet;
}

int64_t TemplateGroup::GetGroupID() const
{
    return m_groupID;
}

void TemplateGroup::SetGroupID(const int64_t& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool TemplateGroup::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

string TemplateGroup::GetGroupName() const
{
    return m_groupName;
}

void TemplateGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool TemplateGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t TemplateGroup::GetInsertTime() const
{
    return m_insertTime;
}

void TemplateGroup::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool TemplateGroup::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t TemplateGroup::GetLastEditUin() const
{
    return m_lastEditUin;
}

void TemplateGroup::SetLastEditUin(const int64_t& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool TemplateGroup::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

string TemplateGroup::GetRemark() const
{
    return m_remark;
}

void TemplateGroup::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TemplateGroup::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t TemplateGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void TemplateGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TemplateGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TemplateGroup::GetViewName() const
{
    return m_viewName;
}

void TemplateGroup::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool TemplateGroup::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

int64_t TemplateGroup::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void TemplateGroup::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool TemplateGroup::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

