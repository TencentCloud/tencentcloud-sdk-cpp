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

#include <tencentcloud/lke/v20231130/model/UnsatisfiedReply.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UnsatisfiedReply::UnsatisfiedReply() :
    m_replyBizIdHasBeenSet(false),
    m_recordBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

CoreInternalOutcome UnsatisfiedReply::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplyBizId") && !value["ReplyBizId"].IsNull())
    {
        if (!value["ReplyBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnsatisfiedReply.ReplyBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyBizId = string(value["ReplyBizId"].GetString());
        m_replyBizIdHasBeenSet = true;
    }

    if (value.HasMember("RecordBizId") && !value["RecordBizId"].IsNull())
    {
        if (!value["RecordBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnsatisfiedReply.RecordBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordBizId = string(value["RecordBizId"].GetString());
        m_recordBizIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnsatisfiedReply.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnsatisfiedReply.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Reasons") && !value["Reasons"].IsNull())
    {
        if (!value["Reasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnsatisfiedReply.Reasons` is not array type"));

        const rapidjson::Value &tmpValue = value["Reasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reasons.push_back((*itr).GetString());
        }
        m_reasonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnsatisfiedReply::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replyBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replyBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasons.begin(); itr != m_reasons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string UnsatisfiedReply::GetReplyBizId() const
{
    return m_replyBizId;
}

void UnsatisfiedReply::SetReplyBizId(const string& _replyBizId)
{
    m_replyBizId = _replyBizId;
    m_replyBizIdHasBeenSet = true;
}

bool UnsatisfiedReply::ReplyBizIdHasBeenSet() const
{
    return m_replyBizIdHasBeenSet;
}

string UnsatisfiedReply::GetRecordBizId() const
{
    return m_recordBizId;
}

void UnsatisfiedReply::SetRecordBizId(const string& _recordBizId)
{
    m_recordBizId = _recordBizId;
    m_recordBizIdHasBeenSet = true;
}

bool UnsatisfiedReply::RecordBizIdHasBeenSet() const
{
    return m_recordBizIdHasBeenSet;
}

string UnsatisfiedReply::GetQuestion() const
{
    return m_question;
}

void UnsatisfiedReply::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool UnsatisfiedReply::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string UnsatisfiedReply::GetAnswer() const
{
    return m_answer;
}

void UnsatisfiedReply::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool UnsatisfiedReply::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

vector<string> UnsatisfiedReply::GetReasons() const
{
    return m_reasons;
}

void UnsatisfiedReply::SetReasons(const vector<string>& _reasons)
{
    m_reasons = _reasons;
    m_reasonsHasBeenSet = true;
}

bool UnsatisfiedReply::ReasonsHasBeenSet() const
{
    return m_reasonsHasBeenSet;
}

