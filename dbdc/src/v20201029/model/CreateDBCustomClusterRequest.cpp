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

#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

CreateDBCustomClusterRequest::CreateDBCustomClusterRequest() :
    m_containerNetworkHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_apiServerNetworkHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateDBCustomClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_containerNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerNetwork.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiServerNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiServerNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiServerNetwork.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ContainerNetwork CreateDBCustomClusterRequest::GetContainerNetwork() const
{
    return m_containerNetwork;
}

void CreateDBCustomClusterRequest::SetContainerNetwork(const ContainerNetwork& _containerNetwork)
{
    m_containerNetwork = _containerNetwork;
    m_containerNetworkHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::ContainerNetworkHasBeenSet() const
{
    return m_containerNetworkHasBeenSet;
}

string CreateDBCustomClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateDBCustomClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

ApiServerNetwork CreateDBCustomClusterRequest::GetApiServerNetwork() const
{
    return m_apiServerNetwork;
}

void CreateDBCustomClusterRequest::SetApiServerNetwork(const ApiServerNetwork& _apiServerNetwork)
{
    m_apiServerNetwork = _apiServerNetwork;
    m_apiServerNetworkHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::ApiServerNetworkHasBeenSet() const
{
    return m_apiServerNetworkHasBeenSet;
}

string CreateDBCustomClusterRequest::GetClusterDescription() const
{
    return m_clusterDescription;
}

void CreateDBCustomClusterRequest::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

vector<Tag> CreateDBCustomClusterRequest::GetTags() const
{
    return m_tags;
}

void CreateDBCustomClusterRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateDBCustomClusterRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDBCustomClusterRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDBCustomClusterRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


