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

#include <tencentcloud/vod/v20180717/model/AsrFullTextConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AsrFullTextConfigureInfo::AsrFullTextConfigureInfo() :
    m_switchHasBeenSet(false),
    m_subtitleFormatsHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_srcLanguageHasBeenSet(false),
    m_subtitleNameHasBeenSet(false)
{
}

CoreInternalOutcome AsrFullTextConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrFullTextConfigureInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormats") && !value["SubtitleFormats"].IsNull())
    {
        if (!value["SubtitleFormats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrFullTextConfigureInfo.SubtitleFormats` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleFormats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subtitleFormats.push_back((*itr).GetString());
        }
        m_subtitleFormatsHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrFullTextConfigureInfo.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("SrcLanguage") && !value["SrcLanguage"].IsNull())
    {
        if (!value["SrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrFullTextConfigureInfo.SrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcLanguage = string(value["SrcLanguage"].GetString());
        m_srcLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleName") && !value["SubtitleName"].IsNull())
    {
        if (!value["SubtitleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrFullTextConfigureInfo.SubtitleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleName = string(value["SubtitleName"].GetString());
        m_subtitleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrFullTextConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subtitleFormats.begin(); itr != m_subtitleFormats.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleName.c_str(), allocator).Move(), allocator);
    }

}


string AsrFullTextConfigureInfo::GetSwitch() const
{
    return m_switch;
}

void AsrFullTextConfigureInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AsrFullTextConfigureInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> AsrFullTextConfigureInfo::GetSubtitleFormats() const
{
    return m_subtitleFormats;
}

void AsrFullTextConfigureInfo::SetSubtitleFormats(const vector<string>& _subtitleFormats)
{
    m_subtitleFormats = _subtitleFormats;
    m_subtitleFormatsHasBeenSet = true;
}

bool AsrFullTextConfigureInfo::SubtitleFormatsHasBeenSet() const
{
    return m_subtitleFormatsHasBeenSet;
}

string AsrFullTextConfigureInfo::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void AsrFullTextConfigureInfo::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool AsrFullTextConfigureInfo::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string AsrFullTextConfigureInfo::GetSrcLanguage() const
{
    return m_srcLanguage;
}

void AsrFullTextConfigureInfo::SetSrcLanguage(const string& _srcLanguage)
{
    m_srcLanguage = _srcLanguage;
    m_srcLanguageHasBeenSet = true;
}

bool AsrFullTextConfigureInfo::SrcLanguageHasBeenSet() const
{
    return m_srcLanguageHasBeenSet;
}

string AsrFullTextConfigureInfo::GetSubtitleName() const
{
    return m_subtitleName;
}

void AsrFullTextConfigureInfo::SetSubtitleName(const string& _subtitleName)
{
    m_subtitleName = _subtitleName;
    m_subtitleNameHasBeenSet = true;
}

bool AsrFullTextConfigureInfo::SubtitleNameHasBeenSet() const
{
    return m_subtitleNameHasBeenSet;
}

