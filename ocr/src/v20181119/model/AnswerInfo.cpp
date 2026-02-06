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

#include <tencentcloud/ocr/v20181119/model/AnswerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AnswerInfo::AnswerInfo() :
    m_handwriteInfoHasBeenSet(false),
    m_isCorrectHasBeenSet(false),
    m_answerAnalysisHasBeenSet(false),
    m_handwriteInfoPositionsHasBeenSet(false),
    m_rightAnswerHasBeenSet(false),
    m_knowledgePointsHasBeenSet(false)
{
}

CoreInternalOutcome AnswerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HandwriteInfo") && !value["HandwriteInfo"].IsNull())
    {
        if (!value["HandwriteInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.HandwriteInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handwriteInfo = string(value["HandwriteInfo"].GetString());
        m_handwriteInfoHasBeenSet = true;
    }

    if (value.HasMember("IsCorrect") && !value["IsCorrect"].IsNull())
    {
        if (!value["IsCorrect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.IsCorrect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCorrect = value["IsCorrect"].GetBool();
        m_isCorrectHasBeenSet = true;
    }

    if (value.HasMember("AnswerAnalysis") && !value["AnswerAnalysis"].IsNull())
    {
        if (!value["AnswerAnalysis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.AnswerAnalysis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answerAnalysis = string(value["AnswerAnalysis"].GetString());
        m_answerAnalysisHasBeenSet = true;
    }

    if (value.HasMember("HandwriteInfoPositions") && !value["HandwriteInfoPositions"].IsNull())
    {
        if (!value["HandwriteInfoPositions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.HandwriteInfoPositions` is not array type"));

        const rapidjson::Value &tmpValue = value["HandwriteInfoPositions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_handwriteInfoPositions.push_back((*itr).GetInt64());
        }
        m_handwriteInfoPositionsHasBeenSet = true;
    }

    if (value.HasMember("RightAnswer") && !value["RightAnswer"].IsNull())
    {
        if (!value["RightAnswer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.RightAnswer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rightAnswer = string(value["RightAnswer"].GetString());
        m_rightAnswerHasBeenSet = true;
    }

    if (value.HasMember("KnowledgePoints") && !value["KnowledgePoints"].IsNull())
    {
        if (!value["KnowledgePoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.KnowledgePoints` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgePoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_knowledgePoints.push_back((*itr).GetString());
        }
        m_knowledgePointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnswerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_handwriteInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandwriteInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handwriteInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isCorrectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCorrect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCorrect, allocator);
    }

    if (m_answerAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answerAnalysis.c_str(), allocator).Move(), allocator);
    }

    if (m_handwriteInfoPositionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandwriteInfoPositions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handwriteInfoPositions.begin(); itr != m_handwriteInfoPositions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_rightAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rightAnswer.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgePointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgePoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_knowledgePoints.begin(); itr != m_knowledgePoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AnswerInfo::GetHandwriteInfo() const
{
    return m_handwriteInfo;
}

void AnswerInfo::SetHandwriteInfo(const string& _handwriteInfo)
{
    m_handwriteInfo = _handwriteInfo;
    m_handwriteInfoHasBeenSet = true;
}

bool AnswerInfo::HandwriteInfoHasBeenSet() const
{
    return m_handwriteInfoHasBeenSet;
}

bool AnswerInfo::GetIsCorrect() const
{
    return m_isCorrect;
}

void AnswerInfo::SetIsCorrect(const bool& _isCorrect)
{
    m_isCorrect = _isCorrect;
    m_isCorrectHasBeenSet = true;
}

bool AnswerInfo::IsCorrectHasBeenSet() const
{
    return m_isCorrectHasBeenSet;
}

string AnswerInfo::GetAnswerAnalysis() const
{
    return m_answerAnalysis;
}

void AnswerInfo::SetAnswerAnalysis(const string& _answerAnalysis)
{
    m_answerAnalysis = _answerAnalysis;
    m_answerAnalysisHasBeenSet = true;
}

bool AnswerInfo::AnswerAnalysisHasBeenSet() const
{
    return m_answerAnalysisHasBeenSet;
}

vector<int64_t> AnswerInfo::GetHandwriteInfoPositions() const
{
    return m_handwriteInfoPositions;
}

void AnswerInfo::SetHandwriteInfoPositions(const vector<int64_t>& _handwriteInfoPositions)
{
    m_handwriteInfoPositions = _handwriteInfoPositions;
    m_handwriteInfoPositionsHasBeenSet = true;
}

bool AnswerInfo::HandwriteInfoPositionsHasBeenSet() const
{
    return m_handwriteInfoPositionsHasBeenSet;
}

string AnswerInfo::GetRightAnswer() const
{
    return m_rightAnswer;
}

void AnswerInfo::SetRightAnswer(const string& _rightAnswer)
{
    m_rightAnswer = _rightAnswer;
    m_rightAnswerHasBeenSet = true;
}

bool AnswerInfo::RightAnswerHasBeenSet() const
{
    return m_rightAnswerHasBeenSet;
}

vector<string> AnswerInfo::GetKnowledgePoints() const
{
    return m_knowledgePoints;
}

void AnswerInfo::SetKnowledgePoints(const vector<string>& _knowledgePoints)
{
    m_knowledgePoints = _knowledgePoints;
    m_knowledgePointsHasBeenSet = true;
}

bool AnswerInfo::KnowledgePointsHasBeenSet() const
{
    return m_knowledgePointsHasBeenSet;
}

