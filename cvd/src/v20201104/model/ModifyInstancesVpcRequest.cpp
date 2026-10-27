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

#include <tencentcloud/cvd/v20201104/model/ModifyInstancesVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

ModifyInstancesVpcRequest::ModifyInstancesVpcRequest() :
    m_instanceIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dnsServerSetHasBeenSet(false)
{
}

string ModifyInstancesVpcRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_dnsServerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServerSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dnsServerSet.begin(); itr != m_dnsServerSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstancesVpcRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstancesVpcRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstancesVpcRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ModifyInstancesVpcRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyInstancesVpcRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyInstancesVpcRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyInstancesVpcRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyInstancesVpcRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyInstancesVpcRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> ModifyInstancesVpcRequest::GetDnsServerSet() const
{
    return m_dnsServerSet;
}

void ModifyInstancesVpcRequest::SetDnsServerSet(const vector<string>& _dnsServerSet)
{
    m_dnsServerSet = _dnsServerSet;
    m_dnsServerSetHasBeenSet = true;
}

bool ModifyInstancesVpcRequest::DnsServerSetHasBeenSet() const
{
    return m_dnsServerSetHasBeenSet;
}


