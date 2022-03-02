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

#include <tencentcloud/tdcpg/v20211118/model/RestartClusterInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

RestartClusterInstancesRequest::RestartClusterInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false)
{
}

string RestartClusterInstancesRequest::ToJsonString() const
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

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartClusterInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void RestartClusterInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RestartClusterInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> RestartClusterInstancesRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void RestartClusterInstancesRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool RestartClusterInstancesRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}


