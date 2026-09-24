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

#include <tencentcloud/dlc/v20210125/model/DescribeCatalogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeCatalogsRequest::DescribeCatalogsRequest() :
    m_catalogIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_ascHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false)
{
}

string DescribeCatalogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asc.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAfter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createdAfter, allocator);
    }

    if (m_createdBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBefore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createdBefore, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCatalogsRequest::GetCatalogId() const
{
    return m_catalogId;
}

void DescribeCatalogsRequest::SetCatalogId(const string& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool DescribeCatalogsRequest::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}

string DescribeCatalogsRequest::GetName() const
{
    return m_name;
}

void DescribeCatalogsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCatalogsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeCatalogsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeCatalogsRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeCatalogsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeCatalogsRequest::GetSort() const
{
    return m_sort;
}

void DescribeCatalogsRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeCatalogsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeCatalogsRequest::GetAsc() const
{
    return m_asc;
}

void DescribeCatalogsRequest::SetAsc(const string& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool DescribeCatalogsRequest::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}

uint64_t DescribeCatalogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCatalogsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCatalogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCatalogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCatalogsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCatalogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCatalogsRequest::GetStatus() const
{
    return m_status;
}

void DescribeCatalogsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCatalogsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCatalogsRequest::GetType() const
{
    return m_type;
}

void DescribeCatalogsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeCatalogsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeCatalogsRequest::GetCreatedAfter() const
{
    return m_createdAfter;
}

void DescribeCatalogsRequest::SetCreatedAfter(const uint64_t& _createdAfter)
{
    m_createdAfter = _createdAfter;
    m_createdAfterHasBeenSet = true;
}

bool DescribeCatalogsRequest::CreatedAfterHasBeenSet() const
{
    return m_createdAfterHasBeenSet;
}

uint64_t DescribeCatalogsRequest::GetCreatedBefore() const
{
    return m_createdBefore;
}

void DescribeCatalogsRequest::SetCreatedBefore(const uint64_t& _createdBefore)
{
    m_createdBefore = _createdBefore;
    m_createdBeforeHasBeenSet = true;
}

bool DescribeCatalogsRequest::CreatedBeforeHasBeenSet() const
{
    return m_createdBeforeHasBeenSet;
}


