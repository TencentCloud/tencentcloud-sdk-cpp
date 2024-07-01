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

#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreatePrivateNatGatewayRequest::CreatePrivateNatGatewayRequest() :
    m_natGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_crossDomainHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcTypeHasBeenSet(false),
    m_ccnIdHasBeenSet(false)
{
}

string CreatePrivateNatGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_crossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossDomain, allocator);
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

    if (m_vpcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vpcType, allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrivateNatGatewayRequest::GetNatGatewayName() const
{
    return m_natGatewayName;
}

void CreatePrivateNatGatewayRequest::SetNatGatewayName(const string& _natGatewayName)
{
    m_natGatewayName = _natGatewayName;
    m_natGatewayNameHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::NatGatewayNameHasBeenSet() const
{
    return m_natGatewayNameHasBeenSet;
}

string CreatePrivateNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreatePrivateNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool CreatePrivateNatGatewayRequest::GetCrossDomain() const
{
    return m_crossDomain;
}

void CreatePrivateNatGatewayRequest::SetCrossDomain(const bool& _crossDomain)
{
    m_crossDomain = _crossDomain;
    m_crossDomainHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::CrossDomainHasBeenSet() const
{
    return m_crossDomainHasBeenSet;
}

vector<Tag> CreatePrivateNatGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreatePrivateNatGatewayRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreatePrivateNatGatewayRequest::GetVpcType() const
{
    return m_vpcType;
}

void CreatePrivateNatGatewayRequest::SetVpcType(const bool& _vpcType)
{
    m_vpcType = _vpcType;
    m_vpcTypeHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::VpcTypeHasBeenSet() const
{
    return m_vpcTypeHasBeenSet;
}

string CreatePrivateNatGatewayRequest::GetCcnId() const
{
    return m_ccnId;
}

void CreatePrivateNatGatewayRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CreatePrivateNatGatewayRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}


