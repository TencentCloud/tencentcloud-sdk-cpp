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

#include <tencentcloud/csip/v20221121/model/DescribeCWPExposePathRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCWPExposePathRequest::DescribeCWPExposePathRequest() :
    m_assetIDHasBeenSet(false),
    m_assetAppIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

string DescribeCWPExposePathRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetAppID, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCWPExposePathRequest::GetAssetID() const
{
    return m_assetID;
}

void DescribeCWPExposePathRequest::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

uint64_t DescribeCWPExposePathRequest::GetAssetAppID() const
{
    return m_assetAppID;
}

void DescribeCWPExposePathRequest::SetAssetAppID(const uint64_t& _assetAppID)
{
    m_assetAppID = _assetAppID;
    m_assetAppIDHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::AssetAppIDHasBeenSet() const
{
    return m_assetAppIDHasBeenSet;
}

vector<string> DescribeCWPExposePathRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeCWPExposePathRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeCWPExposePathRequest::GetIp() const
{
    return m_ip;
}

void DescribeCWPExposePathRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeCWPExposePathRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCWPExposePathRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCWPExposePathRequest::GetPort() const
{
    return m_port;
}

void DescribeCWPExposePathRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeCWPExposePathRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}


