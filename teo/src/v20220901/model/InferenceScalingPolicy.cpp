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

#include <tencentcloud/teo/v20220901/model/InferenceScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceScalingPolicy::InferenceScalingPolicy() :
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_scheduledScalingPolicyHasBeenSet(false)
{
}

CoreInternalOutcome InferenceScalingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScalingPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScalingPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduledScalingPolicy") && !value["ScheduledScalingPolicy"].IsNull())
    {
        if (!value["ScheduledScalingPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScalingPolicy.ScheduledScalingPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduledScalingPolicy.Deserialize(value["ScheduledScalingPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduledScalingPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceScalingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledScalingPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledScalingPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledScalingPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InferenceScalingPolicy::GetPolicyName() const
{
    return m_policyName;
}

void InferenceScalingPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool InferenceScalingPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string InferenceScalingPolicy::GetPolicyType() const
{
    return m_policyType;
}

void InferenceScalingPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool InferenceScalingPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

InferenceScheduledScalingPolicy InferenceScalingPolicy::GetScheduledScalingPolicy() const
{
    return m_scheduledScalingPolicy;
}

void InferenceScalingPolicy::SetScheduledScalingPolicy(const InferenceScheduledScalingPolicy& _scheduledScalingPolicy)
{
    m_scheduledScalingPolicy = _scheduledScalingPolicy;
    m_scheduledScalingPolicyHasBeenSet = true;
}

bool InferenceScalingPolicy::ScheduledScalingPolicyHasBeenSet() const
{
    return m_scheduledScalingPolicyHasBeenSet;
}

