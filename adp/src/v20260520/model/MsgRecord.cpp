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

#include <tencentcloud/adp/v20260520/model/MsgRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MsgRecord::MsgRecord() :
    m_answerHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_intentCategoryHasBeenSet(false),
    m_isSmartHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_replyMethodHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

CoreInternalOutcome MsgRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Intent") && !value["Intent"].IsNull())
    {
        if (!value["Intent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Intent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intent = string(value["Intent"].GetString());
        m_intentHasBeenSet = true;
    }

    if (value.HasMember("IntentCategory") && !value["IntentCategory"].IsNull())
    {
        if (!value["IntentCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.IntentCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentCategory = string(value["IntentCategory"].GetString());
        m_intentCategoryHasBeenSet = true;
    }

    if (value.HasMember("IsSmart") && !value["IsSmart"].IsNull())
    {
        if (!value["IsSmart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.IsSmart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSmart = value["IsSmart"].GetBool();
        m_isSmartHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("ReplyMethod") && !value["ReplyMethod"].IsNull())
    {
        if (!value["ReplyMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.ReplyMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replyMethod = value["ReplyMethod"].GetInt64();
        m_replyMethodHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Source` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_source.Deserialize(value["Source"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intent.c_str(), allocator).Move(), allocator);
    }

    if (m_intentCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_isSmartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSmart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSmart, allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_replyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyMethod, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

}


string MsgRecord::GetAnswer() const
{
    return m_answer;
}

void MsgRecord::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool MsgRecord::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string MsgRecord::GetAppId() const
{
    return m_appId;
}

void MsgRecord::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MsgRecord::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MsgRecord::GetCategoryId() const
{
    return m_categoryId;
}

void MsgRecord::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool MsgRecord::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string MsgRecord::GetCreateTime() const
{
    return m_createTime;
}

void MsgRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MsgRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MsgRecord::GetIntent() const
{
    return m_intent;
}

void MsgRecord::SetIntent(const string& _intent)
{
    m_intent = _intent;
    m_intentHasBeenSet = true;
}

bool MsgRecord::IntentHasBeenSet() const
{
    return m_intentHasBeenSet;
}

string MsgRecord::GetIntentCategory() const
{
    return m_intentCategory;
}

void MsgRecord::SetIntentCategory(const string& _intentCategory)
{
    m_intentCategory = _intentCategory;
    m_intentCategoryHasBeenSet = true;
}

bool MsgRecord::IntentCategoryHasBeenSet() const
{
    return m_intentCategoryHasBeenSet;
}

bool MsgRecord::GetIsSmart() const
{
    return m_isSmart;
}

void MsgRecord::SetIsSmart(const bool& _isSmart)
{
    m_isSmart = _isSmart;
    m_isSmartHasBeenSet = true;
}

bool MsgRecord::IsSmartHasBeenSet() const
{
    return m_isSmartHasBeenSet;
}

string MsgRecord::GetQuestion() const
{
    return m_question;
}

void MsgRecord::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool MsgRecord::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string MsgRecord::GetRecordId() const
{
    return m_recordId;
}

void MsgRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool MsgRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

int64_t MsgRecord::GetReplyMethod() const
{
    return m_replyMethod;
}

void MsgRecord::SetReplyMethod(const int64_t& _replyMethod)
{
    m_replyMethod = _replyMethod;
    m_replyMethodHasBeenSet = true;
}

bool MsgRecord::ReplyMethodHasBeenSet() const
{
    return m_replyMethodHasBeenSet;
}

MsgRecordResult MsgRecord::GetResult() const
{
    return m_result;
}

void MsgRecord::SetResult(const MsgRecordResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool MsgRecord::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t MsgRecord::GetScore() const
{
    return m_score;
}

void MsgRecord::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool MsgRecord::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string MsgRecord::GetSessionId() const
{
    return m_sessionId;
}

void MsgRecord::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool MsgRecord::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

MsgRecordSource MsgRecord::GetSource() const
{
    return m_source;
}

void MsgRecord::SetSource(const MsgRecordSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool MsgRecord::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string MsgRecord::GetTraceId() const
{
    return m_traceId;
}

void MsgRecord::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool MsgRecord::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

