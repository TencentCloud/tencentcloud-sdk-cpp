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

#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyImageSpriteTemplateRequest::ModifyImageSpriteTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_sampleIntervalHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

string ModifyImageSpriteTemplateRequest::ToJsonString() const
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

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleInterval, allocator);
    }

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_columnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_columnCount, allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyImageSpriteTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyImageSpriteTemplateRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyImageSpriteTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyImageSpriteTemplateRequest::GetWidth() const
{
    return m_width;
}

void ModifyImageSpriteTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifyImageSpriteTemplateRequest::GetHeight() const
{
    return m_height;
}

void ModifyImageSpriteTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void ModifyImageSpriteTemplateRequest::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetSampleType() const
{
    return m_sampleType;
}

void ModifyImageSpriteTemplateRequest::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

uint64_t ModifyImageSpriteTemplateRequest::GetSampleInterval() const
{
    return m_sampleInterval;
}

void ModifyImageSpriteTemplateRequest::SetSampleInterval(const uint64_t& _sampleInterval)
{
    m_sampleInterval = _sampleInterval;
    m_sampleIntervalHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::SampleIntervalHasBeenSet() const
{
    return m_sampleIntervalHasBeenSet;
}

uint64_t ModifyImageSpriteTemplateRequest::GetRowCount() const
{
    return m_rowCount;
}

void ModifyImageSpriteTemplateRequest::SetRowCount(const uint64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

uint64_t ModifyImageSpriteTemplateRequest::GetColumnCount() const
{
    return m_columnCount;
}

void ModifyImageSpriteTemplateRequest::SetColumnCount(const uint64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void ModifyImageSpriteTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyImageSpriteTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifyImageSpriteTemplateRequest::GetFormat() const
{
    return m_format;
}

void ModifyImageSpriteTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifyImageSpriteTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}


