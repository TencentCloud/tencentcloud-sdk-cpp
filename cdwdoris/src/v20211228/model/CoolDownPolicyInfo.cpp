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

#include <tencentcloud/cdwdoris/v20211228/model/CoolDownPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CoolDownPolicyInfo::CoolDownPolicyInfo() :
    m_policyNameHasBeenSet(false),
    m_cooldownDatetimeHasBeenSet(false),
    m_cooldownTtlHasBeenSet(false)
{
}

CoreInternalOutcome CoolDownPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownPolicyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("CooldownDatetime") && !value["CooldownDatetime"].IsNull())
    {
        if (!value["CooldownDatetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownPolicyInfo.CooldownDatetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cooldownDatetime = string(value["CooldownDatetime"].GetString());
        m_cooldownDatetimeHasBeenSet = true;
    }

    if (value.HasMember("CooldownTtl") && !value["CooldownTtl"].IsNull())
    {
        if (!value["CooldownTtl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownPolicyInfo.CooldownTtl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cooldownTtl = string(value["CooldownTtl"].GetString());
        m_cooldownTtlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoolDownPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_cooldownDatetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CooldownDatetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cooldownDatetime.c_str(), allocator).Move(), allocator);
    }

    if (m_cooldownTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CooldownTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cooldownTtl.c_str(), allocator).Move(), allocator);
    }

}


string CoolDownPolicyInfo::GetPolicyName() const
{
    return m_policyName;
}

void CoolDownPolicyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CoolDownPolicyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CoolDownPolicyInfo::GetCooldownDatetime() const
{
    return m_cooldownDatetime;
}

void CoolDownPolicyInfo::SetCooldownDatetime(const string& _cooldownDatetime)
{
    m_cooldownDatetime = _cooldownDatetime;
    m_cooldownDatetimeHasBeenSet = true;
}

bool CoolDownPolicyInfo::CooldownDatetimeHasBeenSet() const
{
    return m_cooldownDatetimeHasBeenSet;
}

string CoolDownPolicyInfo::GetCooldownTtl() const
{
    return m_cooldownTtl;
}

void CoolDownPolicyInfo::SetCooldownTtl(const string& _cooldownTtl)
{
    m_cooldownTtl = _cooldownTtl;
    m_cooldownTtlHasBeenSet = true;
}

bool CoolDownPolicyInfo::CooldownTtlHasBeenSet() const
{
    return m_cooldownTtlHasBeenSet;
}

