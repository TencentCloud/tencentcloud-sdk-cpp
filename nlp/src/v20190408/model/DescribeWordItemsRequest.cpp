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

#include <tencentcloud/nlp/v20190408/model/DescribeWordItemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

DescribeWordItemsRequest::DescribeWordItemsRequest() :
    m_dictIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

string DescribeWordItemsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dictIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dictId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWordItemsRequest::GetDictId() const
{
    return m_dictId;
}

void DescribeWordItemsRequest::SetDictId(const string& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool DescribeWordItemsRequest::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}

uint64_t DescribeWordItemsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeWordItemsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeWordItemsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeWordItemsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeWordItemsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeWordItemsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeWordItemsRequest::GetText() const
{
    return m_text;
}

void DescribeWordItemsRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool DescribeWordItemsRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}


