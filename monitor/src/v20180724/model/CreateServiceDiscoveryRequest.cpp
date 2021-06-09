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

#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateServiceDiscoveryRequest::CreateServiceDiscoveryRequest() :
    m_instanceIdHasBeenSet(false),
    m_kubeClusterIdHasBeenSet(false),
    m_kubeTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_yamlHasBeenSet(false)
{
}

string CreateServiceDiscoveryRequest::ToJsonString() const
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


string CreateServiceDiscoveryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateServiceDiscoveryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateServiceDiscoveryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateServiceDiscoveryRequest::GetKubeClusterId() const
{
    return m_kubeClusterId;
}

void CreateServiceDiscoveryRequest::SetKubeClusterId(const string& _kubeClusterId)
{
    m_kubeClusterId = _kubeClusterId;
    m_kubeClusterIdHasBeenSet = true;
}

bool CreateServiceDiscoveryRequest::KubeClusterIdHasBeenSet() const
{
    return m_kubeClusterIdHasBeenSet;
}

int64_t CreateServiceDiscoveryRequest::GetKubeType() const
{
    return m_kubeType;
}

void CreateServiceDiscoveryRequest::SetKubeType(const int64_t& _kubeType)
{
    m_kubeType = _kubeType;
    m_kubeTypeHasBeenSet = true;
}

bool CreateServiceDiscoveryRequest::KubeTypeHasBeenSet() const
{
    return m_kubeTypeHasBeenSet;
}

int64_t CreateServiceDiscoveryRequest::GetType() const
{
    return m_type;
}

void CreateServiceDiscoveryRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateServiceDiscoveryRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateServiceDiscoveryRequest::GetYaml() const
{
    return m_yaml;
}

void CreateServiceDiscoveryRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool CreateServiceDiscoveryRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}


