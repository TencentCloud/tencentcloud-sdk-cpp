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

#include <tencentcloud/trtc/v20190722/model/STTConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

STTConfig::STTConfig() :
    m_languageHasBeenSet(false),
    m_alternativeLanguageHasBeenSet(false),
    m_customParamHasBeenSet(false),
    m_vadSilenceTimeHasBeenSet(false),
    m_hotWordListHasBeenSet(false)
{
}

CoreInternalOutcome STTConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STTConfig.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("AlternativeLanguage") && !value["AlternativeLanguage"].IsNull())
    {
        if (!value["AlternativeLanguage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `STTConfig.AlternativeLanguage` is not array type"));

        const rapidjson::Value &tmpValue = value["AlternativeLanguage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alternativeLanguage.push_back((*itr).GetString());
        }
        m_alternativeLanguageHasBeenSet = true;
    }

    if (value.HasMember("CustomParam") && !value["CustomParam"].IsNull())
    {
        if (!value["CustomParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STTConfig.CustomParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customParam = string(value["CustomParam"].GetString());
        m_customParamHasBeenSet = true;
    }

    if (value.HasMember("VadSilenceTime") && !value["VadSilenceTime"].IsNull())
    {
        if (!value["VadSilenceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `STTConfig.VadSilenceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vadSilenceTime = value["VadSilenceTime"].GetUint64();
        m_vadSilenceTimeHasBeenSet = true;
    }

    if (value.HasMember("HotWordList") && !value["HotWordList"].IsNull())
    {
        if (!value["HotWordList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STTConfig.HotWordList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hotWordList = string(value["HotWordList"].GetString());
        m_hotWordListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void STTConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_alternativeLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternativeLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alternativeLanguage.begin(); itr != m_alternativeLanguage.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customParam.c_str(), allocator).Move(), allocator);
    }

    if (m_vadSilenceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadSilenceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vadSilenceTime, allocator);
    }

    if (m_hotWordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotWordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hotWordList.c_str(), allocator).Move(), allocator);
    }

}


string STTConfig::GetLanguage() const
{
    return m_language;
}

void STTConfig::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool STTConfig::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

vector<string> STTConfig::GetAlternativeLanguage() const
{
    return m_alternativeLanguage;
}

void STTConfig::SetAlternativeLanguage(const vector<string>& _alternativeLanguage)
{
    m_alternativeLanguage = _alternativeLanguage;
    m_alternativeLanguageHasBeenSet = true;
}

bool STTConfig::AlternativeLanguageHasBeenSet() const
{
    return m_alternativeLanguageHasBeenSet;
}

string STTConfig::GetCustomParam() const
{
    return m_customParam;
}

void STTConfig::SetCustomParam(const string& _customParam)
{
    m_customParam = _customParam;
    m_customParamHasBeenSet = true;
}

bool STTConfig::CustomParamHasBeenSet() const
{
    return m_customParamHasBeenSet;
}

uint64_t STTConfig::GetVadSilenceTime() const
{
    return m_vadSilenceTime;
}

void STTConfig::SetVadSilenceTime(const uint64_t& _vadSilenceTime)
{
    m_vadSilenceTime = _vadSilenceTime;
    m_vadSilenceTimeHasBeenSet = true;
}

bool STTConfig::VadSilenceTimeHasBeenSet() const
{
    return m_vadSilenceTimeHasBeenSet;
}

string STTConfig::GetHotWordList() const
{
    return m_hotWordList;
}

void STTConfig::SetHotWordList(const string& _hotWordList)
{
    m_hotWordList = _hotWordList;
    m_hotWordListHasBeenSet = true;
}

bool STTConfig::HotWordListHasBeenSet() const
{
    return m_hotWordListHasBeenSet;
}

