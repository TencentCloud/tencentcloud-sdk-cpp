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

#include <tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

CreateGatewayLoadBalancerRequest::CreateGatewayLoadBalancerRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lBChargeTypeHasBeenSet(false)
{
}

string CreateGatewayLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
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

    if (m_lBChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LBChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lBChargeType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGatewayLoadBalancerRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateGatewayLoadBalancerRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateGatewayLoadBalancerRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateGatewayLoadBalancerRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateGatewayLoadBalancerRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void CreateGatewayLoadBalancerRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

uint64_t CreateGatewayLoadBalancerRequest::GetNumber() const
{
    return m_number;
}

void CreateGatewayLoadBalancerRequest::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

vector<TagInfo> CreateGatewayLoadBalancerRequest::GetTags() const
{
    return m_tags;
}

void CreateGatewayLoadBalancerRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateGatewayLoadBalancerRequest::GetLBChargeType() const
{
    return m_lBChargeType;
}

void CreateGatewayLoadBalancerRequest::SetLBChargeType(const string& _lBChargeType)
{
    m_lBChargeType = _lBChargeType;
    m_lBChargeTypeHasBeenSet = true;
}

bool CreateGatewayLoadBalancerRequest::LBChargeTypeHasBeenSet() const
{
    return m_lBChargeTypeHasBeenSet;
}


