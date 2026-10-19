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

#include <tencentcloud/csip/v20221121/model/BaselinePolicyBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselinePolicyBrief::BaselinePolicyBrief() :
    m_iDHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_isSystemHasBeenSet(false)
{
}

CoreInternalOutcome BaselinePolicyBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyBrief.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyBrief.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("IsSystem") && !value["IsSystem"].IsNull())
    {
        if (!value["IsSystem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyBrief.IsSystem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSystem = value["IsSystem"].GetBool();
        m_isSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselinePolicyBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSystem, allocator);
    }

}


uint64_t BaselinePolicyBrief::GetID() const
{
    return m_iD;
}

void BaselinePolicyBrief::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselinePolicyBrief::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BaselinePolicyBrief::GetPolicyName() const
{
    return m_policyName;
}

void BaselinePolicyBrief::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool BaselinePolicyBrief::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

bool BaselinePolicyBrief::GetIsSystem() const
{
    return m_isSystem;
}

void BaselinePolicyBrief::SetIsSystem(const bool& _isSystem)
{
    m_isSystem = _isSystem;
    m_isSystemHasBeenSet = true;
}

bool BaselinePolicyBrief::IsSystemHasBeenSet() const
{
    return m_isSystemHasBeenSet;
}

