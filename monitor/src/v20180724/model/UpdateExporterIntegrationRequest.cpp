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

#include <tencentcloud/monitor/v20180724/model/UpdateExporterIntegrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdateExporterIntegrationRequest::UpdateExporterIntegrationRequest() :
    m_instanceIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_kubeTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

string UpdateExporterIntegrationRequest::ToJsonString() const
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

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kubeType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateExporterIntegrationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateExporterIntegrationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateExporterIntegrationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateExporterIntegrationRequest::GetKind() const
{
    return m_kind;
}

void UpdateExporterIntegrationRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool UpdateExporterIntegrationRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string UpdateExporterIntegrationRequest::GetContent() const
{
    return m_content;
}

void UpdateExporterIntegrationRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UpdateExporterIntegrationRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t UpdateExporterIntegrationRequest::GetKubeType() const
{
    return m_kubeType;
}

void UpdateExporterIntegrationRequest::SetKubeType(const int64_t& _kubeType)
{
    m_kubeType = _kubeType;
    m_kubeTypeHasBeenSet = true;
}

bool UpdateExporterIntegrationRequest::KubeTypeHasBeenSet() const
{
    return m_kubeTypeHasBeenSet;
}

string UpdateExporterIntegrationRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateExporterIntegrationRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateExporterIntegrationRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


