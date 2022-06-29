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

#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateSampleSnapshotTemplateRequest::CreateSampleSnapshotTemplateRequest() :
    m_sampleTypeHasBeenSet(false),
    m_sampleIntervalHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

string CreateSampleSnapshotTemplateRequest::ToJsonString() const
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
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


string CreateSampleSnapshotTemplateRequest::GetSampleType() const
{
    return m_sampleType;
}

void CreateSampleSnapshotTemplateRequest::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetSampleInterval() const
{
    return m_sampleInterval;
}

void CreateSampleSnapshotTemplateRequest::SetSampleInterval(const uint64_t& _sampleInterval)
{
    m_sampleInterval = _sampleInterval;
    m_sampleIntervalHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::SampleIntervalHasBeenSet() const
{
    return m_sampleIntervalHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateSampleSnapshotTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetName() const
{
    return m_name;
}

void CreateSampleSnapshotTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateSampleSnapshotTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreateSampleSnapshotTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateSampleSnapshotTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void CreateSampleSnapshotTemplateRequest::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateSampleSnapshotTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateSampleSnapshotTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateSampleSnapshotTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void CreateSampleSnapshotTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool CreateSampleSnapshotTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}


