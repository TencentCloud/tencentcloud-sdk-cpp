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

#include <tencentcloud/vpc/v20170312/model/CreateReserveIpAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateReserveIpAddressesRequest::CreateReserveIpAddressesRequest() :
    m_vpcIdHasBeenSet(false),
    m_ipAddressesHasBeenSet(false),
    m_ipAddressCountHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateReserveIpAddressesRequest::ToJsonString() const
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

    if (m_ipAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipAddresses.begin(); itr != m_ipAddresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipAddressCount, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


string CreateReserveIpAddressesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateReserveIpAddressesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateReserveIpAddressesRequest::GetIpAddresses() const
{
    return m_ipAddresses;
}

void CreateReserveIpAddressesRequest::SetIpAddresses(const vector<string>& _ipAddresses)
{
    m_ipAddresses = _ipAddresses;
    m_ipAddressesHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::IpAddressesHasBeenSet() const
{
    return m_ipAddressesHasBeenSet;
}

uint64_t CreateReserveIpAddressesRequest::GetIpAddressCount() const
{
    return m_ipAddressCount;
}

void CreateReserveIpAddressesRequest::SetIpAddressCount(const uint64_t& _ipAddressCount)
{
    m_ipAddressCount = _ipAddressCount;
    m_ipAddressCountHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::IpAddressCountHasBeenSet() const
{
    return m_ipAddressCountHasBeenSet;
}

string CreateReserveIpAddressesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateReserveIpAddressesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateReserveIpAddressesRequest::GetName() const
{
    return m_name;
}

void CreateReserveIpAddressesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateReserveIpAddressesRequest::GetDescription() const
{
    return m_description;
}

void CreateReserveIpAddressesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Tag> CreateReserveIpAddressesRequest::GetTags() const
{
    return m_tags;
}

void CreateReserveIpAddressesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateReserveIpAddressesRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateReserveIpAddressesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateReserveIpAddressesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


