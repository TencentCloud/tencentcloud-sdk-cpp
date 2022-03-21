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

#include <tencentcloud/vod/v20180717/model/ContentReviewOcrResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ContentReviewOcrResult::ContentReviewOcrResult() :
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordSetHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false)
{
}

CoreInternalOutcome ContentReviewOcrResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewOcrResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewOcrResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("KeywordSet") && !value["KeywordSet"].IsNull())
    {
        if (!value["KeywordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContentReviewOcrResult.KeywordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywordSet.push_back((*itr).GetString());
        }
        m_keywordSetHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContentReviewOcrResult.AreaCoordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentReviewOcrResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywordSet.begin(); itr != m_keywordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_areaCoordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCoordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordSet.begin(); itr != m_areaCoordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


double ContentReviewOcrResult::GetConfidence() const
{
    return m_confidence;
}

void ContentReviewOcrResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ContentReviewOcrResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string ContentReviewOcrResult::GetSuggestion() const
{
    return m_suggestion;
}

void ContentReviewOcrResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ContentReviewOcrResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<string> ContentReviewOcrResult::GetKeywordSet() const
{
    return m_keywordSet;
}

void ContentReviewOcrResult::SetKeywordSet(const vector<string>& _keywordSet)
{
    m_keywordSet = _keywordSet;
    m_keywordSetHasBeenSet = true;
}

bool ContentReviewOcrResult::KeywordSetHasBeenSet() const
{
    return m_keywordSetHasBeenSet;
}

vector<int64_t> ContentReviewOcrResult::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void ContentReviewOcrResult::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool ContentReviewOcrResult::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

