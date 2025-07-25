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

#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifySnapshotByTimeOffsetTemplateRequest::ModifySnapshotByTimeOffsetTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

string ModifySnapshotByTimeOffsetTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_resolutionAdaptiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionAdaptive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolutionAdaptive.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySnapshotByTimeOffsetTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifySnapshotByTimeOffsetTemplateRequest::GetName() const
{
    return m_name;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifySnapshotByTimeOffsetTemplateRequest::GetWidth() const
{
    return m_width;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifySnapshotByTimeOffsetTemplateRequest::GetHeight() const
{
    return m_height;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ModifySnapshotByTimeOffsetTemplateRequest::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

string ModifySnapshotByTimeOffsetTemplateRequest::GetFormat() const
{
    return m_format;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ModifySnapshotByTimeOffsetTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifySnapshotByTimeOffsetTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void ModifySnapshotByTimeOffsetTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool ModifySnapshotByTimeOffsetTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}


