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

#include <tencentcloud/vpc/v20170312/model/AllocateAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AllocateAddressesRequest::AllocateAddressesRequest() :
    m_addressCountHasBeenSet(false),
    m_internetServiceProviderHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_anycastZoneHasBeenSet(false),
    m_applicableForCLBHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false)
{
}

string AllocateAddressesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressCount, allocator);
    }

    if (m_internetServiceProviderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_internetServiceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_anycastZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AnycastZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_anycastZone.c_str(), allocator).Move(), allocator);
    }

    if (m_applicableForCLBHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicableForCLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicableForCLB, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AllocateAddressesRequest::GetAddressCount() const
{
    return m_addressCount;
}

void AllocateAddressesRequest::SetAddressCount(const int64_t& _addressCount)
{
    m_addressCount = _addressCount;
    m_addressCountHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressCountHasBeenSet() const
{
    return m_addressCountHasBeenSet;
}

string AllocateAddressesRequest::GetInternetServiceProvider() const
{
    return m_internetServiceProvider;
}

void AllocateAddressesRequest::SetInternetServiceProvider(const string& _internetServiceProvider)
{
    m_internetServiceProvider = _internetServiceProvider;
    m_internetServiceProviderHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetServiceProviderHasBeenSet() const
{
    return m_internetServiceProviderHasBeenSet;
}

string AllocateAddressesRequest::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void AllocateAddressesRequest::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

int64_t AllocateAddressesRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void AllocateAddressesRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string AllocateAddressesRequest::GetAddressType() const
{
    return m_addressType;
}

void AllocateAddressesRequest::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string AllocateAddressesRequest::GetAnycastZone() const
{
    return m_anycastZone;
}

void AllocateAddressesRequest::SetAnycastZone(const string& _anycastZone)
{
    m_anycastZone = _anycastZone;
    m_anycastZoneHasBeenSet = true;
}

bool AllocateAddressesRequest::AnycastZoneHasBeenSet() const
{
    return m_anycastZoneHasBeenSet;
}

bool AllocateAddressesRequest::GetApplicableForCLB() const
{
    return m_applicableForCLB;
}

void AllocateAddressesRequest::SetApplicableForCLB(const bool& _applicableForCLB)
{
    m_applicableForCLB = _applicableForCLB;
    m_applicableForCLBHasBeenSet = true;
}

bool AllocateAddressesRequest::ApplicableForCLBHasBeenSet() const
{
    return m_applicableForCLBHasBeenSet;
}

vector<Tag> AllocateAddressesRequest::GetTags() const
{
    return m_tags;
}

void AllocateAddressesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AllocateAddressesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AllocateAddressesRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void AllocateAddressesRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool AllocateAddressesRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}


