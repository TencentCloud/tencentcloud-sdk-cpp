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

#include <tencentcloud/vpc/v20170312/model/CcnPolicyBasedRoutingRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnPolicyBasedRoutingRule::CcnPolicyBasedRoutingRule() :
    m_policyBasedRoutingNextHopIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyBasedRoutingRuleIdHasBeenSet(false)
{
}

CoreInternalOutcome CcnPolicyBasedRoutingRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyBasedRoutingNextHopId") && !value["PolicyBasedRoutingNextHopId"].IsNull())
    {
        if (!value["PolicyBasedRoutingNextHopId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.PolicyBasedRoutingNextHopId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyBasedRoutingNextHopId = string(value["PolicyBasedRoutingNextHopId"].GetString());
        m_policyBasedRoutingNextHopIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceCidrBlock") && !value["SourceCidrBlock"].IsNull())
    {
        if (!value["SourceCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.SourceCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidrBlock = string(value["SourceCidrBlock"].GetString());
        m_sourceCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PolicyBasedRoutingRuleId") && !value["PolicyBasedRoutingRuleId"].IsNull())
    {
        if (!value["PolicyBasedRoutingRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingRule.PolicyBasedRoutingRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyBasedRoutingRuleId = string(value["PolicyBasedRoutingRuleId"].GetString());
        m_policyBasedRoutingRuleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnPolicyBasedRoutingRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyBasedRoutingNextHopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyBasedRoutingNextHopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyBasedRoutingNextHopId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_policyBasedRoutingRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyBasedRoutingRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyBasedRoutingRuleId.c_str(), allocator).Move(), allocator);
    }

}


string CcnPolicyBasedRoutingRule::GetPolicyBasedRoutingNextHopId() const
{
    return m_policyBasedRoutingNextHopId;
}

void CcnPolicyBasedRoutingRule::SetPolicyBasedRoutingNextHopId(const string& _policyBasedRoutingNextHopId)
{
    m_policyBasedRoutingNextHopId = _policyBasedRoutingNextHopId;
    m_policyBasedRoutingNextHopIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::PolicyBasedRoutingNextHopIdHasBeenSet() const
{
    return m_policyBasedRoutingNextHopIdHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetInstanceType() const
{
    return m_instanceType;
}

void CcnPolicyBasedRoutingRule::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetInstanceId() const
{
    return m_instanceId;
}

void CcnPolicyBasedRoutingRule::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetSourceCidrBlock() const
{
    return m_sourceCidrBlock;
}

void CcnPolicyBasedRoutingRule::SetSourceCidrBlock(const string& _sourceCidrBlock)
{
    m_sourceCidrBlock = _sourceCidrBlock;
    m_sourceCidrBlockHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::SourceCidrBlockHasBeenSet() const
{
    return m_sourceCidrBlockHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void CcnPolicyBasedRoutingRule::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

int64_t CcnPolicyBasedRoutingRule::GetPriority() const
{
    return m_priority;
}

void CcnPolicyBasedRoutingRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetDescription() const
{
    return m_description;
}

void CcnPolicyBasedRoutingRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CcnPolicyBasedRoutingRule::GetPolicyBasedRoutingRuleId() const
{
    return m_policyBasedRoutingRuleId;
}

void CcnPolicyBasedRoutingRule::SetPolicyBasedRoutingRuleId(const string& _policyBasedRoutingRuleId)
{
    m_policyBasedRoutingRuleId = _policyBasedRoutingRuleId;
    m_policyBasedRoutingRuleIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingRule::PolicyBasedRoutingRuleIdHasBeenSet() const
{
    return m_policyBasedRoutingRuleIdHasBeenSet;
}

