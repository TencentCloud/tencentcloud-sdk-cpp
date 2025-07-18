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

#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeSetListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeKnowledgeSetListRequest::DescribeKnowledgeSetListRequest() :
    m_envIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queryModeHasBeenSet(false)
{
}

string DescribeKnowledgeSetListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_queryModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKnowledgeSetListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeKnowledgeSetListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeKnowledgeSetListRequest::GetName() const
{
    return m_name;
}

void DescribeKnowledgeSetListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeKnowledgeSetListRequest::GetTitle() const
{
    return m_title;
}

void DescribeKnowledgeSetListRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DescribeKnowledgeSetListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeKnowledgeSetListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeKnowledgeSetListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeKnowledgeSetListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeKnowledgeSetListRequest::GetQueryMode() const
{
    return m_queryMode;
}

void DescribeKnowledgeSetListRequest::SetQueryMode(const string& _queryMode)
{
    m_queryMode = _queryMode;
    m_queryModeHasBeenSet = true;
}

bool DescribeKnowledgeSetListRequest::QueryModeHasBeenSet() const
{
    return m_queryModeHasBeenSet;
}


