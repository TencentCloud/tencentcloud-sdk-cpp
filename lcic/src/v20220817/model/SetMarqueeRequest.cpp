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

#include <tencentcloud/lcic/v20220817/model/SetMarqueeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SetMarqueeRequest::SetMarqueeRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_marqueeTypeHasBeenSet(false),
    m_displayModeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontWeightHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontOpacityHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacityHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_marqueeCountHasBeenSet(false)
{
}

string SetMarqueeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_marqueeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarqueeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_marqueeType, allocator);
    }

    if (m_displayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayMode, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fontWeight, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontOpacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontOpacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fontOpacity, allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundOpacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundOpacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backgroundOpacity, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_marqueeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarqueeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_marqueeCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetMarqueeRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetMarqueeRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetMarqueeRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t SetMarqueeRequest::GetRoomId() const
{
    return m_roomId;
}

void SetMarqueeRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool SetMarqueeRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t SetMarqueeRequest::GetMarqueeType() const
{
    return m_marqueeType;
}

void SetMarqueeRequest::SetMarqueeType(const uint64_t& _marqueeType)
{
    m_marqueeType = _marqueeType;
    m_marqueeTypeHasBeenSet = true;
}

bool SetMarqueeRequest::MarqueeTypeHasBeenSet() const
{
    return m_marqueeTypeHasBeenSet;
}

uint64_t SetMarqueeRequest::GetDisplayMode() const
{
    return m_displayMode;
}

void SetMarqueeRequest::SetDisplayMode(const uint64_t& _displayMode)
{
    m_displayMode = _displayMode;
    m_displayModeHasBeenSet = true;
}

bool SetMarqueeRequest::DisplayModeHasBeenSet() const
{
    return m_displayModeHasBeenSet;
}

string SetMarqueeRequest::GetContent() const
{
    return m_content;
}

void SetMarqueeRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SetMarqueeRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t SetMarqueeRequest::GetFontSize() const
{
    return m_fontSize;
}

void SetMarqueeRequest::SetFontSize(const uint64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool SetMarqueeRequest::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

uint64_t SetMarqueeRequest::GetFontWeight() const
{
    return m_fontWeight;
}

void SetMarqueeRequest::SetFontWeight(const uint64_t& _fontWeight)
{
    m_fontWeight = _fontWeight;
    m_fontWeightHasBeenSet = true;
}

bool SetMarqueeRequest::FontWeightHasBeenSet() const
{
    return m_fontWeightHasBeenSet;
}

string SetMarqueeRequest::GetFontColor() const
{
    return m_fontColor;
}

void SetMarqueeRequest::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool SetMarqueeRequest::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double SetMarqueeRequest::GetFontOpacity() const
{
    return m_fontOpacity;
}

void SetMarqueeRequest::SetFontOpacity(const double& _fontOpacity)
{
    m_fontOpacity = _fontOpacity;
    m_fontOpacityHasBeenSet = true;
}

bool SetMarqueeRequest::FontOpacityHasBeenSet() const
{
    return m_fontOpacityHasBeenSet;
}

string SetMarqueeRequest::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void SetMarqueeRequest::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool SetMarqueeRequest::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

double SetMarqueeRequest::GetBackgroundOpacity() const
{
    return m_backgroundOpacity;
}

void SetMarqueeRequest::SetBackgroundOpacity(const double& _backgroundOpacity)
{
    m_backgroundOpacity = _backgroundOpacity;
    m_backgroundOpacityHasBeenSet = true;
}

bool SetMarqueeRequest::BackgroundOpacityHasBeenSet() const
{
    return m_backgroundOpacityHasBeenSet;
}

uint64_t SetMarqueeRequest::GetDuration() const
{
    return m_duration;
}

void SetMarqueeRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SetMarqueeRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t SetMarqueeRequest::GetMarqueeCount() const
{
    return m_marqueeCount;
}

void SetMarqueeRequest::SetMarqueeCount(const uint64_t& _marqueeCount)
{
    m_marqueeCount = _marqueeCount;
    m_marqueeCountHasBeenSet = true;
}

bool SetMarqueeRequest::MarqueeCountHasBeenSet() const
{
    return m_marqueeCountHasBeenSet;
}


