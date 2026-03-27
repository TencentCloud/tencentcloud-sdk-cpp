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

#include <tencentcloud/trocket/v20230308/model/RetryPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

RetryPolicy::RetryPolicy() :
    m_policyTypeHasBeenSet(false),
    m_retryIntervalHasBeenSet(false)
{
}

CoreInternalOutcome RetryPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetryPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("RetryInterval") && !value["RetryInterval"].IsNull())
    {
        if (!value["RetryInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryPolicy.RetryInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryInterval = value["RetryInterval"].GetInt64();
        m_retryIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetryPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryInterval, allocator);
    }

}


string RetryPolicy::GetPolicyType() const
{
    return m_policyType;
}

void RetryPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool RetryPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t RetryPolicy::GetRetryInterval() const
{
    return m_retryInterval;
}

void RetryPolicy::SetRetryInterval(const int64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool RetryPolicy::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

