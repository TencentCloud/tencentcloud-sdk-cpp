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

#include <tencentcloud/adp/v20260520/model/QAMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QAMetadata::QAMetadata() :
    m_answerHasBeenSet(false),
    m_qaCharCountHasBeenSet(false),
    m_qaSizeHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_refFieldNameListHasBeenSet(false)
{
}

CoreInternalOutcome QAMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAMetadata.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("QaCharCount") && !value["QaCharCount"].IsNull())
    {
        if (!value["QaCharCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAMetadata.QaCharCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaCharCount = string(value["QaCharCount"].GetString());
        m_qaCharCountHasBeenSet = true;
    }

    if (value.HasMember("QaSize") && !value["QaSize"].IsNull())
    {
        if (!value["QaSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAMetadata.QaSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaSize = string(value["QaSize"].GetString());
        m_qaSizeHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAMetadata.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("RefFieldNameList") && !value["RefFieldNameList"].IsNull())
    {
        if (!value["RefFieldNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QAMetadata.RefFieldNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["RefFieldNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_refFieldNameList.push_back((*itr).GetString());
        }
        m_refFieldNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_qaCharCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaCharCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaCharCount.c_str(), allocator).Move(), allocator);
    }

    if (m_qaSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaSize.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_refFieldNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefFieldNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_refFieldNameList.begin(); itr != m_refFieldNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string QAMetadata::GetAnswer() const
{
    return m_answer;
}

void QAMetadata::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool QAMetadata::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string QAMetadata::GetQaCharCount() const
{
    return m_qaCharCount;
}

void QAMetadata::SetQaCharCount(const string& _qaCharCount)
{
    m_qaCharCount = _qaCharCount;
    m_qaCharCountHasBeenSet = true;
}

bool QAMetadata::QaCharCountHasBeenSet() const
{
    return m_qaCharCountHasBeenSet;
}

string QAMetadata::GetQaSize() const
{
    return m_qaSize;
}

void QAMetadata::SetQaSize(const string& _qaSize)
{
    m_qaSize = _qaSize;
    m_qaSizeHasBeenSet = true;
}

bool QAMetadata::QaSizeHasBeenSet() const
{
    return m_qaSizeHasBeenSet;
}

string QAMetadata::GetQuestion() const
{
    return m_question;
}

void QAMetadata::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool QAMetadata::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<string> QAMetadata::GetRefFieldNameList() const
{
    return m_refFieldNameList;
}

void QAMetadata::SetRefFieldNameList(const vector<string>& _refFieldNameList)
{
    m_refFieldNameList = _refFieldNameList;
    m_refFieldNameListHasBeenSet = true;
}

bool QAMetadata::RefFieldNameListHasBeenSet() const
{
    return m_refFieldNameListHasBeenSet;
}

