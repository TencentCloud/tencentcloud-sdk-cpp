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

#include <tencentcloud/tke/v20180525/model/ModifyClusterRuntimeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterRuntimeConfigRequest::ModifyClusterRuntimeConfigRequest() :
    m_clusterIdHasBeenSet(false),
    m_dstK8SVersionHasBeenSet(false),
    m_clusterRuntimeConfigHasBeenSet(false),
    m_nodePoolRuntimeConfigHasBeenSet(false)
{
}

string ModifyClusterRuntimeConfigRequest::ToJsonString() const
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

    if (m_dstK8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstK8SVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstK8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRuntimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterRuntimeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nodePoolRuntimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolRuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodePoolRuntimeConfig.begin(); itr != m_nodePoolRuntimeConfig.end(); ++itr, ++i)
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


string ModifyClusterRuntimeConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterRuntimeConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterRuntimeConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterRuntimeConfigRequest::GetDstK8SVersion() const
{
    return m_dstK8SVersion;
}

void ModifyClusterRuntimeConfigRequest::SetDstK8SVersion(const string& _dstK8SVersion)
{
    m_dstK8SVersion = _dstK8SVersion;
    m_dstK8SVersionHasBeenSet = true;
}

bool ModifyClusterRuntimeConfigRequest::DstK8SVersionHasBeenSet() const
{
    return m_dstK8SVersionHasBeenSet;
}

RuntimeConfig ModifyClusterRuntimeConfigRequest::GetClusterRuntimeConfig() const
{
    return m_clusterRuntimeConfig;
}

void ModifyClusterRuntimeConfigRequest::SetClusterRuntimeConfig(const RuntimeConfig& _clusterRuntimeConfig)
{
    m_clusterRuntimeConfig = _clusterRuntimeConfig;
    m_clusterRuntimeConfigHasBeenSet = true;
}

bool ModifyClusterRuntimeConfigRequest::ClusterRuntimeConfigHasBeenSet() const
{
    return m_clusterRuntimeConfigHasBeenSet;
}

vector<NodePoolRuntime> ModifyClusterRuntimeConfigRequest::GetNodePoolRuntimeConfig() const
{
    return m_nodePoolRuntimeConfig;
}

void ModifyClusterRuntimeConfigRequest::SetNodePoolRuntimeConfig(const vector<NodePoolRuntime>& _nodePoolRuntimeConfig)
{
    m_nodePoolRuntimeConfig = _nodePoolRuntimeConfig;
    m_nodePoolRuntimeConfigHasBeenSet = true;
}

bool ModifyClusterRuntimeConfigRequest::NodePoolRuntimeConfigHasBeenSet() const
{
    return m_nodePoolRuntimeConfigHasBeenSet;
}


