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

#include <tencentcloud/vpc/v20170312/model/CreateDhcpIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateDhcpIpRequest::CreateDhcpIpRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dhcpIpNameHasBeenSet(false),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDhcpIpRequest::ToJsonString() const
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

    if (m_dhcpIpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DhcpIpName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dhcpIpName.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryPrivateIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryPrivateIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secondaryPrivateIpAddressCount, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDhcpIpRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDhcpIpRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDhcpIpRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDhcpIpRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDhcpIpRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDhcpIpRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDhcpIpRequest::GetDhcpIpName() const
{
    return m_dhcpIpName;
}

void CreateDhcpIpRequest::SetDhcpIpName(const string& _dhcpIpName)
{
    m_dhcpIpName = _dhcpIpName;
    m_dhcpIpNameHasBeenSet = true;
}

bool CreateDhcpIpRequest::DhcpIpNameHasBeenSet() const
{
    return m_dhcpIpNameHasBeenSet;
}

uint64_t CreateDhcpIpRequest::GetSecondaryPrivateIpAddressCount() const
{
    return m_secondaryPrivateIpAddressCount;
}

void CreateDhcpIpRequest::SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount)
{
    m_secondaryPrivateIpAddressCount = _secondaryPrivateIpAddressCount;
    m_secondaryPrivateIpAddressCountHasBeenSet = true;
}

bool CreateDhcpIpRequest::SecondaryPrivateIpAddressCountHasBeenSet() const
{
    return m_secondaryPrivateIpAddressCountHasBeenSet;
}

vector<Tag> CreateDhcpIpRequest::GetTags() const
{
    return m_tags;
}

void CreateDhcpIpRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDhcpIpRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


