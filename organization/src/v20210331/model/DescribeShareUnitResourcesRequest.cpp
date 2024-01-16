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

#include <tencentcloud/organization/v20210331/model/DescribeShareUnitResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeShareUnitResourcesRequest::DescribeShareUnitResourcesRequest() :
    m_unitIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeShareUnitResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeShareUnitResourcesRequest::GetUnitId() const
{
    return m_unitId;
}

void DescribeShareUnitResourcesRequest::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string DescribeShareUnitResourcesRequest::GetArea() const
{
    return m_area;
}

void DescribeShareUnitResourcesRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t DescribeShareUnitResourcesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeShareUnitResourcesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeShareUnitResourcesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeShareUnitResourcesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeShareUnitResourcesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeShareUnitResourcesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeShareUnitResourcesRequest::GetType() const
{
    return m_type;
}

void DescribeShareUnitResourcesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeShareUnitResourcesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


