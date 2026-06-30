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

#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeComprehensionConfig::SeeComprehensionConfig() :
    m_detectTypesHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_outputLangHasBeenSet(false),
    m_alternativeOutputLangHasBeenSet(false),
    m_multiCameraLayoutHasBeenSet(false),
    m_customDetectQueriesHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_enableKeywordsHasBeenSet(false)
{
}

CoreInternalOutcome SeeComprehensionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectTypes") && !value["DetectTypes"].IsNull())
    {
        if (!value["DetectTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.DetectTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectTypes.push_back((*itr).GetString());
        }
        m_detectTypesHasBeenSet = true;
    }

    if (value.HasMember("EnableSearch") && !value["EnableSearch"].IsNull())
    {
        if (!value["EnableSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.EnableSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSearch = value["EnableSearch"].GetBool();
        m_enableSearchHasBeenSet = true;
    }

    if (value.HasMember("OutputLang") && !value["OutputLang"].IsNull())
    {
        if (!value["OutputLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.OutputLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputLang = string(value["OutputLang"].GetString());
        m_outputLangHasBeenSet = true;
    }

    if (value.HasMember("AlternativeOutputLang") && !value["AlternativeOutputLang"].IsNull())
    {
        if (!value["AlternativeOutputLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.AlternativeOutputLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternativeOutputLang = string(value["AlternativeOutputLang"].GetString());
        m_alternativeOutputLangHasBeenSet = true;
    }

    if (value.HasMember("MultiCameraLayout") && !value["MultiCameraLayout"].IsNull())
    {
        if (!value["MultiCameraLayout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.MultiCameraLayout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiCameraLayout = string(value["MultiCameraLayout"].GetString());
        m_multiCameraLayoutHasBeenSet = true;
    }

    if (value.HasMember("CustomDetectQueries") && !value["CustomDetectQueries"].IsNull())
    {
        if (!value["CustomDetectQueries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.CustomDetectQueries` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomDetectQueries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VisionCustomDetectQuery item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customDetectQueries.push_back(item);
        }
        m_customDetectQueriesHasBeenSet = true;
    }

    if (value.HasMember("MaxDuration") && !value["MaxDuration"].IsNull())
    {
        if (!value["MaxDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.MaxDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDuration = value["MaxDuration"].GetInt64();
        m_maxDurationHasBeenSet = true;
    }

    if (value.HasMember("EnableKeywords") && !value["EnableKeywords"].IsNull())
    {
        if (!value["EnableKeywords"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionConfig.EnableKeywords` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableKeywords = value["EnableKeywords"].GetBool();
        m_enableKeywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeComprehensionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectTypes.begin(); itr != m_detectTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_outputLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputLang.c_str(), allocator).Move(), allocator);
    }

    if (m_alternativeOutputLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternativeOutputLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alternativeOutputLang.c_str(), allocator).Move(), allocator);
    }

    if (m_multiCameraLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiCameraLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiCameraLayout.c_str(), allocator).Move(), allocator);
    }

    if (m_customDetectQueriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDetectQueries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customDetectQueries.begin(); itr != m_customDetectQueries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDuration, allocator);
    }

    if (m_enableKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKeywords, allocator);
    }

}


vector<string> SeeComprehensionConfig::GetDetectTypes() const
{
    return m_detectTypes;
}

void SeeComprehensionConfig::SetDetectTypes(const vector<string>& _detectTypes)
{
    m_detectTypes = _detectTypes;
    m_detectTypesHasBeenSet = true;
}

bool SeeComprehensionConfig::DetectTypesHasBeenSet() const
{
    return m_detectTypesHasBeenSet;
}

bool SeeComprehensionConfig::GetEnableSearch() const
{
    return m_enableSearch;
}

void SeeComprehensionConfig::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool SeeComprehensionConfig::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

string SeeComprehensionConfig::GetOutputLang() const
{
    return m_outputLang;
}

void SeeComprehensionConfig::SetOutputLang(const string& _outputLang)
{
    m_outputLang = _outputLang;
    m_outputLangHasBeenSet = true;
}

bool SeeComprehensionConfig::OutputLangHasBeenSet() const
{
    return m_outputLangHasBeenSet;
}

string SeeComprehensionConfig::GetAlternativeOutputLang() const
{
    return m_alternativeOutputLang;
}

void SeeComprehensionConfig::SetAlternativeOutputLang(const string& _alternativeOutputLang)
{
    m_alternativeOutputLang = _alternativeOutputLang;
    m_alternativeOutputLangHasBeenSet = true;
}

bool SeeComprehensionConfig::AlternativeOutputLangHasBeenSet() const
{
    return m_alternativeOutputLangHasBeenSet;
}

string SeeComprehensionConfig::GetMultiCameraLayout() const
{
    return m_multiCameraLayout;
}

void SeeComprehensionConfig::SetMultiCameraLayout(const string& _multiCameraLayout)
{
    m_multiCameraLayout = _multiCameraLayout;
    m_multiCameraLayoutHasBeenSet = true;
}

bool SeeComprehensionConfig::MultiCameraLayoutHasBeenSet() const
{
    return m_multiCameraLayoutHasBeenSet;
}

vector<VisionCustomDetectQuery> SeeComprehensionConfig::GetCustomDetectQueries() const
{
    return m_customDetectQueries;
}

void SeeComprehensionConfig::SetCustomDetectQueries(const vector<VisionCustomDetectQuery>& _customDetectQueries)
{
    m_customDetectQueries = _customDetectQueries;
    m_customDetectQueriesHasBeenSet = true;
}

bool SeeComprehensionConfig::CustomDetectQueriesHasBeenSet() const
{
    return m_customDetectQueriesHasBeenSet;
}

int64_t SeeComprehensionConfig::GetMaxDuration() const
{
    return m_maxDuration;
}

void SeeComprehensionConfig::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool SeeComprehensionConfig::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

bool SeeComprehensionConfig::GetEnableKeywords() const
{
    return m_enableKeywords;
}

void SeeComprehensionConfig::SetEnableKeywords(const bool& _enableKeywords)
{
    m_enableKeywords = _enableKeywords;
    m_enableKeywordsHasBeenSet = true;
}

bool SeeComprehensionConfig::EnableKeywordsHasBeenSet() const
{
    return m_enableKeywordsHasBeenSet;
}

