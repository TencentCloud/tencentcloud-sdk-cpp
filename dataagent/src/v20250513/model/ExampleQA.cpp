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

#include <tencentcloud/dataagent/v20250513/model/ExampleQA.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ExampleQA::ExampleQA() :
    m_exampleIdHasBeenSet(false),
    m_questionsHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExampleQA::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExampleId") && !value["ExampleId"].IsNull())
    {
        if (!value["ExampleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleQA.ExampleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleId = string(value["ExampleId"].GetString());
        m_exampleIdHasBeenSet = true;
    }

    if (value.HasMember("Questions") && !value["Questions"].IsNull())
    {
        if (!value["Questions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExampleQA.Questions` is not array type"));

        const rapidjson::Value &tmpValue = value["Questions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_questions.push_back((*itr).GetString());
        }
        m_questionsHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleQA.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleQA.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleQA.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleQA.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExampleQA::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exampleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exampleId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Questions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_questions.begin(); itr != m_questions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ExampleQA::GetExampleId() const
{
    return m_exampleId;
}

void ExampleQA::SetExampleId(const string& _exampleId)
{
    m_exampleId = _exampleId;
    m_exampleIdHasBeenSet = true;
}

bool ExampleQA::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

vector<string> ExampleQA::GetQuestions() const
{
    return m_questions;
}

void ExampleQA::SetQuestions(const vector<string>& _questions)
{
    m_questions = _questions;
    m_questionsHasBeenSet = true;
}

bool ExampleQA::QuestionsHasBeenSet() const
{
    return m_questionsHasBeenSet;
}

string ExampleQA::GetAnswer() const
{
    return m_answer;
}

void ExampleQA::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ExampleQA::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string ExampleQA::GetType() const
{
    return m_type;
}

void ExampleQA::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExampleQA::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ExampleQA::GetCreateTime() const
{
    return m_createTime;
}

void ExampleQA::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExampleQA::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ExampleQA::GetUpdateTime() const
{
    return m_updateTime;
}

void ExampleQA::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ExampleQA::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

