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

#include <tencentcloud/cls/v20201016/model/CreateExportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateExportRequest::CreateExportRequest() :
    m_topicIdHasBeenSet(false),
    m_countHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_derivedFieldsHasBeenSet(false)
{
}

string CreateExportRequest::ToJsonString() const
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syntaxRule, allocator);
    }

    if (m_derivedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DerivedFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_derivedFields.begin(); itr != m_derivedFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExportRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateExportRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateExportRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t CreateExportRequest::GetCount() const
{
    return m_count;
}

void CreateExportRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateExportRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateExportRequest::GetQuery() const
{
    return m_query;
}

void CreateExportRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool CreateExportRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t CreateExportRequest::GetFrom() const
{
    return m_from;
}

void CreateExportRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool CreateExportRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t CreateExportRequest::GetTo() const
{
    return m_to;
}

void CreateExportRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool CreateExportRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string CreateExportRequest::GetOrder() const
{
    return m_order;
}

void CreateExportRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateExportRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string CreateExportRequest::GetFormat() const
{
    return m_format;
}

void CreateExportRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateExportRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t CreateExportRequest::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void CreateExportRequest::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool CreateExportRequest::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

vector<string> CreateExportRequest::GetDerivedFields() const
{
    return m_derivedFields;
}

void CreateExportRequest::SetDerivedFields(const vector<string>& _derivedFields)
{
    m_derivedFields = _derivedFields;
    m_derivedFieldsHasBeenSet = true;
}

bool CreateExportRequest::DerivedFieldsHasBeenSet() const
{
    return m_derivedFieldsHasBeenSet;
}


