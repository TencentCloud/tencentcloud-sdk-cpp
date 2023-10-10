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

#include <tencentcloud/cwp/v20180228/model/RiskDnsPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RiskDnsPolicy::RiskDnsPolicy() :
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyActionHasBeenSet(false),
    m_hostScopeHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyDescHasBeenSet(false),
    m_isDealOldEventHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

CoreInternalOutcome RiskDnsPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyAction") && !value["PolicyAction"].IsNull())
    {
        if (!value["PolicyAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.PolicyAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyAction = value["PolicyAction"].GetInt64();
        m_policyActionHasBeenSet = true;
    }

    if (value.HasMember("HostScope") && !value["HostScope"].IsNull())
    {
        if (!value["HostScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.HostScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostScope = value["HostScope"].GetInt64();
        m_hostScopeHasBeenSet = true;
    }

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyDesc") && !value["PolicyDesc"].IsNull())
    {
        if (!value["PolicyDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.PolicyDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDesc = string(value["PolicyDesc"].GetString());
        m_policyDescHasBeenSet = true;
    }

    if (value.HasMember("IsDealOldEvent") && !value["IsDealOldEvent"].IsNull())
    {
        if (!value["IsDealOldEvent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.IsDealOldEvent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDealOldEvent = value["IsDealOldEvent"].GetInt64();
        m_isDealOldEventHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsPolicy.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDnsPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyAction, allocator);
    }

    if (m_hostScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostScope, allocator);
    }

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isDealOldEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDealOldEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDealOldEvent, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

}


string RiskDnsPolicy::GetPolicyName() const
{
    return m_policyName;
}

void RiskDnsPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool RiskDnsPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t RiskDnsPolicy::GetPolicyType() const
{
    return m_policyType;
}

void RiskDnsPolicy::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool RiskDnsPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t RiskDnsPolicy::GetPolicyAction() const
{
    return m_policyAction;
}

void RiskDnsPolicy::SetPolicyAction(const int64_t& _policyAction)
{
    m_policyAction = _policyAction;
    m_policyActionHasBeenSet = true;
}

bool RiskDnsPolicy::PolicyActionHasBeenSet() const
{
    return m_policyActionHasBeenSet;
}

int64_t RiskDnsPolicy::GetHostScope() const
{
    return m_hostScope;
}

void RiskDnsPolicy::SetHostScope(const int64_t& _hostScope)
{
    m_hostScope = _hostScope;
    m_hostScopeHasBeenSet = true;
}

bool RiskDnsPolicy::HostScopeHasBeenSet() const
{
    return m_hostScopeHasBeenSet;
}

vector<string> RiskDnsPolicy::GetHostIds() const
{
    return m_hostIds;
}

void RiskDnsPolicy::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool RiskDnsPolicy::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

vector<string> RiskDnsPolicy::GetDomains() const
{
    return m_domains;
}

void RiskDnsPolicy::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool RiskDnsPolicy::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t RiskDnsPolicy::GetIsEnabled() const
{
    return m_isEnabled;
}

void RiskDnsPolicy::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool RiskDnsPolicy::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t RiskDnsPolicy::GetPolicyId() const
{
    return m_policyId;
}

void RiskDnsPolicy::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool RiskDnsPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string RiskDnsPolicy::GetPolicyDesc() const
{
    return m_policyDesc;
}

void RiskDnsPolicy::SetPolicyDesc(const string& _policyDesc)
{
    m_policyDesc = _policyDesc;
    m_policyDescHasBeenSet = true;
}

bool RiskDnsPolicy::PolicyDescHasBeenSet() const
{
    return m_policyDescHasBeenSet;
}

int64_t RiskDnsPolicy::GetIsDealOldEvent() const
{
    return m_isDealOldEvent;
}

void RiskDnsPolicy::SetIsDealOldEvent(const int64_t& _isDealOldEvent)
{
    m_isDealOldEvent = _isDealOldEvent;
    m_isDealOldEventHasBeenSet = true;
}

bool RiskDnsPolicy::IsDealOldEventHasBeenSet() const
{
    return m_isDealOldEventHasBeenSet;
}

string RiskDnsPolicy::GetUpdateTime() const
{
    return m_updateTime;
}

void RiskDnsPolicy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RiskDnsPolicy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RiskDnsPolicy::GetEventId() const
{
    return m_eventId;
}

void RiskDnsPolicy::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RiskDnsPolicy::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

