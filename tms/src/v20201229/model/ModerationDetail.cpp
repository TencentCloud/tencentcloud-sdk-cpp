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

#include <tencentcloud/tms/v20201229/model/ModerationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

ModerationDetail::ModerationDetail() :
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_tcLabelCodesHasBeenSet(false),
    m_libResultsHasBeenSet(false),
    m_modelResultsHasBeenSet(false),
    m_sentimentResultHasBeenSet(false)
{
}

CoreInternalOutcome ModerationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.Label` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_label.Deserialize(value["Label"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("TcLabelCodes") && !value["TcLabelCodes"].IsNull())
    {
        if (!value["TcLabelCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.TcLabelCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["TcLabelCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tcLabelCodes.push_back((*itr).GetString());
        }
        m_tcLabelCodesHasBeenSet = true;
    }

    if (value.HasMember("LibResults") && !value["LibResults"].IsNull())
    {
        if (!value["LibResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.LibResults` is not array type"));

        const rapidjson::Value &tmpValue = value["LibResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LibCheckResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_libResults.push_back(item);
        }
        m_libResultsHasBeenSet = true;
    }

    if (value.HasMember("ModelResults") && !value["ModelResults"].IsNull())
    {
        if (!value["ModelResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.ModelResults` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelResults.push_back(item);
        }
        m_modelResultsHasBeenSet = true;
    }

    if (value.HasMember("SentimentResult") && !value["SentimentResult"].IsNull())
    {
        if (!value["SentimentResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationDetail.SentimentResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sentimentResult.Deserialize(value["SentimentResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sentimentResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModerationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_label.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_tcLabelCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcLabelCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tcLabelCodes.begin(); itr != m_tcLabelCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_libResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_libResults.begin(); itr != m_libResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelResults.begin(); itr != m_modelResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sentimentResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentimentResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sentimentResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModerationDetail::GetSuggestion() const
{
    return m_suggestion;
}

void ModerationDetail::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ModerationDetail::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

LabelGrade ModerationDetail::GetLabel() const
{
    return m_label;
}

void ModerationDetail::SetLabel(const LabelGrade& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ModerationDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t ModerationDetail::GetScore() const
{
    return m_score;
}

void ModerationDetail::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ModerationDetail::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> ModerationDetail::GetTcLabelCodes() const
{
    return m_tcLabelCodes;
}

void ModerationDetail::SetTcLabelCodes(const vector<string>& _tcLabelCodes)
{
    m_tcLabelCodes = _tcLabelCodes;
    m_tcLabelCodesHasBeenSet = true;
}

bool ModerationDetail::TcLabelCodesHasBeenSet() const
{
    return m_tcLabelCodesHasBeenSet;
}

vector<LibCheckResult> ModerationDetail::GetLibResults() const
{
    return m_libResults;
}

void ModerationDetail::SetLibResults(const vector<LibCheckResult>& _libResults)
{
    m_libResults = _libResults;
    m_libResultsHasBeenSet = true;
}

bool ModerationDetail::LibResultsHasBeenSet() const
{
    return m_libResultsHasBeenSet;
}

vector<ModelResult> ModerationDetail::GetModelResults() const
{
    return m_modelResults;
}

void ModerationDetail::SetModelResults(const vector<ModelResult>& _modelResults)
{
    m_modelResults = _modelResults;
    m_modelResultsHasBeenSet = true;
}

bool ModerationDetail::ModelResultsHasBeenSet() const
{
    return m_modelResultsHasBeenSet;
}

SentimentDetail ModerationDetail::GetSentimentResult() const
{
    return m_sentimentResult;
}

void ModerationDetail::SetSentimentResult(const SentimentDetail& _sentimentResult)
{
    m_sentimentResult = _sentimentResult;
    m_sentimentResultHasBeenSet = true;
}

bool ModerationDetail::SentimentResultHasBeenSet() const
{
    return m_sentimentResultHasBeenSet;
}

