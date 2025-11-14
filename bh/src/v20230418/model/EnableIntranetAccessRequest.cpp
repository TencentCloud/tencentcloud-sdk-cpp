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

#include <tencentcloud/bh/v20230418/model/EnableIntranetAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

EnableIntranetAccessRequest::EnableIntranetAccessRequest() :
    m_resourceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

string EnableIntranetAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableIntranetAccessRequest::GetResourceId() const
{
    return m_resourceId;
}

void EnableIntranetAccessRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool EnableIntranetAccessRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string EnableIntranetAccessRequest::GetVpcId() const
{
    return m_vpcId;
}

void EnableIntranetAccessRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EnableIntranetAccessRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EnableIntranetAccessRequest::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void EnableIntranetAccessRequest::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool EnableIntranetAccessRequest::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string EnableIntranetAccessRequest::GetSubnetId() const
{
    return m_subnetId;
}

void EnableIntranetAccessRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EnableIntranetAccessRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EnableIntranetAccessRequest::GetDomainName() const
{
    return m_domainName;
}

void EnableIntranetAccessRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool EnableIntranetAccessRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}


