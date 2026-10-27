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

#include <tencentcloud/cvd/v20201104/model/PolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

PolicyInfo::PolicyInfo() :
    m_policyTypeHasBeenSet(false),
    m_policyValueHasBeenSet(false)
{
}

CoreInternalOutcome PolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyInfo.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyValue") && !value["PolicyValue"].IsNull())
    {
        if (!value["PolicyValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyInfo.PolicyValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyValue = value["PolicyValue"].GetInt64();
        m_policyValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyValue, allocator);
    }

}


int64_t PolicyInfo::GetPolicyType() const
{
    return m_policyType;
}

void PolicyInfo::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool PolicyInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t PolicyInfo::GetPolicyValue() const
{
    return m_policyValue;
}

void PolicyInfo::SetPolicyValue(const int64_t& _policyValue)
{
    m_policyValue = _policyValue;
    m_policyValueHasBeenSet = true;
}

bool PolicyInfo::PolicyValueHasBeenSet() const
{
    return m_policyValueHasBeenSet;
}

