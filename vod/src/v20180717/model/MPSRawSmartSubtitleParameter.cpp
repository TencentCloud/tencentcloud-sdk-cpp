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

#include <tencentcloud/vod/v20180717/model/MPSRawSmartSubtitleParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSRawSmartSubtitleParameter::MPSRawSmartSubtitleParameter() :
    m_subtitleTypeHasBeenSet(false),
    m_videoSrcLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_translateSwitchHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_processTypeHasBeenSet(false)
{
}

CoreInternalOutcome MPSRawSmartSubtitleParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleType") && !value["SubtitleType"].IsNull())
    {
        if (!value["SubtitleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.SubtitleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleType = value["SubtitleType"].GetInt64();
        m_subtitleTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoSrcLanguage") && !value["VideoSrcLanguage"].IsNull())
    {
        if (!value["VideoSrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.VideoSrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSrcLanguage = string(value["VideoSrcLanguage"].GetString());
        m_videoSrcLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TranslateSwitch") && !value["TranslateSwitch"].IsNull())
    {
        if (!value["TranslateSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.TranslateSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSwitch = string(value["TranslateSwitch"].GetString());
        m_translateSwitchHasBeenSet = true;
    }

    if (value.HasMember("TranslateDstLanguage") && !value["TranslateDstLanguage"].IsNull())
    {
        if (!value["TranslateDstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.TranslateDstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateDstLanguage = string(value["TranslateDstLanguage"].GetString());
        m_translateDstLanguageHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSRawSmartSubtitleParameter.ProcessType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processType = value["ProcessType"].GetUint64();
        m_processTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSRawSmartSubtitleParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleType, allocator);
    }

    if (m_videoSrcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoSrcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_translateSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_translateDstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateDstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateDstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processType, allocator);
    }

}


int64_t MPSRawSmartSubtitleParameter::GetSubtitleType() const
{
    return m_subtitleType;
}

void MPSRawSmartSubtitleParameter::SetSubtitleType(const int64_t& _subtitleType)
{
    m_subtitleType = _subtitleType;
    m_subtitleTypeHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::SubtitleTypeHasBeenSet() const
{
    return m_subtitleTypeHasBeenSet;
}

string MPSRawSmartSubtitleParameter::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void MPSRawSmartSubtitleParameter::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string MPSRawSmartSubtitleParameter::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void MPSRawSmartSubtitleParameter::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string MPSRawSmartSubtitleParameter::GetTranslateSwitch() const
{
    return m_translateSwitch;
}

void MPSRawSmartSubtitleParameter::SetTranslateSwitch(const string& _translateSwitch)
{
    m_translateSwitch = _translateSwitch;
    m_translateSwitchHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::TranslateSwitchHasBeenSet() const
{
    return m_translateSwitchHasBeenSet;
}

string MPSRawSmartSubtitleParameter::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void MPSRawSmartSubtitleParameter::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}

string MPSRawSmartSubtitleParameter::GetExtInfo() const
{
    return m_extInfo;
}

void MPSRawSmartSubtitleParameter::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

uint64_t MPSRawSmartSubtitleParameter::GetProcessType() const
{
    return m_processType;
}

void MPSRawSmartSubtitleParameter::SetProcessType(const uint64_t& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool MPSRawSmartSubtitleParameter::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

