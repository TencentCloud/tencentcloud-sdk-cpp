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

#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodePoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeleteClusterVirtualNodePoolRequest::DeleteClusterVirtualNodePoolRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdsHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string DeleteClusterVirtualNodePoolRequest::ToJsonString() const
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

    if (m_nodePoolIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodePoolIds.begin(); itr != m_nodePoolIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteClusterVirtualNodePoolRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteClusterVirtualNodePoolRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteClusterVirtualNodePoolRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DeleteClusterVirtualNodePoolRequest::GetNodePoolIds() const
{
    return m_nodePoolIds;
}

void DeleteClusterVirtualNodePoolRequest::SetNodePoolIds(const vector<string>& _nodePoolIds)
{
    m_nodePoolIds = _nodePoolIds;
    m_nodePoolIdsHasBeenSet = true;
}

bool DeleteClusterVirtualNodePoolRequest::NodePoolIdsHasBeenSet() const
{
    return m_nodePoolIdsHasBeenSet;
}

bool DeleteClusterVirtualNodePoolRequest::GetForce() const
{
    return m_force;
}

void DeleteClusterVirtualNodePoolRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool DeleteClusterVirtualNodePoolRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


