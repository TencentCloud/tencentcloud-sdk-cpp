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

#include <tencentcloud/tke/v20180525/model/EnableControlPlaneLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EnableControlPlaneLogsRequest::EnableControlPlaneLogsRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_componentsHasBeenSet(false)
{
}

string EnableControlPlaneLogsRequest::ToJsonString() const
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableControlPlaneLogsRequest::GetClusterId() const
{
    return m_clusterId;
}

void EnableControlPlaneLogsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EnableControlPlaneLogsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EnableControlPlaneLogsRequest::GetClusterType() const
{
    return m_clusterType;
}

void EnableControlPlaneLogsRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool EnableControlPlaneLogsRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<ComponentLogConfig> EnableControlPlaneLogsRequest::GetComponents() const
{
    return m_components;
}

void EnableControlPlaneLogsRequest::SetComponents(const vector<ComponentLogConfig>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool EnableControlPlaneLogsRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}


