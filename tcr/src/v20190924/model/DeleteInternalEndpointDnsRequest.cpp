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

#include <tencentcloud/tcr/v20190924/model/DeleteInternalEndpointDnsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DeleteInternalEndpointDnsRequest::DeleteInternalEndpointDnsRequest() :
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_eniLBIpHasBeenSet(false),
    m_usePublicDomainHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

string DeleteInternalEndpointDnsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_eniLBIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniLBIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eniLBIp.c_str(), allocator).Move(), allocator);
    }

    if (m_usePublicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePublicDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_usePublicDomain, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteInternalEndpointDnsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteInternalEndpointDnsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteInternalEndpointDnsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteInternalEndpointDnsRequest::GetVpcId() const
{
    return m_vpcId;
}

void DeleteInternalEndpointDnsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DeleteInternalEndpointDnsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DeleteInternalEndpointDnsRequest::GetEniLBIp() const
{
    return m_eniLBIp;
}

void DeleteInternalEndpointDnsRequest::SetEniLBIp(const string& _eniLBIp)
{
    m_eniLBIp = _eniLBIp;
    m_eniLBIpHasBeenSet = true;
}

bool DeleteInternalEndpointDnsRequest::EniLBIpHasBeenSet() const
{
    return m_eniLBIpHasBeenSet;
}

bool DeleteInternalEndpointDnsRequest::GetUsePublicDomain() const
{
    return m_usePublicDomain;
}

void DeleteInternalEndpointDnsRequest::SetUsePublicDomain(const bool& _usePublicDomain)
{
    m_usePublicDomain = _usePublicDomain;
    m_usePublicDomainHasBeenSet = true;
}

bool DeleteInternalEndpointDnsRequest::UsePublicDomainHasBeenSet() const
{
    return m_usePublicDomainHasBeenSet;
}

string DeleteInternalEndpointDnsRequest::GetRegionName() const
{
    return m_regionName;
}

void DeleteInternalEndpointDnsRequest::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool DeleteInternalEndpointDnsRequest::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}


