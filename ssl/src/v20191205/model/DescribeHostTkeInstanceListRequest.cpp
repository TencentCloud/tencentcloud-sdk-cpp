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

#include <tencentcloud/ssl/v20191205/model/DescribeHostTkeInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeHostTkeInstanceListRequest::DescribeHostTkeInstanceListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_isCacheHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_asyncCacheHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false)
{
}

string DescribeHostTkeInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_isCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCache, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_asyncCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncCache, allocator);
    }

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeHostTkeInstanceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHostTkeInstanceListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeHostTkeInstanceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHostTkeInstanceListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeHostTkeInstanceListRequest::GetCertificateId() const
{
    return m_certificateId;
}

void DescribeHostTkeInstanceListRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

uint64_t DescribeHostTkeInstanceListRequest::GetIsCache() const
{
    return m_isCache;
}

void DescribeHostTkeInstanceListRequest::SetIsCache(const uint64_t& _isCache)
{
    m_isCache = _isCache;
    m_isCacheHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::IsCacheHasBeenSet() const
{
    return m_isCacheHasBeenSet;
}

vector<Filter> DescribeHostTkeInstanceListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeHostTkeInstanceListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeHostTkeInstanceListRequest::GetAsyncCache() const
{
    return m_asyncCache;
}

void DescribeHostTkeInstanceListRequest::SetAsyncCache(const int64_t& _asyncCache)
{
    m_asyncCache = _asyncCache;
    m_asyncCacheHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::AsyncCacheHasBeenSet() const
{
    return m_asyncCacheHasBeenSet;
}

string DescribeHostTkeInstanceListRequest::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void DescribeHostTkeInstanceListRequest::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool DescribeHostTkeInstanceListRequest::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}


