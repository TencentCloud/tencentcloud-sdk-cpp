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

#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

CreateClusterEndpointRequest::CreateClusterEndpointRequest() :
    m_clusterIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_isExtranetHasBeenSet(false)
{
}

string CreateClusterEndpointRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_isExtranetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsExtranet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExtranet, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterEndpointRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterEndpointRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterEndpointRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterEndpointRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClusterEndpointRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClusterEndpointRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool CreateClusterEndpointRequest::GetIsExtranet() const
{
    return m_isExtranet;
}

void CreateClusterEndpointRequest::SetIsExtranet(const bool& _isExtranet)
{
    m_isExtranet = _isExtranet;
    m_isExtranetHasBeenSet = true;
}

bool CreateClusterEndpointRequest::IsExtranetHasBeenSet() const
{
    return m_isExtranetHasBeenSet;
}


