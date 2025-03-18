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

#include <tencentcloud/teo/v20220901/model/ManagedRuleGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ManagedRuleGroup::ManagedRuleGroup() :
    m_groupIdHasBeenSet(false),
    m_sensitivityLevelHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleActionsHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome ManagedRuleGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("SensitivityLevel") && !value["SensitivityLevel"].IsNull())
    {
        if (!value["SensitivityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroup.SensitivityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sensitivityLevel = string(value["SensitivityLevel"].GetString());
        m_sensitivityLevelHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroup.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RuleActions") && !value["RuleActions"].IsNull())
    {
        if (!value["RuleActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroup.RuleActions` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagedRuleAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleActions.push_back(item);
        }
        m_ruleActionsHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroup.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedRuleGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitivityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitivityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sensitivityLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleActions.begin(); itr != m_ruleActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ManagedRuleGroup::GetGroupId() const
{
    return m_groupId;
}

void ManagedRuleGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ManagedRuleGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ManagedRuleGroup::GetSensitivityLevel() const
{
    return m_sensitivityLevel;
}

void ManagedRuleGroup::SetSensitivityLevel(const string& _sensitivityLevel)
{
    m_sensitivityLevel = _sensitivityLevel;
    m_sensitivityLevelHasBeenSet = true;
}

bool ManagedRuleGroup::SensitivityLevelHasBeenSet() const
{
    return m_sensitivityLevelHasBeenSet;
}

SecurityAction ManagedRuleGroup::GetAction() const
{
    return m_action;
}

void ManagedRuleGroup::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ManagedRuleGroup::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<ManagedRuleAction> ManagedRuleGroup::GetRuleActions() const
{
    return m_ruleActions;
}

void ManagedRuleGroup::SetRuleActions(const vector<ManagedRuleAction>& _ruleActions)
{
    m_ruleActions = _ruleActions;
    m_ruleActionsHasBeenSet = true;
}

bool ManagedRuleGroup::RuleActionsHasBeenSet() const
{
    return m_ruleActionsHasBeenSet;
}

ManagedRuleGroupMeta ManagedRuleGroup::GetMetaData() const
{
    return m_metaData;
}

void ManagedRuleGroup::SetMetaData(const ManagedRuleGroupMeta& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool ManagedRuleGroup::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

