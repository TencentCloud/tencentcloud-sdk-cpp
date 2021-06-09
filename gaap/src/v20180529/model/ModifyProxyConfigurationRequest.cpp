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

#include <tencentcloud/gaap/v20180529/model/ModifyProxyConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifyProxyConfigurationRequest::ModifyProxyConfigurationRequest() :
    m_instanceIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_billingTypeHasBeenSet(false)
{
}

string ModifyProxyConfigurationRequest::ToJsonString() const
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

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProxyConfigurationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyProxyConfigurationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyProxyConfigurationRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyProxyConfigurationRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t ModifyProxyConfigurationRequest::GetConcurrent() const
{
    return m_concurrent;
}

void ModifyProxyConfigurationRequest::SetConcurrent(const uint64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string ModifyProxyConfigurationRequest::GetClientToken() const
{
    return m_clientToken;
}

void ModifyProxyConfigurationRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string ModifyProxyConfigurationRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyProxyConfigurationRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

int64_t ModifyProxyConfigurationRequest::GetBillingType() const
{
    return m_billingType;
}

void ModifyProxyConfigurationRequest::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool ModifyProxyConfigurationRequest::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}


