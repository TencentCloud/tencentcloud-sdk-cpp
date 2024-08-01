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

#include <tencentcloud/mps/v20190612/model/TranslateConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TranslateConfigureInfo::TranslateConfigureInfo() :
    m_switchHasBeenSet(false),
    m_sourceLanguageHasBeenSet(false),
    m_destinationLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false)
{
}

CoreInternalOutcome TranslateConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslateConfigureInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("SourceLanguage") && !value["SourceLanguage"].IsNull())
    {
        if (!value["SourceLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslateConfigureInfo.SourceLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLanguage = string(value["SourceLanguage"].GetString());
        m_sourceLanguageHasBeenSet = true;
    }

    if (value.HasMember("DestinationLanguage") && !value["DestinationLanguage"].IsNull())
    {
        if (!value["DestinationLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslateConfigureInfo.DestinationLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationLanguage = string(value["DestinationLanguage"].GetString());
        m_destinationLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslateConfigureInfo.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslateConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

}


string TranslateConfigureInfo::GetSwitch() const
{
    return m_switch;
}

void TranslateConfigureInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool TranslateConfigureInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string TranslateConfigureInfo::GetSourceLanguage() const
{
    return m_sourceLanguage;
}

void TranslateConfigureInfo::SetSourceLanguage(const string& _sourceLanguage)
{
    m_sourceLanguage = _sourceLanguage;
    m_sourceLanguageHasBeenSet = true;
}

bool TranslateConfigureInfo::SourceLanguageHasBeenSet() const
{
    return m_sourceLanguageHasBeenSet;
}

string TranslateConfigureInfo::GetDestinationLanguage() const
{
    return m_destinationLanguage;
}

void TranslateConfigureInfo::SetDestinationLanguage(const string& _destinationLanguage)
{
    m_destinationLanguage = _destinationLanguage;
    m_destinationLanguageHasBeenSet = true;
}

bool TranslateConfigureInfo::DestinationLanguageHasBeenSet() const
{
    return m_destinationLanguageHasBeenSet;
}

string TranslateConfigureInfo::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void TranslateConfigureInfo::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool TranslateConfigureInfo::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

