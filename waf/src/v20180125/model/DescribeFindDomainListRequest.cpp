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

#include <tencentcloud/waf/v20180125/model/DescribeFindDomainListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeFindDomainListRequest::DescribeFindDomainListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_isWafDomainHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeFindDomainListRequest::ToJsonString() const
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

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_isWafDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWafDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isWafDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeFindDomainListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFindDomainListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFindDomainListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeFindDomainListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFindDomainListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFindDomainListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeFindDomainListRequest::GetKey() const
{
    return m_key;
}

void DescribeFindDomainListRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeFindDomainListRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DescribeFindDomainListRequest::GetIsWafDomain() const
{
    return m_isWafDomain;
}

void DescribeFindDomainListRequest::SetIsWafDomain(const string& _isWafDomain)
{
    m_isWafDomain = _isWafDomain;
    m_isWafDomainHasBeenSet = true;
}

bool DescribeFindDomainListRequest::IsWafDomainHasBeenSet() const
{
    return m_isWafDomainHasBeenSet;
}

string DescribeFindDomainListRequest::GetBy() const
{
    return m_by;
}

void DescribeFindDomainListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeFindDomainListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeFindDomainListRequest::GetOrder() const
{
    return m_order;
}

void DescribeFindDomainListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeFindDomainListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


