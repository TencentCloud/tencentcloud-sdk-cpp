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

#include <tencentcloud/omics/v20221128/model/RebootHPCNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RebootHPCNodesRequest::RebootHPCNodesRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodeIdsHasBeenSet(false),
    m_stopTypeHasBeenSet(false)
{
}

string RebootHPCNodesRequest::ToJsonString() const
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

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stopType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RebootHPCNodesRequest::GetClusterId() const
{
    return m_clusterId;
}

void RebootHPCNodesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RebootHPCNodesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> RebootHPCNodesRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void RebootHPCNodesRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool RebootHPCNodesRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}

string RebootHPCNodesRequest::GetStopType() const
{
    return m_stopType;
}

void RebootHPCNodesRequest::SetStopType(const string& _stopType)
{
    m_stopType = _stopType;
    m_stopTypeHasBeenSet = true;
}

bool RebootHPCNodesRequest::StopTypeHasBeenSet() const
{
    return m_stopTypeHasBeenSet;
}


