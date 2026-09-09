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

#include <tencentcloud/dataagent/v20250513/model/RecordList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

RecordList::RecordList() :
    m_contextHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_feedbackHasBeenSet(false),
    m_errorContextHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome RecordList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Feedback") && !value["Feedback"].IsNull())
    {
        if (!value["Feedback"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.Feedback` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feedback = value["Feedback"].GetInt64();
        m_feedbackHasBeenSet = true;
    }

    if (value.HasMember("ErrorContext") && !value["ErrorContext"].IsNull())
    {
        if (!value["ErrorContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.ErrorContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorContext = string(value["ErrorContext"].GetString());
        m_errorContextHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordList.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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

    if (m_feedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feedback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feedback, allocator);
    }

    if (m_errorContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorContext.c_str(), allocator).Move(), allocator);
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

}


string RecordList::GetContext() const
{
    return m_context;
}

void RecordList::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool RecordList::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string RecordList::GetRecordId() const
{
    return m_recordId;
}

void RecordList::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool RecordList::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string RecordList::GetTraceId() const
{
    return m_traceId;
}

void RecordList::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool RecordList::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string RecordList::GetSessionId() const
{
    return m_sessionId;
}

void RecordList::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool RecordList::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string RecordList::GetQuestion() const
{
    return m_question;
}

void RecordList::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool RecordList::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string RecordList::GetAnswer() const
{
    return m_answer;
}

void RecordList::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool RecordList::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

int64_t RecordList::GetFeedback() const
{
    return m_feedback;
}

void RecordList::SetFeedback(const int64_t& _feedback)
{
    m_feedback = _feedback;
    m_feedbackHasBeenSet = true;
}

bool RecordList::FeedbackHasBeenSet() const
{
    return m_feedbackHasBeenSet;
}

string RecordList::GetErrorContext() const
{
    return m_errorContext;
}

void RecordList::SetErrorContext(const string& _errorContext)
{
    m_errorContext = _errorContext;
    m_errorContextHasBeenSet = true;
}

bool RecordList::ErrorContextHasBeenSet() const
{
    return m_errorContextHasBeenSet;
}

string RecordList::GetCreateTime() const
{
    return m_createTime;
}

void RecordList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RecordList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RecordList::GetUpdateTime() const
{
    return m_updateTime;
}

void RecordList::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RecordList::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RecordList::GetModel() const
{
    return m_model;
}

void RecordList::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool RecordList::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

