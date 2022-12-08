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

#include <tencentcloud/tke/v20180525/model/RollbackClusterReleaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RollbackClusterReleaseRequest::RollbackClusterReleaseRequest() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string RollbackClusterReleaseRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_revision, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackClusterReleaseRequest::GetClusterId() const
{
    return m_clusterId;
}

void RollbackClusterReleaseRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RollbackClusterReleaseRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RollbackClusterReleaseRequest::GetName() const
{
    return m_name;
}

void RollbackClusterReleaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RollbackClusterReleaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RollbackClusterReleaseRequest::GetNamespace() const
{
    return m_namespace;
}

void RollbackClusterReleaseRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RollbackClusterReleaseRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RollbackClusterReleaseRequest::GetRevision() const
{
    return m_revision;
}

void RollbackClusterReleaseRequest::SetRevision(const int64_t& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool RollbackClusterReleaseRequest::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string RollbackClusterReleaseRequest::GetClusterType() const
{
    return m_clusterType;
}

void RollbackClusterReleaseRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool RollbackClusterReleaseRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


