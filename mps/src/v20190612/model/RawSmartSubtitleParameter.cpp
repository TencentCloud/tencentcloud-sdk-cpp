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

#include <tencentcloud/mps/v20190612/model/RawSmartSubtitleParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RawSmartSubtitleParameter::RawSmartSubtitleParameter() :
    m_subtitleTypeHasBeenSet(false),
    m_videoSrcLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_translateSwitchHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false),
    m_asrHotWordsConfigureHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome RawSmartSubtitleParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleType") && !value["SubtitleType"].IsNull())
    {
        if (!value["SubtitleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.SubtitleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleType = value["SubtitleType"].GetInt64();
        m_subtitleTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoSrcLanguage") && !value["VideoSrcLanguage"].IsNull())
    {
        if (!value["VideoSrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.VideoSrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSrcLanguage = string(value["VideoSrcLanguage"].GetString());
        m_videoSrcLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TranslateSwitch") && !value["TranslateSwitch"].IsNull())
    {
        if (!value["TranslateSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.TranslateSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSwitch = string(value["TranslateSwitch"].GetString());
        m_translateSwitchHasBeenSet = true;
    }

    if (value.HasMember("TranslateDstLanguage") && !value["TranslateDstLanguage"].IsNull())
    {
        if (!value["TranslateDstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.TranslateDstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateDstLanguage = string(value["TranslateDstLanguage"].GetString());
        m_translateDstLanguageHasBeenSet = true;
    }

    if (value.HasMember("AsrHotWordsConfigure") && !value["AsrHotWordsConfigure"].IsNull())
    {
        if (!value["AsrHotWordsConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.AsrHotWordsConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrHotWordsConfigure.Deserialize(value["AsrHotWordsConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrHotWordsConfigureHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartSubtitleParameter.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawSmartSubtitleParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_asrHotWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrHotWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrHotWordsConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t RawSmartSubtitleParameter::GetSubtitleType() const
{
    return m_subtitleType;
}

void RawSmartSubtitleParameter::SetSubtitleType(const int64_t& _subtitleType)
{
    m_subtitleType = _subtitleType;
    m_subtitleTypeHasBeenSet = true;
}

bool RawSmartSubtitleParameter::SubtitleTypeHasBeenSet() const
{
    return m_subtitleTypeHasBeenSet;
}

string RawSmartSubtitleParameter::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void RawSmartSubtitleParameter::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool RawSmartSubtitleParameter::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string RawSmartSubtitleParameter::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void RawSmartSubtitleParameter::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool RawSmartSubtitleParameter::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string RawSmartSubtitleParameter::GetTranslateSwitch() const
{
    return m_translateSwitch;
}

void RawSmartSubtitleParameter::SetTranslateSwitch(const string& _translateSwitch)
{
    m_translateSwitch = _translateSwitch;
    m_translateSwitchHasBeenSet = true;
}

bool RawSmartSubtitleParameter::TranslateSwitchHasBeenSet() const
{
    return m_translateSwitchHasBeenSet;
}

string RawSmartSubtitleParameter::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void RawSmartSubtitleParameter::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool RawSmartSubtitleParameter::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}

AsrHotWordsConfigure RawSmartSubtitleParameter::GetAsrHotWordsConfigure() const
{
    return m_asrHotWordsConfigure;
}

void RawSmartSubtitleParameter::SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure)
{
    m_asrHotWordsConfigure = _asrHotWordsConfigure;
    m_asrHotWordsConfigureHasBeenSet = true;
}

bool RawSmartSubtitleParameter::AsrHotWordsConfigureHasBeenSet() const
{
    return m_asrHotWordsConfigureHasBeenSet;
}

string RawSmartSubtitleParameter::GetExtInfo() const
{
    return m_extInfo;
}

void RawSmartSubtitleParameter::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool RawSmartSubtitleParameter::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

