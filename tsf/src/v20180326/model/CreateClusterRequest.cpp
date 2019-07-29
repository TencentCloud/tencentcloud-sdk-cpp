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

#include <tencentcloud/tsf/v20180326/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCIDRHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_tsfRegionIdHasBeenSet(false),
    m_tsfZoneIdHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCIDRHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfRegionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TsfRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tsfRegionId.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TsfZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tsfZoneId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateClusterRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateClusterRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateClusterRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateClusterRequest::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void CreateClusterRequest::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool CreateClusterRequest::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

string CreateClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void CreateClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool CreateClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string CreateClusterRequest::GetTsfRegionId() const
{
    return m_tsfRegionId;
}

void CreateClusterRequest::SetTsfRegionId(const string& _tsfRegionId)
{
    m_tsfRegionId = _tsfRegionId;
    m_tsfRegionIdHasBeenSet = true;
}

bool CreateClusterRequest::TsfRegionIdHasBeenSet() const
{
    return m_tsfRegionIdHasBeenSet;
}

string CreateClusterRequest::GetTsfZoneId() const
{
    return m_tsfZoneId;
}

void CreateClusterRequest::SetTsfZoneId(const string& _tsfZoneId)
{
    m_tsfZoneId = _tsfZoneId;
    m_tsfZoneIdHasBeenSet = true;
}

bool CreateClusterRequest::TsfZoneIdHasBeenSet() const
{
    return m_tsfZoneIdHasBeenSet;
}


