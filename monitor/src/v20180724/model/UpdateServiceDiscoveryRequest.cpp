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

#include <tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdateServiceDiscoveryRequest::UpdateServiceDiscoveryRequest() :
    m_instanceIdHasBeenSet(false),
    m_kubeClusterIdHasBeenSet(false),
    m_kubeTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_yamlHasBeenSet(false)
{
}

string UpdateServiceDiscoveryRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServiceDiscoveryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateServiceDiscoveryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateServiceDiscoveryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateServiceDiscoveryRequest::GetKubeClusterId() const
{
    return m_kubeClusterId;
}

void UpdateServiceDiscoveryRequest::SetKubeClusterId(const string& _kubeClusterId)
{
    m_kubeClusterId = _kubeClusterId;
    m_kubeClusterIdHasBeenSet = true;
}

bool UpdateServiceDiscoveryRequest::KubeClusterIdHasBeenSet() const
{
    return m_kubeClusterIdHasBeenSet;
}

int64_t UpdateServiceDiscoveryRequest::GetKubeType() const
{
    return m_kubeType;
}

void UpdateServiceDiscoveryRequest::SetKubeType(const int64_t& _kubeType)
{
    m_kubeType = _kubeType;
    m_kubeTypeHasBeenSet = true;
}

bool UpdateServiceDiscoveryRequest::KubeTypeHasBeenSet() const
{
    return m_kubeTypeHasBeenSet;
}

int64_t UpdateServiceDiscoveryRequest::GetType() const
{
    return m_type;
}

void UpdateServiceDiscoveryRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateServiceDiscoveryRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpdateServiceDiscoveryRequest::GetYaml() const
{
    return m_yaml;
}

void UpdateServiceDiscoveryRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool UpdateServiceDiscoveryRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}


