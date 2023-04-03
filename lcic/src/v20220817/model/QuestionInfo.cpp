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

#include <tencentcloud/lcic/v20220817/model/QuestionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

QuestionInfo::QuestionInfo() :
    m_questionIdHasBeenSet(false),
    m_questionContentHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_correctAnswerHasBeenSet(false),
    m_answerStatsHasBeenSet(false)
{
}

CoreInternalOutcome QuestionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuestionId") && !value["QuestionId"].IsNull())
    {
        if (!value["QuestionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.QuestionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionId = string(value["QuestionId"].GetString());
        m_questionIdHasBeenSet = true;
    }

    if (value.HasMember("QuestionContent") && !value["QuestionContent"].IsNull())
    {
        if (!value["QuestionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.QuestionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionContent = string(value["QuestionContent"].GetString());
        m_questionContentHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("CorrectAnswer") && !value["CorrectAnswer"].IsNull())
    {
        if (!value["CorrectAnswer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.CorrectAnswer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_correctAnswer = value["CorrectAnswer"].GetInt64();
        m_correctAnswerHasBeenSet = true;
    }

    if (value.HasMember("AnswerStats") && !value["AnswerStats"].IsNull())
    {
        if (!value["AnswerStats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.AnswerStats` is not array type"));

        const rapidjson::Value &tmpValue = value["AnswerStats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnswerStat item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_answerStats.push_back(item);
        }
        m_answerStatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionContent.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_correctAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_correctAnswer, allocator);
    }

    if (m_answerStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_answerStats.begin(); itr != m_answerStats.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QuestionInfo::GetQuestionId() const
{
    return m_questionId;
}

void QuestionInfo::SetQuestionId(const string& _questionId)
{
    m_questionId = _questionId;
    m_questionIdHasBeenSet = true;
}

bool QuestionInfo::QuestionIdHasBeenSet() const
{
    return m_questionIdHasBeenSet;
}

string QuestionInfo::GetQuestionContent() const
{
    return m_questionContent;
}

void QuestionInfo::SetQuestionContent(const string& _questionContent)
{
    m_questionContent = _questionContent;
    m_questionContentHasBeenSet = true;
}

bool QuestionInfo::QuestionContentHasBeenSet() const
{
    return m_questionContentHasBeenSet;
}

uint64_t QuestionInfo::GetDuration() const
{
    return m_duration;
}

void QuestionInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool QuestionInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t QuestionInfo::GetCorrectAnswer() const
{
    return m_correctAnswer;
}

void QuestionInfo::SetCorrectAnswer(const int64_t& _correctAnswer)
{
    m_correctAnswer = _correctAnswer;
    m_correctAnswerHasBeenSet = true;
}

bool QuestionInfo::CorrectAnswerHasBeenSet() const
{
    return m_correctAnswerHasBeenSet;
}

vector<AnswerStat> QuestionInfo::GetAnswerStats() const
{
    return m_answerStats;
}

void QuestionInfo::SetAnswerStats(const vector<AnswerStat>& _answerStats)
{
    m_answerStats = _answerStats;
    m_answerStatsHasBeenSet = true;
}

bool QuestionInfo::AnswerStatsHasBeenSet() const
{
    return m_answerStatsHasBeenSet;
}

