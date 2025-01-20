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

#include <tencentcloud/vpc/v20170312/model/CreateCustomerGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateCustomerGatewayRequest::CreateCustomerGatewayRequest() :
    m_customerGatewayNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_bgpAsnHasBeenSet(false)
{
}

string CreateCustomerGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
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

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgpAsn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomerGatewayRequest::GetCustomerGatewayName() const
{
    return m_customerGatewayName;
}

void CreateCustomerGatewayRequest::SetCustomerGatewayName(const string& _customerGatewayName)
{
    m_customerGatewayName = _customerGatewayName;
    m_customerGatewayNameHasBeenSet = true;
}

bool CreateCustomerGatewayRequest::CustomerGatewayNameHasBeenSet() const
{
    return m_customerGatewayNameHasBeenSet;
}

string CreateCustomerGatewayRequest::GetIpAddress() const
{
    return m_ipAddress;
}

void CreateCustomerGatewayRequest::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool CreateCustomerGatewayRequest::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

vector<Tag> CreateCustomerGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreateCustomerGatewayRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCustomerGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateCustomerGatewayRequest::GetBgpAsn() const
{
    return m_bgpAsn;
}

void CreateCustomerGatewayRequest::SetBgpAsn(const int64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool CreateCustomerGatewayRequest::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}


