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

#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateClusterVirtualNodeRequest::CreateClusterVirtualNodeRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_virtualNodesHasBeenSet(false)
{
}

string CreateClusterVirtualNodeRequest::ToJsonString() const
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

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virtualNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_virtualNodes.begin(); itr != m_virtualNodes.end(); ++itr, ++i)
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


string CreateClusterVirtualNodeRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterVirtualNodeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterVirtualNodeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterVirtualNodeRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void CreateClusterVirtualNodeRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool CreateClusterVirtualNodeRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string CreateClusterVirtualNodeRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClusterVirtualNodeRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClusterVirtualNodeRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> CreateClusterVirtualNodeRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateClusterVirtualNodeRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateClusterVirtualNodeRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<VirtualNodeSpec> CreateClusterVirtualNodeRequest::GetVirtualNodes() const
{
    return m_virtualNodes;
}

void CreateClusterVirtualNodeRequest::SetVirtualNodes(const vector<VirtualNodeSpec>& _virtualNodes)
{
    m_virtualNodes = _virtualNodes;
    m_virtualNodesHasBeenSet = true;
}

bool CreateClusterVirtualNodeRequest::VirtualNodesHasBeenSet() const
{
    return m_virtualNodesHasBeenSet;
}


