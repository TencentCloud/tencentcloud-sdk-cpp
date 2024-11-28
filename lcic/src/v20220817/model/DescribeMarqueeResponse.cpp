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

#include <tencentcloud/lcic/v20220817/model/DescribeMarqueeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeMarqueeResponse::DescribeMarqueeResponse() :
    m_marqueeTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontWeightHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontOpacityHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacityHasBeenSet(false),
    m_displayModeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_marqueeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMarqueeResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MarqueeType") && !rsp["MarqueeType"].IsNull())
    {
        if (!rsp["MarqueeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MarqueeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_marqueeType = rsp["MarqueeType"].GetUint64();
        m_marqueeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(rsp["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("FontSize") && !rsp["FontSize"].IsNull())
    {
        if (!rsp["FontSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FontSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = rsp["FontSize"].GetUint64();
        m_fontSizeHasBeenSet = true;
    }

    if (rsp.HasMember("FontWeight") && !rsp["FontWeight"].IsNull())
    {
        if (!rsp["FontWeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FontWeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontWeight = rsp["FontWeight"].GetUint64();
        m_fontWeightHasBeenSet = true;
    }

    if (rsp.HasMember("FontColor") && !rsp["FontColor"].IsNull())
    {
        if (!rsp["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(rsp["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (rsp.HasMember("FontOpacity") && !rsp["FontOpacity"].IsNull())
    {
        if (!rsp["FontOpacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FontOpacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontOpacity = rsp["FontOpacity"].GetDouble();
        m_fontOpacityHasBeenSet = true;
    }

    if (rsp.HasMember("BackgroundColor") && !rsp["BackgroundColor"].IsNull())
    {
        if (!rsp["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(rsp["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }

    if (rsp.HasMember("BackgroundOpacity") && !rsp["BackgroundOpacity"].IsNull())
    {
        if (!rsp["BackgroundOpacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundOpacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundOpacity = rsp["BackgroundOpacity"].GetDouble();
        m_backgroundOpacityHasBeenSet = true;
    }

    if (rsp.HasMember("DisplayMode") && !rsp["DisplayMode"].IsNull())
    {
        if (!rsp["DisplayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_displayMode = rsp["DisplayMode"].GetUint64();
        m_displayModeHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("MarqueeCount") && !rsp["MarqueeCount"].IsNull())
    {
        if (!rsp["MarqueeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MarqueeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_marqueeCount = rsp["MarqueeCount"].GetUint64();
        m_marqueeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMarqueeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_marqueeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarqueeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marqueeType, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontWeight, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontOpacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontOpacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontOpacity, allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundOpacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundOpacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundOpacity, allocator);
    }

    if (m_displayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayMode, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_marqueeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarqueeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marqueeCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeMarqueeResponse::GetMarqueeType() const
{
    return m_marqueeType;
}

bool DescribeMarqueeResponse::MarqueeTypeHasBeenSet() const
{
    return m_marqueeTypeHasBeenSet;
}

string DescribeMarqueeResponse::GetContent() const
{
    return m_content;
}

bool DescribeMarqueeResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t DescribeMarqueeResponse::GetFontSize() const
{
    return m_fontSize;
}

bool DescribeMarqueeResponse::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

uint64_t DescribeMarqueeResponse::GetFontWeight() const
{
    return m_fontWeight;
}

bool DescribeMarqueeResponse::FontWeightHasBeenSet() const
{
    return m_fontWeightHasBeenSet;
}

string DescribeMarqueeResponse::GetFontColor() const
{
    return m_fontColor;
}

bool DescribeMarqueeResponse::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double DescribeMarqueeResponse::GetFontOpacity() const
{
    return m_fontOpacity;
}

bool DescribeMarqueeResponse::FontOpacityHasBeenSet() const
{
    return m_fontOpacityHasBeenSet;
}

string DescribeMarqueeResponse::GetBackgroundColor() const
{
    return m_backgroundColor;
}

bool DescribeMarqueeResponse::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

double DescribeMarqueeResponse::GetBackgroundOpacity() const
{
    return m_backgroundOpacity;
}

bool DescribeMarqueeResponse::BackgroundOpacityHasBeenSet() const
{
    return m_backgroundOpacityHasBeenSet;
}

uint64_t DescribeMarqueeResponse::GetDisplayMode() const
{
    return m_displayMode;
}

bool DescribeMarqueeResponse::DisplayModeHasBeenSet() const
{
    return m_displayModeHasBeenSet;
}

uint64_t DescribeMarqueeResponse::GetDuration() const
{
    return m_duration;
}

bool DescribeMarqueeResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t DescribeMarqueeResponse::GetMarqueeCount() const
{
    return m_marqueeCount;
}

bool DescribeMarqueeResponse::MarqueeCountHasBeenSet() const
{
    return m_marqueeCountHasBeenSet;
}


