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

#include <tencentcloud/waf/v20180125/model/CreateAccessExportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateAccessExportRequest::CreateAccessExportRequest() :
    m_topicIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_countHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string CreateAccessExportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
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


string CreateAccessExportRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateAccessExportRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateAccessExportRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t CreateAccessExportRequest::GetFrom() const
{
    return m_from;
}

void CreateAccessExportRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool CreateAccessExportRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t CreateAccessExportRequest::GetTo() const
{
    return m_to;
}

void CreateAccessExportRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool CreateAccessExportRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string CreateAccessExportRequest::GetQuery() const
{
    return m_query;
}

void CreateAccessExportRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool CreateAccessExportRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t CreateAccessExportRequest::GetCount() const
{
    return m_count;
}

void CreateAccessExportRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateAccessExportRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateAccessExportRequest::GetFormat() const
{
    return m_format;
}

void CreateAccessExportRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateAccessExportRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CreateAccessExportRequest::GetOrder() const
{
    return m_order;
}

void CreateAccessExportRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateAccessExportRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


