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

#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeServiceDiscoveryRequest::DescribeServiceDiscoveryRequest() :
    m_instanceIdHasBeenSet(false),
    m_kubeClusterIdHasBeenSet(false),
    m_kubeTypeHasBeenSet(false)
{
}

string DescribeServiceDiscoveryRequest::ToJsonString() const
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

    if (m_kubeClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kubeClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kubeType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeServiceDiscoveryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeServiceDiscoveryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeServiceDiscoveryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeServiceDiscoveryRequest::GetKubeClusterId() const
{
    return m_kubeClusterId;
}

void DescribeServiceDiscoveryRequest::SetKubeClusterId(const string& _kubeClusterId)
{
    m_kubeClusterId = _kubeClusterId;
    m_kubeClusterIdHasBeenSet = true;
}

bool DescribeServiceDiscoveryRequest::KubeClusterIdHasBeenSet() const
{
    return m_kubeClusterIdHasBeenSet;
}

int64_t DescribeServiceDiscoveryRequest::GetKubeType() const
{
    return m_kubeType;
}

void DescribeServiceDiscoveryRequest::SetKubeType(const int64_t& _kubeType)
{
    m_kubeType = _kubeType;
    m_kubeTypeHasBeenSet = true;
}

bool DescribeServiceDiscoveryRequest::KubeTypeHasBeenSet() const
{
    return m_kubeTypeHasBeenSet;
}


