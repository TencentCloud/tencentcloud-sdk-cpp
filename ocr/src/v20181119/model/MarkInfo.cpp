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

#include <tencentcloud/ocr/v20181119/model/MarkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MarkInfo::MarkInfo() :
    m_markItemTitleHasBeenSet(false),
    m_answerInfosHasBeenSet(false),
    m_markInfosHasBeenSet(false),
    m_questionPositionsHasBeenSet(false),
    m_questionImagePositionsHasBeenSet(false),
    m_rightAnswerHasBeenSet(false)
{
}

CoreInternalOutcome MarkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarkItemTitle") && !value["MarkItemTitle"].IsNull())
    {
        if (!value["MarkItemTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkInfo.MarkItemTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markItemTitle = string(value["MarkItemTitle"].GetString());
        m_markItemTitleHasBeenSet = true;
    }

    if (value.HasMember("AnswerInfos") && !value["AnswerInfos"].IsNull())
    {
        if (!value["AnswerInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MarkInfo.AnswerInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AnswerInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnswerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_answerInfos.push_back(item);
        }
        m_answerInfosHasBeenSet = true;
    }

    if (value.HasMember("MarkInfos") && !value["MarkInfos"].IsNull())
    {
        if (!value["MarkInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MarkInfo.MarkInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["MarkInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MarkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_markInfos.push_back(item);
        }
        m_markInfosHasBeenSet = true;
    }

    if (value.HasMember("QuestionPositions") && !value["QuestionPositions"].IsNull())
    {
        if (!value["QuestionPositions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MarkInfo.QuestionPositions` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionPositions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_questionPositions.push_back((*itr).GetInt64());
        }
        m_questionPositionsHasBeenSet = true;
    }

    if (value.HasMember("QuestionImagePositions") && !value["QuestionImagePositions"].IsNull())
    {
        if (!value["QuestionImagePositions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MarkInfo.QuestionImagePositions` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionImagePositions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Positions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questionImagePositions.push_back(item);
        }
        m_questionImagePositionsHasBeenSet = true;
    }

    if (value.HasMember("RightAnswer") && !value["RightAnswer"].IsNull())
    {
        if (!value["RightAnswer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkInfo.RightAnswer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rightAnswer = string(value["RightAnswer"].GetString());
        m_rightAnswerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MarkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_markItemTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkItemTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markItemTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_answerInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_answerInfos.begin(); itr != m_answerInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_markInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_markInfos.begin(); itr != m_markInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_questionPositionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionPositions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_questionPositions.begin(); itr != m_questionPositions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_questionImagePositionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionImagePositions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questionImagePositions.begin(); itr != m_questionImagePositions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rightAnswer.c_str(), allocator).Move(), allocator);
    }

}


string MarkInfo::GetMarkItemTitle() const
{
    return m_markItemTitle;
}

void MarkInfo::SetMarkItemTitle(const string& _markItemTitle)
{
    m_markItemTitle = _markItemTitle;
    m_markItemTitleHasBeenSet = true;
}

bool MarkInfo::MarkItemTitleHasBeenSet() const
{
    return m_markItemTitleHasBeenSet;
}

vector<AnswerInfo> MarkInfo::GetAnswerInfos() const
{
    return m_answerInfos;
}

void MarkInfo::SetAnswerInfos(const vector<AnswerInfo>& _answerInfos)
{
    m_answerInfos = _answerInfos;
    m_answerInfosHasBeenSet = true;
}

bool MarkInfo::AnswerInfosHasBeenSet() const
{
    return m_answerInfosHasBeenSet;
}

vector<MarkInfo> MarkInfo::GetMarkInfos() const
{
    return m_markInfos;
}

void MarkInfo::SetMarkInfos(const vector<MarkInfo>& _markInfos)
{
    m_markInfos = _markInfos;
    m_markInfosHasBeenSet = true;
}

bool MarkInfo::MarkInfosHasBeenSet() const
{
    return m_markInfosHasBeenSet;
}

vector<int64_t> MarkInfo::GetQuestionPositions() const
{
    return m_questionPositions;
}

void MarkInfo::SetQuestionPositions(const vector<int64_t>& _questionPositions)
{
    m_questionPositions = _questionPositions;
    m_questionPositionsHasBeenSet = true;
}

bool MarkInfo::QuestionPositionsHasBeenSet() const
{
    return m_questionPositionsHasBeenSet;
}

vector<Positions> MarkInfo::GetQuestionImagePositions() const
{
    return m_questionImagePositions;
}

void MarkInfo::SetQuestionImagePositions(const vector<Positions>& _questionImagePositions)
{
    m_questionImagePositions = _questionImagePositions;
    m_questionImagePositionsHasBeenSet = true;
}

bool MarkInfo::QuestionImagePositionsHasBeenSet() const
{
    return m_questionImagePositionsHasBeenSet;
}

string MarkInfo::GetRightAnswer() const
{
    return m_rightAnswer;
}

void MarkInfo::SetRightAnswer(const string& _rightAnswer)
{
    m_rightAnswer = _rightAnswer;
    m_rightAnswerHasBeenSet = true;
}

bool MarkInfo::RightAnswerHasBeenSet() const
{
    return m_rightAnswerHasBeenSet;
}

