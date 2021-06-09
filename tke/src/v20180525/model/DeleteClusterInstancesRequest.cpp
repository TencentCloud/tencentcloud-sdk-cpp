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

#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeleteClusterInstancesRequest::DeleteClusterInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceDeleteModeHasBeenSet(false),
    m_forceDeleteHasBeenSet(false)
{
}

string DeleteClusterInstancesRequest::ToJsonString() const
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

    if (m_instanceDeleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceDeleteMode.c_str(), allocator).Move(), allocator);
    }

    if (m_forceDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceDelete, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteClusterInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteClusterInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteClusterInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DeleteClusterInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DeleteClusterInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DeleteClusterInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DeleteClusterInstancesRequest::GetInstanceDeleteMode() const
{
    return m_instanceDeleteMode;
}

void DeleteClusterInstancesRequest::SetInstanceDeleteMode(const string& _instanceDeleteMode)
{
    m_instanceDeleteMode = _instanceDeleteMode;
    m_instanceDeleteModeHasBeenSet = true;
}

bool DeleteClusterInstancesRequest::InstanceDeleteModeHasBeenSet() const
{
    return m_instanceDeleteModeHasBeenSet;
}

bool DeleteClusterInstancesRequest::GetForceDelete() const
{
    return m_forceDelete;
}

void DeleteClusterInstancesRequest::SetForceDelete(const bool& _forceDelete)
{
    m_forceDelete = _forceDelete;
    m_forceDeleteHasBeenSet = true;
}

bool DeleteClusterInstancesRequest::ForceDeleteHasBeenSet() const
{
    return m_forceDeleteHasBeenSet;
}


