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

#include <tencentcloud/dasb/v20191018/model/DescribeDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DescribeDevicesRequest::DescribeDevicesRequest() :
    m_idSetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_apCodeSetHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_authorizedUserIdSetHasBeenSet(false),
    m_resourceIdSetHasBeenSet(false),
    m_kindSetHasBeenSet(false)
{
}

string DescribeDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idSet.begin(); itr != m_idSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apCodeSet.begin(); itr != m_apCodeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_authorizedUserIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedUserIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedUserIdSet.begin(); itr != m_authorizedUserIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_resourceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdSet.begin(); itr != m_resourceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KindSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kindSet.begin(); itr != m_kindSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeDevicesRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeDevicesRequest::SetIdSet(const vector<uint64_t>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeDevicesRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string DescribeDevicesRequest::GetName() const
{
    return m_name;
}

void DescribeDevicesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDevicesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDevicesRequest::GetIp() const
{
    return m_ip;
}

void DescribeDevicesRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDevicesRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<string> DescribeDevicesRequest::GetApCodeSet() const
{
    return m_apCodeSet;
}

void DescribeDevicesRequest::SetApCodeSet(const vector<string>& _apCodeSet)
{
    m_apCodeSet = _apCodeSet;
    m_apCodeSetHasBeenSet = true;
}

bool DescribeDevicesRequest::ApCodeSetHasBeenSet() const
{
    return m_apCodeSetHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetKind() const
{
    return m_kind;
}

void DescribeDevicesRequest::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeDevicesRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDevicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDevicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<uint64_t> DescribeDevicesRequest::GetAuthorizedUserIdSet() const
{
    return m_authorizedUserIdSet;
}

void DescribeDevicesRequest::SetAuthorizedUserIdSet(const vector<uint64_t>& _authorizedUserIdSet)
{
    m_authorizedUserIdSet = _authorizedUserIdSet;
    m_authorizedUserIdSetHasBeenSet = true;
}

bool DescribeDevicesRequest::AuthorizedUserIdSetHasBeenSet() const
{
    return m_authorizedUserIdSetHasBeenSet;
}

vector<string> DescribeDevicesRequest::GetResourceIdSet() const
{
    return m_resourceIdSet;
}

void DescribeDevicesRequest::SetResourceIdSet(const vector<string>& _resourceIdSet)
{
    m_resourceIdSet = _resourceIdSet;
    m_resourceIdSetHasBeenSet = true;
}

bool DescribeDevicesRequest::ResourceIdSetHasBeenSet() const
{
    return m_resourceIdSetHasBeenSet;
}

vector<uint64_t> DescribeDevicesRequest::GetKindSet() const
{
    return m_kindSet;
}

void DescribeDevicesRequest::SetKindSet(const vector<uint64_t>& _kindSet)
{
    m_kindSet = _kindSet;
    m_kindSetHasBeenSet = true;
}

bool DescribeDevicesRequest::KindSetHasBeenSet() const
{
    return m_kindSetHasBeenSet;
}


