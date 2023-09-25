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

#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateBandwidthPackageRequest::CreateBandwidthPackageRequest() :
    m_networkTypeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_bandwidthPackageNameHasBeenSet(false),
    m_bandwidthPackageCountHasBeenSet(false),
    m_internetMaxBandwidthHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_egressHasBeenSet(false)
{
}

string CreateBandwidthPackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidthPackageCount, allocator);
    }

    if (m_internetMaxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidth, allocator);
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_egress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBandwidthPackageRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateBandwidthPackageRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateBandwidthPackageRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateBandwidthPackageRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string CreateBandwidthPackageRequest::GetBandwidthPackageName() const
{
    return m_bandwidthPackageName;
}

void CreateBandwidthPackageRequest::SetBandwidthPackageName(const string& _bandwidthPackageName)
{
    m_bandwidthPackageName = _bandwidthPackageName;
    m_bandwidthPackageNameHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::BandwidthPackageNameHasBeenSet() const
{
    return m_bandwidthPackageNameHasBeenSet;
}

uint64_t CreateBandwidthPackageRequest::GetBandwidthPackageCount() const
{
    return m_bandwidthPackageCount;
}

void CreateBandwidthPackageRequest::SetBandwidthPackageCount(const uint64_t& _bandwidthPackageCount)
{
    m_bandwidthPackageCount = _bandwidthPackageCount;
    m_bandwidthPackageCountHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::BandwidthPackageCountHasBeenSet() const
{
    return m_bandwidthPackageCountHasBeenSet;
}

int64_t CreateBandwidthPackageRequest::GetInternetMaxBandwidth() const
{
    return m_internetMaxBandwidth;
}

void CreateBandwidthPackageRequest::SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth)
{
    m_internetMaxBandwidth = _internetMaxBandwidth;
    m_internetMaxBandwidthHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::InternetMaxBandwidthHasBeenSet() const
{
    return m_internetMaxBandwidthHasBeenSet;
}

vector<Tag> CreateBandwidthPackageRequest::GetTags() const
{
    return m_tags;
}

void CreateBandwidthPackageRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateBandwidthPackageRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateBandwidthPackageRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t CreateBandwidthPackageRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateBandwidthPackageRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateBandwidthPackageRequest::GetEgress() const
{
    return m_egress;
}

void CreateBandwidthPackageRequest::SetEgress(const string& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}


