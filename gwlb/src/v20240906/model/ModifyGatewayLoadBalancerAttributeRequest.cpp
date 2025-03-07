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

#include <tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

ModifyGatewayLoadBalancerAttributeRequest::ModifyGatewayLoadBalancerAttributeRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_deleteProtectHasBeenSet(false)
{
}

string ModifyGatewayLoadBalancerAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteProtect, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGatewayLoadBalancerAttributeRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyGatewayLoadBalancerAttributeRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyGatewayLoadBalancerAttributeRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyGatewayLoadBalancerAttributeRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void ModifyGatewayLoadBalancerAttributeRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool ModifyGatewayLoadBalancerAttributeRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

bool ModifyGatewayLoadBalancerAttributeRequest::GetDeleteProtect() const
{
    return m_deleteProtect;
}

void ModifyGatewayLoadBalancerAttributeRequest::SetDeleteProtect(const bool& _deleteProtect)
{
    m_deleteProtect = _deleteProtect;
    m_deleteProtectHasBeenSet = true;
}

bool ModifyGatewayLoadBalancerAttributeRequest::DeleteProtectHasBeenSet() const
{
    return m_deleteProtectHasBeenSet;
}


