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

#include <tencentcloud/teo/v20220901/model/ManagedRuleGroupMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ManagedRuleGroupMeta::ManagedRuleGroupMeta() :
    m_groupDetailHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ruleDetailsHasBeenSet(false)
{
}

CoreInternalOutcome ManagedRuleGroupMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupDetail") && !value["GroupDetail"].IsNull())
    {
        if (!value["GroupDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroupMeta.GroupDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDetail = string(value["GroupDetail"].GetString());
        m_groupDetailHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroupMeta.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleDetails") && !value["RuleDetails"].IsNull())
    {
        if (!value["RuleDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagedRuleGroupMeta.RuleDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagedRuleDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleDetails.push_back(item);
        }
        m_ruleDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedRuleGroupMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleDetails.begin(); itr != m_ruleDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ManagedRuleGroupMeta::GetGroupDetail() const
{
    return m_groupDetail;
}

void ManagedRuleGroupMeta::SetGroupDetail(const string& _groupDetail)
{
    m_groupDetail = _groupDetail;
    m_groupDetailHasBeenSet = true;
}

bool ManagedRuleGroupMeta::GroupDetailHasBeenSet() const
{
    return m_groupDetailHasBeenSet;
}

string ManagedRuleGroupMeta::GetGroupName() const
{
    return m_groupName;
}

void ManagedRuleGroupMeta::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ManagedRuleGroupMeta::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<ManagedRuleDetail> ManagedRuleGroupMeta::GetRuleDetails() const
{
    return m_ruleDetails;
}

void ManagedRuleGroupMeta::SetRuleDetails(const vector<ManagedRuleDetail>& _ruleDetails)
{
    m_ruleDetails = _ruleDetails;
    m_ruleDetailsHasBeenSet = true;
}

bool ManagedRuleGroupMeta::RuleDetailsHasBeenSet() const
{
    return m_ruleDetailsHasBeenSet;
}

