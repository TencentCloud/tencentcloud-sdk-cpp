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

#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_enableMulticastHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableCdcPublishHasBeenSet(false)
{
}

string ModifyVpcAttributeRequest::ToJsonString() const
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

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMulticastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMulticast";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableMulticast.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCdcPublishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCdcPublish";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCdcPublish, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcAttributeRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyVpcAttributeRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyVpcAttributeRequest::GetVpcName() const
{
    return m_vpcName;
}

void ModifyVpcAttributeRequest::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string ModifyVpcAttributeRequest::GetEnableMulticast() const
{
    return m_enableMulticast;
}

void ModifyVpcAttributeRequest::SetEnableMulticast(const string& _enableMulticast)
{
    m_enableMulticast = _enableMulticast;
    m_enableMulticastHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::EnableMulticastHasBeenSet() const
{
    return m_enableMulticastHasBeenSet;
}

vector<string> ModifyVpcAttributeRequest::GetDnsServers() const
{
    return m_dnsServers;
}

void ModifyVpcAttributeRequest::SetDnsServers(const vector<string>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}

string ModifyVpcAttributeRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyVpcAttributeRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

bool ModifyVpcAttributeRequest::GetEnableCdcPublish() const
{
    return m_enableCdcPublish;
}

void ModifyVpcAttributeRequest::SetEnableCdcPublish(const bool& _enableCdcPublish)
{
    m_enableCdcPublish = _enableCdcPublish;
    m_enableCdcPublishHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::EnableCdcPublishHasBeenSet() const
{
    return m_enableCdcPublishHasBeenSet;
}


