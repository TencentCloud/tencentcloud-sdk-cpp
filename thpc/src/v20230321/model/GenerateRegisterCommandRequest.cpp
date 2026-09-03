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

#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

GenerateRegisterCommandRequest::GenerateRegisterCommandRequest() :
    m_clusterIdHasBeenSet(false),
    m_proxyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_expireSecondsHasBeenSet(false)
{
}

string GenerateRegisterCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proxy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxy, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateRegisterCommandRequest::GetClusterId() const
{
    return m_clusterId;
}

void GenerateRegisterCommandRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool GenerateRegisterCommandRequest::GetProxy() const
{
    return m_proxy;
}

void GenerateRegisterCommandRequest::SetProxy(const bool& _proxy)
{
    m_proxy = _proxy;
    m_proxyHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::ProxyHasBeenSet() const
{
    return m_proxyHasBeenSet;
}

string GenerateRegisterCommandRequest::GetVpcId() const
{
    return m_vpcId;
}

void GenerateRegisterCommandRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string GenerateRegisterCommandRequest::GetSubnetId() const
{
    return m_subnetId;
}

void GenerateRegisterCommandRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string GenerateRegisterCommandRequest::GetQueueName() const
{
    return m_queueName;
}

void GenerateRegisterCommandRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

int64_t GenerateRegisterCommandRequest::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void GenerateRegisterCommandRequest::SetExpireSeconds(const int64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool GenerateRegisterCommandRequest::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}


