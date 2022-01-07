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

#include <tencentcloud/cam/v20190116/model/AttachedUserPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AttachedUserPolicy::AttachedUserPolicy() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_deactivedHasBeenSet(false),
    m_deactivedDetailHasBeenSet(false)
{
}

CoreInternalOutcome AttachedUserPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.CreateMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = string(value["CreateMode"].GetString());
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttachedUserPolicyGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("Deactived") && !value["Deactived"].IsNull())
    {
        if (!value["Deactived"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.Deactived` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deactived = value["Deactived"].GetUint64();
        m_deactivedHasBeenSet = true;
    }

    if (value.HasMember("DeactivedDetail") && !value["DeactivedDetail"].IsNull())
    {
        if (!value["DeactivedDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachedUserPolicy.DeactivedDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["DeactivedDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deactivedDetail.push_back((*itr).GetString());
        }
        m_deactivedDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachedUserPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createMode.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deactivedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deactived";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deactived, allocator);
    }

    if (m_deactivedDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeactivedDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deactivedDetail.begin(); itr != m_deactivedDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AttachedUserPolicy::GetPolicyId() const
{
    return m_policyId;
}

void AttachedUserPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AttachedUserPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AttachedUserPolicy::GetPolicyName() const
{
    return m_policyName;
}

void AttachedUserPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AttachedUserPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AttachedUserPolicy::GetDescription() const
{
    return m_description;
}

void AttachedUserPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AttachedUserPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AttachedUserPolicy::GetAddTime() const
{
    return m_addTime;
}

void AttachedUserPolicy::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool AttachedUserPolicy::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string AttachedUserPolicy::GetStrategyType() const
{
    return m_strategyType;
}

void AttachedUserPolicy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool AttachedUserPolicy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string AttachedUserPolicy::GetCreateMode() const
{
    return m_createMode;
}

void AttachedUserPolicy::SetCreateMode(const string& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool AttachedUserPolicy::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

vector<AttachedUserPolicyGroupInfo> AttachedUserPolicy::GetGroups() const
{
    return m_groups;
}

void AttachedUserPolicy::SetGroups(const vector<AttachedUserPolicyGroupInfo>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool AttachedUserPolicy::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

uint64_t AttachedUserPolicy::GetDeactived() const
{
    return m_deactived;
}

void AttachedUserPolicy::SetDeactived(const uint64_t& _deactived)
{
    m_deactived = _deactived;
    m_deactivedHasBeenSet = true;
}

bool AttachedUserPolicy::DeactivedHasBeenSet() const
{
    return m_deactivedHasBeenSet;
}

vector<string> AttachedUserPolicy::GetDeactivedDetail() const
{
    return m_deactivedDetail;
}

void AttachedUserPolicy::SetDeactivedDetail(const vector<string>& _deactivedDetail)
{
    m_deactivedDetail = _deactivedDetail;
    m_deactivedDetailHasBeenSet = true;
}

bool AttachedUserPolicy::DeactivedDetailHasBeenSet() const
{
    return m_deactivedDetailHasBeenSet;
}

