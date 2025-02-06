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

#include <tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ModifyInstanceEndpointRequest::ModifyInstanceEndpointRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_ipRulesHasBeenSet(false),
    m_billingFlowHasBeenSet(false)
{
}

string ModifyInstanceEndpointRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_ipRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipRules.begin(); itr != m_ipRules.end(); ++itr, ++i)
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


string ModifyInstanceEndpointRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceEndpointRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceEndpointRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceEndpointRequest::GetType() const
{
    return m_type;
}

void ModifyInstanceEndpointRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyInstanceEndpointRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyInstanceEndpointRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyInstanceEndpointRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyInstanceEndpointRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

vector<IpRule> ModifyInstanceEndpointRequest::GetIpRules() const
{
    return m_ipRules;
}

void ModifyInstanceEndpointRequest::SetIpRules(const vector<IpRule>& _ipRules)
{
    m_ipRules = _ipRules;
    m_ipRulesHasBeenSet = true;
}

bool ModifyInstanceEndpointRequest::IpRulesHasBeenSet() const
{
    return m_ipRulesHasBeenSet;
}

bool ModifyInstanceEndpointRequest::GetBillingFlow() const
{
    return m_billingFlow;
}

void ModifyInstanceEndpointRequest::SetBillingFlow(const bool& _billingFlow)
{
    m_billingFlow = _billingFlow;
    m_billingFlowHasBeenSet = true;
}

bool ModifyInstanceEndpointRequest::BillingFlowHasBeenSet() const
{
    return m_billingFlowHasBeenSet;
}


