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

#include <tencentcloud/trtc/v20190722/model/AsrParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AsrParam::AsrParam() :
    m_langHasBeenSet(false),
    m_vadSilenceTimeHasBeenSet(false),
    m_hotWordListHasBeenSet(false),
    m_alternativeLanguageHasBeenSet(false),
    m_vadLevelHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_filterModalHasBeenSet(false),
    m_filterPuncHasBeenSet(false)
{
}

CoreInternalOutcome AsrParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }

    if (value.HasMember("VadSilenceTime") && !value["VadSilenceTime"].IsNull())
    {
        if (!value["VadSilenceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.VadSilenceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vadSilenceTime = value["VadSilenceTime"].GetUint64();
        m_vadSilenceTimeHasBeenSet = true;
    }

    if (value.HasMember("HotWordList") && !value["HotWordList"].IsNull())
    {
        if (!value["HotWordList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.HotWordList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hotWordList = string(value["HotWordList"].GetString());
        m_hotWordListHasBeenSet = true;
    }

    if (value.HasMember("AlternativeLanguage") && !value["AlternativeLanguage"].IsNull())
    {
        if (!value["AlternativeLanguage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrParam.AlternativeLanguage` is not array type"));

        const rapidjson::Value &tmpValue = value["AlternativeLanguage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alternativeLanguage.push_back((*itr).GetString());
        }
        m_alternativeLanguageHasBeenSet = true;
    }

    if (value.HasMember("VadLevel") && !value["VadLevel"].IsNull())
    {
        if (!value["VadLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.VadLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vadLevel = value["VadLevel"].GetUint64();
        m_vadLevelHasBeenSet = true;
    }

    if (value.HasMember("FilterDirty") && !value["FilterDirty"].IsNull())
    {
        if (!value["FilterDirty"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.FilterDirty` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterDirty = value["FilterDirty"].GetUint64();
        m_filterDirtyHasBeenSet = true;
    }

    if (value.HasMember("FilterModal") && !value["FilterModal"].IsNull())
    {
        if (!value["FilterModal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.FilterModal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterModal = value["FilterModal"].GetUint64();
        m_filterModalHasBeenSet = true;
    }

    if (value.HasMember("FilterPunc") && !value["FilterPunc"].IsNull())
    {
        if (!value["FilterPunc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrParam.FilterPunc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterPunc = value["FilterPunc"].GetUint64();
        m_filterPuncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
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

    if (m_vadLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vadLevel, allocator);
    }

    if (m_filterDirtyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDirty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterDirty, allocator);
    }

    if (m_filterModalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterModal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterModal, allocator);
    }

    if (m_filterPuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterPunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterPunc, allocator);
    }

}


string AsrParam::GetLang() const
{
    return m_lang;
}

void AsrParam::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool AsrParam::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

uint64_t AsrParam::GetVadSilenceTime() const
{
    return m_vadSilenceTime;
}

void AsrParam::SetVadSilenceTime(const uint64_t& _vadSilenceTime)
{
    m_vadSilenceTime = _vadSilenceTime;
    m_vadSilenceTimeHasBeenSet = true;
}

bool AsrParam::VadSilenceTimeHasBeenSet() const
{
    return m_vadSilenceTimeHasBeenSet;
}

string AsrParam::GetHotWordList() const
{
    return m_hotWordList;
}

void AsrParam::SetHotWordList(const string& _hotWordList)
{
    m_hotWordList = _hotWordList;
    m_hotWordListHasBeenSet = true;
}

bool AsrParam::HotWordListHasBeenSet() const
{
    return m_hotWordListHasBeenSet;
}

vector<string> AsrParam::GetAlternativeLanguage() const
{
    return m_alternativeLanguage;
}

void AsrParam::SetAlternativeLanguage(const vector<string>& _alternativeLanguage)
{
    m_alternativeLanguage = _alternativeLanguage;
    m_alternativeLanguageHasBeenSet = true;
}

bool AsrParam::AlternativeLanguageHasBeenSet() const
{
    return m_alternativeLanguageHasBeenSet;
}

uint64_t AsrParam::GetVadLevel() const
{
    return m_vadLevel;
}

void AsrParam::SetVadLevel(const uint64_t& _vadLevel)
{
    m_vadLevel = _vadLevel;
    m_vadLevelHasBeenSet = true;
}

bool AsrParam::VadLevelHasBeenSet() const
{
    return m_vadLevelHasBeenSet;
}

uint64_t AsrParam::GetFilterDirty() const
{
    return m_filterDirty;
}

void AsrParam::SetFilterDirty(const uint64_t& _filterDirty)
{
    m_filterDirty = _filterDirty;
    m_filterDirtyHasBeenSet = true;
}

bool AsrParam::FilterDirtyHasBeenSet() const
{
    return m_filterDirtyHasBeenSet;
}

uint64_t AsrParam::GetFilterModal() const
{
    return m_filterModal;
}

void AsrParam::SetFilterModal(const uint64_t& _filterModal)
{
    m_filterModal = _filterModal;
    m_filterModalHasBeenSet = true;
}

bool AsrParam::FilterModalHasBeenSet() const
{
    return m_filterModalHasBeenSet;
}

uint64_t AsrParam::GetFilterPunc() const
{
    return m_filterPunc;
}

void AsrParam::SetFilterPunc(const uint64_t& _filterPunc)
{
    m_filterPunc = _filterPunc;
    m_filterPuncHasBeenSet = true;
}

bool AsrParam::FilterPuncHasBeenSet() const
{
    return m_filterPuncHasBeenSet;
}

