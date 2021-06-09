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

#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAnimatedGraphicsTemplateRequest::CreateAnimatedGraphicsTemplateRequest() :
    m_fpsHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_qualityHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateAnimatedGraphicsTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
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

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quality, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAnimatedGraphicsTemplateRequest::GetFps() const
{
    return m_fps;
}

void CreateAnimatedGraphicsTemplateRequest::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t CreateAnimatedGraphicsTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateAnimatedGraphicsTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreateAnimatedGraphicsTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateAnimatedGraphicsTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateAnimatedGraphicsTemplateRequest::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void CreateAnimatedGraphicsTemplateRequest::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

string CreateAnimatedGraphicsTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateAnimatedGraphicsTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

double CreateAnimatedGraphicsTemplateRequest::GetQuality() const
{
    return m_quality;
}

void CreateAnimatedGraphicsTemplateRequest::SetQuality(const double& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

string CreateAnimatedGraphicsTemplateRequest::GetName() const
{
    return m_name;
}

void CreateAnimatedGraphicsTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAnimatedGraphicsTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateAnimatedGraphicsTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateAnimatedGraphicsTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


