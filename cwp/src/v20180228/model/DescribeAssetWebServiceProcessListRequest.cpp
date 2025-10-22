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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetWebServiceProcessListRequest::DescribeAssetWebServiceProcessListRequest() :
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_idHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAssetWebServiceProcessListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetWebServiceProcessListRequest::GetQuuid() const
{
    return m_quuid;
}

void DescribeAssetWebServiceProcessListRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool DescribeAssetWebServiceProcessListRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string DescribeAssetWebServiceProcessListRequest::GetUuid() const
{
    return m_uuid;
}

void DescribeAssetWebServiceProcessListRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescribeAssetWebServiceProcessListRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string DescribeAssetWebServiceProcessListRequest::GetId() const
{
    return m_id;
}

void DescribeAssetWebServiceProcessListRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAssetWebServiceProcessListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t DescribeAssetWebServiceProcessListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAssetWebServiceProcessListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAssetWebServiceProcessListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAssetWebServiceProcessListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAssetWebServiceProcessListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAssetWebServiceProcessListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


