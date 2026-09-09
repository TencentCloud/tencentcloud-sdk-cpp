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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomClusterAttributesRequest::ModifyDBCustomClusterAttributesRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false)
{
}

string ModifyDBCustomClusterAttributesRequest::ToJsonString() const
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

    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomClusterAttributesRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyDBCustomClusterAttributesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyDBCustomClusterAttributesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyDBCustomClusterAttributesRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void ModifyDBCustomClusterAttributesRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool ModifyDBCustomClusterAttributesRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

bool ModifyDBCustomClusterAttributesRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void ModifyDBCustomClusterAttributesRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool ModifyDBCustomClusterAttributesRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

string ModifyDBCustomClusterAttributesRequest::GetClusterName() const
{
    return m_clusterName;
}

void ModifyDBCustomClusterAttributesRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ModifyDBCustomClusterAttributesRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyDBCustomClusterAttributesRequest::GetClusterDescription() const
{
    return m_clusterDescription;
}

void ModifyDBCustomClusterAttributesRequest::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool ModifyDBCustomClusterAttributesRequest::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}


