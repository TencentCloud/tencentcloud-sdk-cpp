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

#include <tencentcloud/cfw/v20190904/model/DescribeAddressTemplateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeAddressTemplateListRequest::DescribeAddressTemplateListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string DescribeAddressTemplateListRequest::ToJsonString() const
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

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAddressTemplateListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAddressTemplateListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAddressTemplateListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAddressTemplateListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetBy() const
{
    return m_by;
}

void DescribeAddressTemplateListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetOrder() const
{
    return m_order;
}

void DescribeAddressTemplateListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeAddressTemplateListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetUuid() const
{
    return m_uuid;
}

void DescribeAddressTemplateListRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetTemplateType() const
{
    return m_templateType;
}

void DescribeAddressTemplateListRequest::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string DescribeAddressTemplateListRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeAddressTemplateListRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeAddressTemplateListRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


