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

#include <tencentcloud/cwp/v20180228/model/ShellPolicyList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ShellPolicyList::ShellPolicyList() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyDescHasBeenSet(false),
    m_policyActionHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hostScopeHasBeenSet(false)
{
}

CoreInternalOutcome ShellPolicyList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.PolicyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetUint64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyDesc") && !value["PolicyDesc"].IsNull())
    {
        if (!value["PolicyDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.PolicyDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDesc = string(value["PolicyDesc"].GetString());
        m_policyDescHasBeenSet = true;
    }

    if (value.HasMember("PolicyAction") && !value["PolicyAction"].IsNull())
    {
        if (!value["PolicyAction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.PolicyAction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyAction = value["PolicyAction"].GetUint64();
        m_policyActionHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.IsEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetUint64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HostScope") && !value["HostScope"].IsNull())
    {
        if (!value["HostScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShellPolicyList.HostScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostScope = value["HostScope"].GetUint64();
        m_hostScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShellPolicyList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

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

    if (m_policyDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_policyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyAction, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostScope, allocator);
    }

}


uint64_t ShellPolicyList::GetPolicyId() const
{
    return m_policyId;
}

void ShellPolicyList::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ShellPolicyList::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ShellPolicyList::GetPolicyName() const
{
    return m_policyName;
}

void ShellPolicyList::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ShellPolicyList::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

uint64_t ShellPolicyList::GetPolicyType() const
{
    return m_policyType;
}

void ShellPolicyList::SetPolicyType(const uint64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ShellPolicyList::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string ShellPolicyList::GetPolicyDesc() const
{
    return m_policyDesc;
}

void ShellPolicyList::SetPolicyDesc(const string& _policyDesc)
{
    m_policyDesc = _policyDesc;
    m_policyDescHasBeenSet = true;
}

bool ShellPolicyList::PolicyDescHasBeenSet() const
{
    return m_policyDescHasBeenSet;
}

uint64_t ShellPolicyList::GetPolicyAction() const
{
    return m_policyAction;
}

void ShellPolicyList::SetPolicyAction(const uint64_t& _policyAction)
{
    m_policyAction = _policyAction;
    m_policyActionHasBeenSet = true;
}

bool ShellPolicyList::PolicyActionHasBeenSet() const
{
    return m_policyActionHasBeenSet;
}

uint64_t ShellPolicyList::GetIsEnabled() const
{
    return m_isEnabled;
}

void ShellPolicyList::SetIsEnabled(const uint64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool ShellPolicyList::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string ShellPolicyList::GetUpdateTime() const
{
    return m_updateTime;
}

void ShellPolicyList::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ShellPolicyList::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ShellPolicyList::GetHostScope() const
{
    return m_hostScope;
}

void ShellPolicyList::SetHostScope(const uint64_t& _hostScope)
{
    m_hostScope = _hostScope;
    m_hostScopeHasBeenSet = true;
}

bool ShellPolicyList::HostScopeHasBeenSet() const
{
    return m_hostScopeHasBeenSet;
}

