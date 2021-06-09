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

#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SetNodePoolNodeProtectionRequest::SetNodePoolNodeProtectionRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_protectedFromScaleInHasBeenSet(false)
{
}

string SetNodePoolNodeProtectionRequest::ToJsonString() const
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

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectedFromScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedFromScaleIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectedFromScaleIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetNodePoolNodeProtectionRequest::GetClusterId() const
{
    return m_clusterId;
}

void SetNodePoolNodeProtectionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SetNodePoolNodeProtectionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SetNodePoolNodeProtectionRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void SetNodePoolNodeProtectionRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool SetNodePoolNodeProtectionRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

vector<string> SetNodePoolNodeProtectionRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void SetNodePoolNodeProtectionRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool SetNodePoolNodeProtectionRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool SetNodePoolNodeProtectionRequest::GetProtectedFromScaleIn() const
{
    return m_protectedFromScaleIn;
}

void SetNodePoolNodeProtectionRequest::SetProtectedFromScaleIn(const bool& _protectedFromScaleIn)
{
    m_protectedFromScaleIn = _protectedFromScaleIn;
    m_protectedFromScaleInHasBeenSet = true;
}

bool SetNodePoolNodeProtectionRequest::ProtectedFromScaleInHasBeenSet() const
{
    return m_protectedFromScaleInHasBeenSet;
}


