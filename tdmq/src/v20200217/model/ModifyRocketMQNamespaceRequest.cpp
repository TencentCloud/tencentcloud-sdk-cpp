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

#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQNamespaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRocketMQNamespaceRequest::ModifyRocketMQNamespaceRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_retentionTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_publicAccessEnabledHasBeenSet(false)
{
}

string ModifyRocketMQNamespaceRequest::ToJsonString() const
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

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttl, allocator);
    }

    if (m_retentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAccessEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicAccessEnabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRocketMQNamespaceRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyRocketMQNamespaceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyRocketMQNamespaceRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void ModifyRocketMQNamespaceRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

uint64_t ModifyRocketMQNamespaceRequest::GetTtl() const
{
    return m_ttl;
}

void ModifyRocketMQNamespaceRequest::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

uint64_t ModifyRocketMQNamespaceRequest::GetRetentionTime() const
{
    return m_retentionTime;
}

void ModifyRocketMQNamespaceRequest::SetRetentionTime(const uint64_t& _retentionTime)
{
    m_retentionTime = _retentionTime;
    m_retentionTimeHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::RetentionTimeHasBeenSet() const
{
    return m_retentionTimeHasBeenSet;
}

string ModifyRocketMQNamespaceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRocketMQNamespaceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool ModifyRocketMQNamespaceRequest::GetPublicAccessEnabled() const
{
    return m_publicAccessEnabled;
}

void ModifyRocketMQNamespaceRequest::SetPublicAccessEnabled(const bool& _publicAccessEnabled)
{
    m_publicAccessEnabled = _publicAccessEnabled;
    m_publicAccessEnabledHasBeenSet = true;
}

bool ModifyRocketMQNamespaceRequest::PublicAccessEnabledHasBeenSet() const
{
    return m_publicAccessEnabledHasBeenSet;
}


