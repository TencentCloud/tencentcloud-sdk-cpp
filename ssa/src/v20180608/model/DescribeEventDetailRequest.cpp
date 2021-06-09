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

#include <tencentcloud/ssa/v20180608/model/DescribeEventDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeEventDetailRequest::DescribeEventDetailRequest() :
    m_indexHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_subEventTypeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string DescribeEventDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_subEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subEventType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEventDetailRequest::GetIndex() const
{
    return m_index;
}

void DescribeEventDetailRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DescribeEventDetailRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string DescribeEventDetailRequest::GetId() const
{
    return m_id;
}

void DescribeEventDetailRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeEventDetailRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeEventDetailRequest::GetSource() const
{
    return m_source;
}

void DescribeEventDetailRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeEventDetailRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t DescribeEventDetailRequest::GetSubEventType() const
{
    return m_subEventType;
}

void DescribeEventDetailRequest::SetSubEventType(const uint64_t& _subEventType)
{
    m_subEventType = _subEventType;
    m_subEventTypeHasBeenSet = true;
}

bool DescribeEventDetailRequest::SubEventTypeHasBeenSet() const
{
    return m_subEventTypeHasBeenSet;
}

string DescribeEventDetailRequest::GetName() const
{
    return m_name;
}

void DescribeEventDetailRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeEventDetailRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


