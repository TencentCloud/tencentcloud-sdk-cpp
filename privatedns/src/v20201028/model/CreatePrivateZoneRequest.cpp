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

#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreatePrivateZoneRequest::CreatePrivateZoneRequest() :
    m_domainHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_vpcSetHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dnsForwardStatusHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_accountVpcSetHasBeenSet(false),
    m_cnameSpeedupStatusHasBeenSet(false)
{
}

string CreatePrivateZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsForwardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsForwardStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsForwardStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpcs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcs.begin(); itr != m_vpcs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accountVpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountVpcSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountVpcSet.begin(); itr != m_accountVpcSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cnameSpeedupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedupStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cnameSpeedupStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrivateZoneRequest::GetDomain() const
{
    return m_domain;
}

void CreatePrivateZoneRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreatePrivateZoneRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<TagInfo> CreatePrivateZoneRequest::GetTagSet() const
{
    return m_tagSet;
}

void CreatePrivateZoneRequest::SetTagSet(const vector<TagInfo>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CreatePrivateZoneRequest::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<VpcInfo> CreatePrivateZoneRequest::GetVpcSet() const
{
    return m_vpcSet;
}

void CreatePrivateZoneRequest::SetVpcSet(const vector<VpcInfo>& _vpcSet)
{
    m_vpcSet = _vpcSet;
    m_vpcSetHasBeenSet = true;
}

bool CreatePrivateZoneRequest::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

string CreatePrivateZoneRequest::GetRemark() const
{
    return m_remark;
}

void CreatePrivateZoneRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreatePrivateZoneRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreatePrivateZoneRequest::GetDnsForwardStatus() const
{
    return m_dnsForwardStatus;
}

void CreatePrivateZoneRequest::SetDnsForwardStatus(const string& _dnsForwardStatus)
{
    m_dnsForwardStatus = _dnsForwardStatus;
    m_dnsForwardStatusHasBeenSet = true;
}

bool CreatePrivateZoneRequest::DnsForwardStatusHasBeenSet() const
{
    return m_dnsForwardStatusHasBeenSet;
}

vector<VpcInfo> CreatePrivateZoneRequest::GetVpcs() const
{
    return m_vpcs;
}

void CreatePrivateZoneRequest::SetVpcs(const vector<VpcInfo>& _vpcs)
{
    m_vpcs = _vpcs;
    m_vpcsHasBeenSet = true;
}

bool CreatePrivateZoneRequest::VpcsHasBeenSet() const
{
    return m_vpcsHasBeenSet;
}

vector<AccountVpcInfo> CreatePrivateZoneRequest::GetAccountVpcSet() const
{
    return m_accountVpcSet;
}

void CreatePrivateZoneRequest::SetAccountVpcSet(const vector<AccountVpcInfo>& _accountVpcSet)
{
    m_accountVpcSet = _accountVpcSet;
    m_accountVpcSetHasBeenSet = true;
}

bool CreatePrivateZoneRequest::AccountVpcSetHasBeenSet() const
{
    return m_accountVpcSetHasBeenSet;
}

string CreatePrivateZoneRequest::GetCnameSpeedupStatus() const
{
    return m_cnameSpeedupStatus;
}

void CreatePrivateZoneRequest::SetCnameSpeedupStatus(const string& _cnameSpeedupStatus)
{
    m_cnameSpeedupStatus = _cnameSpeedupStatus;
    m_cnameSpeedupStatusHasBeenSet = true;
}

bool CreatePrivateZoneRequest::CnameSpeedupStatusHasBeenSet() const
{
    return m_cnameSpeedupStatusHasBeenSet;
}


