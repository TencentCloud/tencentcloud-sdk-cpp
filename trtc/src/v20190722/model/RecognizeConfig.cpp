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

#include <tencentcloud/trtc/v20190722/model/RecognizeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RecognizeConfig::RecognizeConfig() :
    m_languageHasBeenSet(false),
    m_alternativeLanguageHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_translationLanguageHasBeenSet(false),
    m_hotWordListHasBeenSet(false),
    m_vadSilenceTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("AlternativeLanguage") && !value["AlternativeLanguage"].IsNull())
    {
        if (!value["AlternativeLanguage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.AlternativeLanguage` is not array type"));

        const rapidjson::Value &tmpValue = value["AlternativeLanguage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alternativeLanguage.push_back((*itr).GetString());
        }
        m_alternativeLanguageHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("TranslationLanguage") && !value["TranslationLanguage"].IsNull())
    {
        if (!value["TranslationLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.TranslationLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationLanguage = string(value["TranslationLanguage"].GetString());
        m_translationLanguageHasBeenSet = true;
    }

    if (value.HasMember("HotWordList") && !value["HotWordList"].IsNull())
    {
        if (!value["HotWordList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.HotWordList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hotWordList = string(value["HotWordList"].GetString());
        m_hotWordListHasBeenSet = true;
    }

    if (value.HasMember("VadSilenceTime") && !value["VadSilenceTime"].IsNull())
    {
        if (!value["VadSilenceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeConfig.VadSilenceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vadSilenceTime = value["VadSilenceTime"].GetUint64();
        m_vadSilenceTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecognizeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_translationLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_hotWordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotWordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hotWordList.c_str(), allocator).Move(), allocator);
    }

    if (m_vadSilenceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadSilenceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vadSilenceTime, allocator);
    }

}


string RecognizeConfig::GetLanguage() const
{
    return m_language;
}

void RecognizeConfig::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool RecognizeConfig::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

vector<string> RecognizeConfig::GetAlternativeLanguage() const
{
    return m_alternativeLanguage;
}

void RecognizeConfig::SetAlternativeLanguage(const vector<string>& _alternativeLanguage)
{
    m_alternativeLanguage = _alternativeLanguage;
    m_alternativeLanguageHasBeenSet = true;
}

bool RecognizeConfig::AlternativeLanguageHasBeenSet() const
{
    return m_alternativeLanguageHasBeenSet;
}

string RecognizeConfig::GetModel() const
{
    return m_model;
}

void RecognizeConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool RecognizeConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string RecognizeConfig::GetTranslationLanguage() const
{
    return m_translationLanguage;
}

void RecognizeConfig::SetTranslationLanguage(const string& _translationLanguage)
{
    m_translationLanguage = _translationLanguage;
    m_translationLanguageHasBeenSet = true;
}

bool RecognizeConfig::TranslationLanguageHasBeenSet() const
{
    return m_translationLanguageHasBeenSet;
}

string RecognizeConfig::GetHotWordList() const
{
    return m_hotWordList;
}

void RecognizeConfig::SetHotWordList(const string& _hotWordList)
{
    m_hotWordList = _hotWordList;
    m_hotWordListHasBeenSet = true;
}

bool RecognizeConfig::HotWordListHasBeenSet() const
{
    return m_hotWordListHasBeenSet;
}

uint64_t RecognizeConfig::GetVadSilenceTime() const
{
    return m_vadSilenceTime;
}

void RecognizeConfig::SetVadSilenceTime(const uint64_t& _vadSilenceTime)
{
    m_vadSilenceTime = _vadSilenceTime;
    m_vadSilenceTimeHasBeenSet = true;
}

bool RecognizeConfig::VadSilenceTimeHasBeenSet() const
{
    return m_vadSilenceTimeHasBeenSet;
}

