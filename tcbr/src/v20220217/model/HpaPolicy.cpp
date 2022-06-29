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

#include <tencentcloud/tcbr/v20220217/model/HpaPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

HpaPolicy::HpaPolicy() :
    m_policyTypeHasBeenSet(false),
    m_policyThresholdHasBeenSet(false)
{
}

CoreInternalOutcome HpaPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpaPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyThreshold") && !value["PolicyThreshold"].IsNull())
    {
        if (!value["PolicyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HpaPolicy.PolicyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyThreshold = value["PolicyThreshold"].GetUint64();
        m_policyThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HpaPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyThreshold, allocator);
    }

}


string HpaPolicy::GetPolicyType() const
{
    return m_policyType;
}

void HpaPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool HpaPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t HpaPolicy::GetPolicyThreshold() const
{
    return m_policyThreshold;
}

void HpaPolicy::SetPolicyThreshold(const uint64_t& _policyThreshold)
{
    m_policyThreshold = _policyThreshold;
    m_policyThresholdHasBeenSet = true;
}

bool HpaPolicy::PolicyThresholdHasBeenSet() const
{
    return m_policyThresholdHasBeenSet;
}

