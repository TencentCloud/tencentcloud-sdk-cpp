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

#include <tencentcloud/trtc/v20190722/model/TranslationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranslationConfig::TranslationConfig() :
    m_targetLanguagesHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_terminologyHasBeenSet(false)
{
}

CoreInternalOutcome TranslationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetLanguages") && !value["TargetLanguages"].IsNull())
    {
        if (!value["TargetLanguages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranslationConfig.TargetLanguages` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetLanguages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetLanguages.push_back((*itr).GetString());
        }
        m_targetLanguagesHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationConfig.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("TTSConfig") && !value["TTSConfig"].IsNull())
    {
        if (!value["TTSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationConfig.TTSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSConfig.Deserialize(value["TTSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSConfigHasBeenSet = true;
    }

    if (value.HasMember("Terminology") && !value["Terminology"].IsNull())
    {
        if (!value["Terminology"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranslationConfig.Terminology` is not array type"));

        const rapidjson::Value &tmpValue = value["Terminology"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Terminology item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_terminology.push_back(item);
        }
        m_terminologyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetLanguagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetLanguages.begin(); itr != m_targetLanguages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terminologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Terminology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_terminology.begin(); itr != m_terminology.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> TranslationConfig::GetTargetLanguages() const
{
    return m_targetLanguages;
}

void TranslationConfig::SetTargetLanguages(const vector<string>& _targetLanguages)
{
    m_targetLanguages = _targetLanguages;
    m_targetLanguagesHasBeenSet = true;
}

bool TranslationConfig::TargetLanguagesHasBeenSet() const
{
    return m_targetLanguagesHasBeenSet;
}

uint64_t TranslationConfig::GetMode() const
{
    return m_mode;
}

void TranslationConfig::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TranslationConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

TTSConfig TranslationConfig::GetTTSConfig() const
{
    return m_tTSConfig;
}

void TranslationConfig::SetTTSConfig(const TTSConfig& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool TranslationConfig::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

vector<Terminology> TranslationConfig::GetTerminology() const
{
    return m_terminology;
}

void TranslationConfig::SetTerminology(const vector<Terminology>& _terminology)
{
    m_terminology = _terminology;
    m_terminologyHasBeenSet = true;
}

bool TranslationConfig::TerminologyHasBeenSet() const
{
    return m_terminologyHasBeenSet;
}

