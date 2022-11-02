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

#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateImageSpriteTemplateRequest::CreateImageSpriteTemplateRequest() :
    m_sampleTypeHasBeenSet(false),
    m_sampleIntervalHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

string CreateImageSpriteTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateImageSpriteTemplateRequest::GetSampleType() const
{
    return m_sampleType;
}

void CreateImageSpriteTemplateRequest::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

uint64_t CreateImageSpriteTemplateRequest::GetSampleInterval() const
{
    return m_sampleInterval;
}

void CreateImageSpriteTemplateRequest::SetSampleInterval(const uint64_t& _sampleInterval)
{
    m_sampleInterval = _sampleInterval;
    m_sampleIntervalHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::SampleIntervalHasBeenSet() const
{
    return m_sampleIntervalHasBeenSet;
}

uint64_t CreateImageSpriteTemplateRequest::GetRowCount() const
{
    return m_rowCount;
}

void CreateImageSpriteTemplateRequest::SetRowCount(const uint64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

uint64_t CreateImageSpriteTemplateRequest::GetColumnCount() const
{
    return m_columnCount;
}

void CreateImageSpriteTemplateRequest::SetColumnCount(const uint64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

string CreateImageSpriteTemplateRequest::GetName() const
{
    return m_name;
}

void CreateImageSpriteTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateImageSpriteTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateImageSpriteTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreateImageSpriteTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateImageSpriteTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateImageSpriteTemplateRequest::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void CreateImageSpriteTemplateRequest::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

string CreateImageSpriteTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void CreateImageSpriteTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

string CreateImageSpriteTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateImageSpriteTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateImageSpriteTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateImageSpriteTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateImageSpriteTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}


