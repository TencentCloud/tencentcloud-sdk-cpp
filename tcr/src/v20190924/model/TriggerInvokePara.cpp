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

#include <tencentcloud/tcr/v20190924/model/TriggerInvokePara.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TriggerInvokePara::TriggerInvokePara() :
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_clusterRegionHasBeenSet(false)
{
}

CoreInternalOutcome TriggerInvokePara::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterRegion") && !value["ClusterRegion"].IsNull())
    {
        if (!value["ClusterRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokePara.ClusterRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRegion = value["ClusterRegion"].GetInt64();
        m_clusterRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerInvokePara::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterRegion, allocator);
    }

}


string TriggerInvokePara::GetAppId() const
{
    return m_appId;
}

void TriggerInvokePara::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TriggerInvokePara::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TriggerInvokePara::GetClusterId() const
{
    return m_clusterId;
}

void TriggerInvokePara::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TriggerInvokePara::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TriggerInvokePara::GetNamespace() const
{
    return m_namespace;
}

void TriggerInvokePara::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TriggerInvokePara::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string TriggerInvokePara::GetServiceName() const
{
    return m_serviceName;
}

void TriggerInvokePara::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool TriggerInvokePara::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string TriggerInvokePara::GetContainerName() const
{
    return m_containerName;
}

void TriggerInvokePara::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool TriggerInvokePara::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

int64_t TriggerInvokePara::GetClusterRegion() const
{
    return m_clusterRegion;
}

void TriggerInvokePara::SetClusterRegion(const int64_t& _clusterRegion)
{
    m_clusterRegion = _clusterRegion;
    m_clusterRegionHasBeenSet = true;
}

bool TriggerInvokePara::ClusterRegionHasBeenSet() const
{
    return m_clusterRegionHasBeenSet;
}

