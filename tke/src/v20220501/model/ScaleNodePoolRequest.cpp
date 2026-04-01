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

#include <tencentcloud/tke/v20220501/model/ScaleNodePoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

ScaleNodePoolRequest::ScaleNodePoolRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

string ScaleNodePoolRequest::ToJsonString() const
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

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicas, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleNodePoolRequest::GetClusterId() const
{
    return m_clusterId;
}

void ScaleNodePoolRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ScaleNodePoolRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ScaleNodePoolRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void ScaleNodePoolRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool ScaleNodePoolRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

int64_t ScaleNodePoolRequest::GetReplicas() const
{
    return m_replicas;
}

void ScaleNodePoolRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ScaleNodePoolRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}


