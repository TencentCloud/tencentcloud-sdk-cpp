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

#include <tencentcloud/tdmq/v20200217/model/SetRocketMQPublicAccessPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SetRocketMQPublicAccessPointRequest::SetRocketMQPublicAccessPointRequest() :
    m_instanceIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_billingFlowHasBeenSet(false)
{
}

string SetRocketMQPublicAccessPointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_billingFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingFlow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetRocketMQPublicAccessPointRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetRocketMQPublicAccessPointRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool SetRocketMQPublicAccessPointRequest::GetEnabled() const
{
    return m_enabled;
}

void SetRocketMQPublicAccessPointRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t SetRocketMQPublicAccessPointRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void SetRocketMQPublicAccessPointRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t SetRocketMQPublicAccessPointRequest::GetPayMode() const
{
    return m_payMode;
}

void SetRocketMQPublicAccessPointRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<PublicAccessRule> SetRocketMQPublicAccessPointRequest::GetRules() const
{
    return m_rules;
}

void SetRocketMQPublicAccessPointRequest::SetRules(const vector<PublicAccessRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

bool SetRocketMQPublicAccessPointRequest::GetBillingFlow() const
{
    return m_billingFlow;
}

void SetRocketMQPublicAccessPointRequest::SetBillingFlow(const bool& _billingFlow)
{
    m_billingFlow = _billingFlow;
    m_billingFlowHasBeenSet = true;
}

bool SetRocketMQPublicAccessPointRequest::BillingFlowHasBeenSet() const
{
    return m_billingFlowHasBeenSet;
}


