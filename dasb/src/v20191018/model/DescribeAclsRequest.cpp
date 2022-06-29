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

#include <tencentcloud/dasb/v20191018/model/DescribeAclsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DescribeAclsRequest::DescribeAclsRequest() :
    m_idSetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_exactHasBeenSet(false),
    m_authorizedUserIdSetHasBeenSet(false),
    m_authorizedDeviceIdSetHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeAclsRequest::ToJsonString() const
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

    if (m_exactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exact, allocator);
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

    if (m_authorizedDeviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedDeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedDeviceIdSet.begin(); itr != m_authorizedDeviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeAclsRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeAclsRequest::SetIdSet(const vector<uint64_t>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeAclsRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string DescribeAclsRequest::GetName() const
{
    return m_name;
}

void DescribeAclsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAclsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAclsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAclsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAclsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAclsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAclsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAclsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeAclsRequest::GetExact() const
{
    return m_exact;
}

void DescribeAclsRequest::SetExact(const bool& _exact)
{
    m_exact = _exact;
    m_exactHasBeenSet = true;
}

bool DescribeAclsRequest::ExactHasBeenSet() const
{
    return m_exactHasBeenSet;
}

vector<uint64_t> DescribeAclsRequest::GetAuthorizedUserIdSet() const
{
    return m_authorizedUserIdSet;
}

void DescribeAclsRequest::SetAuthorizedUserIdSet(const vector<uint64_t>& _authorizedUserIdSet)
{
    m_authorizedUserIdSet = _authorizedUserIdSet;
    m_authorizedUserIdSetHasBeenSet = true;
}

bool DescribeAclsRequest::AuthorizedUserIdSetHasBeenSet() const
{
    return m_authorizedUserIdSetHasBeenSet;
}

vector<uint64_t> DescribeAclsRequest::GetAuthorizedDeviceIdSet() const
{
    return m_authorizedDeviceIdSet;
}

void DescribeAclsRequest::SetAuthorizedDeviceIdSet(const vector<uint64_t>& _authorizedDeviceIdSet)
{
    m_authorizedDeviceIdSet = _authorizedDeviceIdSet;
    m_authorizedDeviceIdSetHasBeenSet = true;
}

bool DescribeAclsRequest::AuthorizedDeviceIdSetHasBeenSet() const
{
    return m_authorizedDeviceIdSetHasBeenSet;
}

uint64_t DescribeAclsRequest::GetStatus() const
{
    return m_status;
}

void DescribeAclsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAclsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


