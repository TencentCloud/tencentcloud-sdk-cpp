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

#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeAdaptiveDynamicStreamingTemplatesRequest::DescribeAdaptiveDynamicStreamingTemplatesRequest() :
    m_definitionsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pureAudioHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string DescribeAdaptiveDynamicStreamingTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_definitions.begin(); itr != m_definitions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pureAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pureAudio, allocator);
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


vector<uint64_t> DescribeAdaptiveDynamicStreamingTemplatesRequest::GetDefinitions() const
{
    return m_definitions;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetDefinitions(const vector<uint64_t>& _definitions)
{
    m_definitions = _definitions;
    m_definitionsHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::DefinitionsHasBeenSet() const
{
    return m_definitionsHasBeenSet;
}

uint64_t DescribeAdaptiveDynamicStreamingTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAdaptiveDynamicStreamingTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAdaptiveDynamicStreamingTemplatesRequest::GetType() const
{
    return m_type;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeAdaptiveDynamicStreamingTemplatesRequest::GetPureAudio() const
{
    return m_pureAudio;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetPureAudio(const uint64_t& _pureAudio)
{
    m_pureAudio = _pureAudio;
    m_pureAudioHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::PureAudioHasBeenSet() const
{
    return m_pureAudioHasBeenSet;
}

string DescribeAdaptiveDynamicStreamingTemplatesRequest::GetName() const
{
    return m_name;
}

void DescribeAdaptiveDynamicStreamingTemplatesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAdaptiveDynamicStreamingTemplatesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


