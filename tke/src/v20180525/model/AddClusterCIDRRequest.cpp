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

#include <tencentcloud/tke/v20180525/model/AddClusterCIDRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AddClusterCIDRRequest::AddClusterCIDRRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterCIDRsHasBeenSet(false),
    m_ignoreClusterCIDRConflictHasBeenSet(false)
{
}

string AddClusterCIDRRequest::ToJsonString() const
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

    if (m_clusterCIDRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDRs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterCIDRs.begin(); itr != m_clusterCIDRs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ignoreClusterCIDRConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreClusterCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreClusterCIDRConflict, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddClusterCIDRRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddClusterCIDRRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddClusterCIDRRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddClusterCIDRRequest::GetClusterCIDRs() const
{
    return m_clusterCIDRs;
}

void AddClusterCIDRRequest::SetClusterCIDRs(const vector<string>& _clusterCIDRs)
{
    m_clusterCIDRs = _clusterCIDRs;
    m_clusterCIDRsHasBeenSet = true;
}

bool AddClusterCIDRRequest::ClusterCIDRsHasBeenSet() const
{
    return m_clusterCIDRsHasBeenSet;
}

bool AddClusterCIDRRequest::GetIgnoreClusterCIDRConflict() const
{
    return m_ignoreClusterCIDRConflict;
}

void AddClusterCIDRRequest::SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict)
{
    m_ignoreClusterCIDRConflict = _ignoreClusterCIDRConflict;
    m_ignoreClusterCIDRConflictHasBeenSet = true;
}

bool AddClusterCIDRRequest::IgnoreClusterCIDRConflictHasBeenSet() const
{
    return m_ignoreClusterCIDRConflictHasBeenSet;
}


