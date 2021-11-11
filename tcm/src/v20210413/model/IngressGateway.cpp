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

#include <tencentcloud/tcm/v20210413/model/IngressGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

IngressGateway::IngressGateway() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_workloadHasBeenSet(false),
    m_loadBalancerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false)
{
}

CoreInternalOutcome IngressGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Workload") && !value["Workload"].IsNull())
    {
        if (!value["Workload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.Workload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workload.Deserialize(value["Workload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancer") && !value["LoadBalancer"].IsNull())
    {
        if (!value["LoadBalancer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.LoadBalancer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancer.Deserialize(value["LoadBalancer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressGateway.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workload.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

}


string IngressGateway::GetName() const
{
    return m_name;
}

void IngressGateway::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IngressGateway::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IngressGateway::GetNamespace() const
{
    return m_namespace;
}

void IngressGateway::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool IngressGateway::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string IngressGateway::GetClusterId() const
{
    return m_clusterId;
}

void IngressGateway::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IngressGateway::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

Service IngressGateway::GetService() const
{
    return m_service;
}

void IngressGateway::SetService(const Service& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool IngressGateway::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

WorkloadConfig IngressGateway::GetWorkload() const
{
    return m_workload;
}

void IngressGateway::SetWorkload(const WorkloadConfig& _workload)
{
    m_workload = _workload;
    m_workloadHasBeenSet = true;
}

bool IngressGateway::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}

LoadBalancer IngressGateway::GetLoadBalancer() const
{
    return m_loadBalancer;
}

void IngressGateway::SetLoadBalancer(const LoadBalancer& _loadBalancer)
{
    m_loadBalancer = _loadBalancer;
    m_loadBalancerHasBeenSet = true;
}

bool IngressGateway::LoadBalancerHasBeenSet() const
{
    return m_loadBalancerHasBeenSet;
}

IngressGatewayStatus IngressGateway::GetStatus() const
{
    return m_status;
}

void IngressGateway::SetStatus(const IngressGatewayStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IngressGateway::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IngressGateway::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void IngressGateway::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool IngressGateway::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

