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

#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleTemplate::SubtitleTemplate() :
    m_pathHasBeenSet(false),
    m_streamIndexHasBeenSet(false),
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("StreamIndex") && !value["StreamIndex"].IsNull())
    {
        if (!value["StreamIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.StreamIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamIndex = value["StreamIndex"].GetInt64();
        m_streamIndexHasBeenSet = true;
    }

    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamIndex, allocator);
    }

    if (m_fontTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontType.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontAlpha, allocator);
    }

}


string SubtitleTemplate::GetPath() const
{
    return m_path;
}

void SubtitleTemplate::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SubtitleTemplate::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t SubtitleTemplate::GetStreamIndex() const
{
    return m_streamIndex;
}

void SubtitleTemplate::SetStreamIndex(const int64_t& _streamIndex)
{
    m_streamIndex = _streamIndex;
    m_streamIndexHasBeenSet = true;
}

bool SubtitleTemplate::StreamIndexHasBeenSet() const
{
    return m_streamIndexHasBeenSet;
}

string SubtitleTemplate::GetFontType() const
{
    return m_fontType;
}

void SubtitleTemplate::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool SubtitleTemplate::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string SubtitleTemplate::GetFontSize() const
{
    return m_fontSize;
}

void SubtitleTemplate::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool SubtitleTemplate::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string SubtitleTemplate::GetFontColor() const
{
    return m_fontColor;
}

void SubtitleTemplate::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool SubtitleTemplate::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double SubtitleTemplate::GetFontAlpha() const
{
    return m_fontAlpha;
}

void SubtitleTemplate::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool SubtitleTemplate::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

