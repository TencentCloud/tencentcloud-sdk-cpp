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

#include <tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateApplicationTriggerPersonalRequest::CreateApplicationTriggerPersonalRequest() :
    m_repoNameHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_invokeMethodHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_clusterRegionHasBeenSet(false),
    m_invokeExprHasBeenSet(false)
{
}

string CreateApplicationTriggerPersonalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokeMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterRegion, allocator);
    }

    if (m_invokeExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeExpr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokeExpr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationTriggerPersonalRequest::GetRepoName() const
{
    return m_repoName;
}

void CreateApplicationTriggerPersonalRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetTriggerName() const
{
    return m_triggerName;
}

void CreateApplicationTriggerPersonalRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetInvokeMethod() const
{
    return m_invokeMethod;
}

void CreateApplicationTriggerPersonalRequest::SetInvokeMethod(const string& _invokeMethod)
{
    m_invokeMethod = _invokeMethod;
    m_invokeMethodHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::InvokeMethodHasBeenSet() const
{
    return m_invokeMethodHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateApplicationTriggerPersonalRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateApplicationTriggerPersonalRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetWorkloadType() const
{
    return m_workloadType;
}

void CreateApplicationTriggerPersonalRequest::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetWorkloadName() const
{
    return m_workloadName;
}

void CreateApplicationTriggerPersonalRequest::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetContainerName() const
{
    return m_containerName;
}

void CreateApplicationTriggerPersonalRequest::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

int64_t CreateApplicationTriggerPersonalRequest::GetClusterRegion() const
{
    return m_clusterRegion;
}

void CreateApplicationTriggerPersonalRequest::SetClusterRegion(const int64_t& _clusterRegion)
{
    m_clusterRegion = _clusterRegion;
    m_clusterRegionHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::ClusterRegionHasBeenSet() const
{
    return m_clusterRegionHasBeenSet;
}

string CreateApplicationTriggerPersonalRequest::GetInvokeExpr() const
{
    return m_invokeExpr;
}

void CreateApplicationTriggerPersonalRequest::SetInvokeExpr(const string& _invokeExpr)
{
    m_invokeExpr = _invokeExpr;
    m_invokeExprHasBeenSet = true;
}

bool CreateApplicationTriggerPersonalRequest::InvokeExprHasBeenSet() const
{
    return m_invokeExprHasBeenSet;
}


