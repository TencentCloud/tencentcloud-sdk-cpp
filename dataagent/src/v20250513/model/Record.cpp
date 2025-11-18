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

#include <tencentcloud/dataagent/v20250513/model/Record.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

Record::Record() :
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_thinkHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_finalSummaryHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_feedbackHasBeenSet(false),
    m_dbInfoHasBeenSet(false),
    m_errorContextHasBeenSet(false),
    m_taskListStrHasBeenSet(false),
    m_knowledgeBaseIdsHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

CoreInternalOutcome Record::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Think") && !value["Think"].IsNull())
    {
        if (!value["Think"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.Think` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_think = string(value["Think"].GetString());
        m_thinkHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Record.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Task item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("FinalSummary") && !value["FinalSummary"].IsNull())
    {
        if (!value["FinalSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.FinalSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalSummary = string(value["FinalSummary"].GetString());
        m_finalSummaryHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Feedback") && !value["Feedback"].IsNull())
    {
        if (!value["Feedback"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Record.Feedback` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feedback = value["Feedback"].GetInt64();
        m_feedbackHasBeenSet = true;
    }

    if (value.HasMember("DbInfo") && !value["DbInfo"].IsNull())
    {
        if (!value["DbInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.DbInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbInfo = string(value["DbInfo"].GetString());
        m_dbInfoHasBeenSet = true;
    }

    if (value.HasMember("ErrorContext") && !value["ErrorContext"].IsNull())
    {
        if (!value["ErrorContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.ErrorContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorContext = string(value["ErrorContext"].GetString());
        m_errorContextHasBeenSet = true;
    }

    if (value.HasMember("TaskListStr") && !value["TaskListStr"].IsNull())
    {
        if (!value["TaskListStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.TaskListStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskListStr = string(value["TaskListStr"].GetString());
        m_taskListStrHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBaseIds") && !value["KnowledgeBaseIds"].IsNull())
    {
        if (!value["KnowledgeBaseIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Record.KnowledgeBaseIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgeBaseIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_knowledgeBaseIds.push_back((*itr).GetString());
        }
        m_knowledgeBaseIdsHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Record::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_thinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Think";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_think.c_str(), allocator).Move(), allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_finalSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feedback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feedback, allocator);
    }

    if (m_dbInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_errorContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorContext.c_str(), allocator).Move(), allocator);
    }

    if (m_taskListStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskListStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskListStr.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_knowledgeBaseIds.begin(); itr != m_knowledgeBaseIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

}


string Record::GetQuestion() const
{
    return m_question;
}

void Record::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool Record::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string Record::GetAnswer() const
{
    return m_answer;
}

void Record::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool Record::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string Record::GetThink() const
{
    return m_think;
}

void Record::SetThink(const string& _think)
{
    m_think = _think;
    m_thinkHasBeenSet = true;
}

bool Record::ThinkHasBeenSet() const
{
    return m_thinkHasBeenSet;
}

vector<Task> Record::GetTaskList() const
{
    return m_taskList;
}

void Record::SetTaskList(const vector<Task>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool Record::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

string Record::GetCreateTime() const
{
    return m_createTime;
}

void Record::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Record::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Record::GetUpdateTime() const
{
    return m_updateTime;
}

void Record::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Record::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Record::GetRecordId() const
{
    return m_recordId;
}

void Record::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool Record::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string Record::GetFinalSummary() const
{
    return m_finalSummary;
}

void Record::SetFinalSummary(const string& _finalSummary)
{
    m_finalSummary = _finalSummary;
    m_finalSummaryHasBeenSet = true;
}

bool Record::FinalSummaryHasBeenSet() const
{
    return m_finalSummaryHasBeenSet;
}

string Record::GetSessionId() const
{
    return m_sessionId;
}

void Record::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool Record::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t Record::GetFeedback() const
{
    return m_feedback;
}

void Record::SetFeedback(const int64_t& _feedback)
{
    m_feedback = _feedback;
    m_feedbackHasBeenSet = true;
}

bool Record::FeedbackHasBeenSet() const
{
    return m_feedbackHasBeenSet;
}

string Record::GetDbInfo() const
{
    return m_dbInfo;
}

void Record::SetDbInfo(const string& _dbInfo)
{
    m_dbInfo = _dbInfo;
    m_dbInfoHasBeenSet = true;
}

bool Record::DbInfoHasBeenSet() const
{
    return m_dbInfoHasBeenSet;
}

string Record::GetErrorContext() const
{
    return m_errorContext;
}

void Record::SetErrorContext(const string& _errorContext)
{
    m_errorContext = _errorContext;
    m_errorContextHasBeenSet = true;
}

bool Record::ErrorContextHasBeenSet() const
{
    return m_errorContextHasBeenSet;
}

string Record::GetTaskListStr() const
{
    return m_taskListStr;
}

void Record::SetTaskListStr(const string& _taskListStr)
{
    m_taskListStr = _taskListStr;
    m_taskListStrHasBeenSet = true;
}

bool Record::TaskListStrHasBeenSet() const
{
    return m_taskListStrHasBeenSet;
}

vector<string> Record::GetKnowledgeBaseIds() const
{
    return m_knowledgeBaseIds;
}

void Record::SetKnowledgeBaseIds(const vector<string>& _knowledgeBaseIds)
{
    m_knowledgeBaseIds = _knowledgeBaseIds;
    m_knowledgeBaseIdsHasBeenSet = true;
}

bool Record::KnowledgeBaseIdsHasBeenSet() const
{
    return m_knowledgeBaseIdsHasBeenSet;
}

string Record::GetContext() const
{
    return m_context;
}

void Record::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool Record::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

