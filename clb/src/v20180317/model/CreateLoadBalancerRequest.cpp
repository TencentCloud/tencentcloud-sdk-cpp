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

#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
    m_loadBalancerTypeHasBeenSet(false),
    m_forwardHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string CreateLoadBalancerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Forward";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forward, allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancerRequest::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void CreateLoadBalancerRequest::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

int64_t CreateLoadBalancerRequest::GetForward() const
{
    return m_forward;
}

void CreateLoadBalancerRequest::SetForward(const int64_t& _forward)
{
    m_forward = _forward;
    m_forwardHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ForwardHasBeenSet() const
{
    return m_forwardHasBeenSet;
}

string CreateLoadBalancerRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void CreateLoadBalancerRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string CreateLoadBalancerRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateLoadBalancerRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateLoadBalancerRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateLoadBalancerRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateLoadBalancerRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLoadBalancerRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


