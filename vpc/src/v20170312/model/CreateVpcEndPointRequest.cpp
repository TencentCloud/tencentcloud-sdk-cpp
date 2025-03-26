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

#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpcEndPointRequest::CreateVpcEndPointRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointVipHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false)
{
}

string CreateVpcEndPointRequest::ToJsonString() const
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

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointVip.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_ipAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcEndPointRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpcEndPointRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpcEndPointRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateVpcEndPointRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateVpcEndPointRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateVpcEndPointRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateVpcEndPointRequest::GetEndPointName() const
{
    return m_endPointName;
}

void CreateVpcEndPointRequest::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool CreateVpcEndPointRequest::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string CreateVpcEndPointRequest::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void CreateVpcEndPointRequest::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool CreateVpcEndPointRequest::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string CreateVpcEndPointRequest::GetEndPointVip() const
{
    return m_endPointVip;
}

void CreateVpcEndPointRequest::SetEndPointVip(const string& _endPointVip)
{
    m_endPointVip = _endPointVip;
    m_endPointVipHasBeenSet = true;
}

bool CreateVpcEndPointRequest::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

string CreateVpcEndPointRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void CreateVpcEndPointRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool CreateVpcEndPointRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<Tag> CreateVpcEndPointRequest::GetTags() const
{
    return m_tags;
}

void CreateVpcEndPointRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpcEndPointRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateVpcEndPointRequest::GetIpAddressType() const
{
    return m_ipAddressType;
}

void CreateVpcEndPointRequest::SetIpAddressType(const string& _ipAddressType)
{
    m_ipAddressType = _ipAddressType;
    m_ipAddressTypeHasBeenSet = true;
}

bool CreateVpcEndPointRequest::IpAddressTypeHasBeenSet() const
{
    return m_ipAddressTypeHasBeenSet;
}


