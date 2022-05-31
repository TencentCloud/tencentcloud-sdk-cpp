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

#include <tencentcloud/vod/v20180717/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeTranscodeTemplatesRequest::DescribeTranscodeTemplatesRequest() :
    m_subAppIdHasBeenSet(false),
    m_definitionsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_containerTypeHasBeenSet(false),
    m_tEHDTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTranscodeTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_definitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_definitions.begin(); itr != m_definitions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_containerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerType.c_str(), allocator).Move(), allocator);
    }

    if (m_tEHDTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEHDType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tEHDType.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeTranscodeTemplatesRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeTranscodeTemplatesRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<int64_t> DescribeTranscodeTemplatesRequest::GetDefinitions() const
{
    return m_definitions;
}

void DescribeTranscodeTemplatesRequest::SetDefinitions(const vector<int64_t>& _definitions)
{
    m_definitions = _definitions;
    m_definitionsHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::DefinitionsHasBeenSet() const
{
    return m_definitionsHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetType() const
{
    return m_type;
}

void DescribeTranscodeTemplatesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetContainerType() const
{
    return m_containerType;
}

void DescribeTranscodeTemplatesRequest::SetContainerType(const string& _containerType)
{
    m_containerType = _containerType;
    m_containerTypeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::ContainerTypeHasBeenSet() const
{
    return m_containerTypeHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetTEHDType() const
{
    return m_tEHDType;
}

void DescribeTranscodeTemplatesRequest::SetTEHDType(const string& _tEHDType)
{
    m_tEHDType = _tEHDType;
    m_tEHDTypeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::TEHDTypeHasBeenSet() const
{
    return m_tEHDTypeHasBeenSet;
}

uint64_t DescribeTranscodeTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTranscodeTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTranscodeTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTranscodeTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


