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

#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeTranscodeTemplatesRequest::DescribeTranscodeTemplatesRequest() :
    m_definitionsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_containerTypeHasBeenSet(false),
    m_tEHDTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_transcodeTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_compressTypeHasBeenSet(false)
{
}

string DescribeTranscodeTemplatesRequest::ToJsonString() const
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

    if (m_transcodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transcodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_compressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string DescribeTranscodeTemplatesRequest::GetTranscodeType() const
{
    return m_transcodeType;
}

void DescribeTranscodeTemplatesRequest::SetTranscodeType(const string& _transcodeType)
{
    m_transcodeType = _transcodeType;
    m_transcodeTypeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::TranscodeTypeHasBeenSet() const
{
    return m_transcodeTypeHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetName() const
{
    return m_name;
}

void DescribeTranscodeTemplatesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetSceneType() const
{
    return m_sceneType;
}

void DescribeTranscodeTemplatesRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string DescribeTranscodeTemplatesRequest::GetCompressType() const
{
    return m_compressType;
}

void DescribeTranscodeTemplatesRequest::SetCompressType(const string& _compressType)
{
    m_compressType = _compressType;
    m_compressTypeHasBeenSet = true;
}

bool DescribeTranscodeTemplatesRequest::CompressTypeHasBeenSet() const
{
    return m_compressTypeHasBeenSet;
}


