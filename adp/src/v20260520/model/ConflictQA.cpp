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

#include <tencentcloud/adp/v20260520/model/ConflictQA.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConflictQA::ConflictQA() :
    m_answerHasBeenSet(false),
    m_effectiveDomainHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_qaIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ConflictQA::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDomain") && !value["EffectiveDomain"].IsNull())
    {
        if (!value["EffectiveDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.EffectiveDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDomain = value["EffectiveDomain"].GetInt64();
        m_effectiveDomainHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("QaId") && !value["QaId"].IsNull())
    {
        if (!value["QaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.QaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaId = string(value["QaId"].GetString());
        m_qaIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQA.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConflictQA::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDomain, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_qaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ConflictQA::GetAnswer() const
{
    return m_answer;
}

void ConflictQA::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ConflictQA::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

int64_t ConflictQA::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void ConflictQA::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool ConflictQA::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

string ConflictQA::GetFileName() const
{
    return m_fileName;
}

void ConflictQA::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConflictQA::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConflictQA::GetFileType() const
{
    return m_fileType;
}

void ConflictQA::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ConflictQA::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ConflictQA::GetQaId() const
{
    return m_qaId;
}

void ConflictQA::SetQaId(const string& _qaId)
{
    m_qaId = _qaId;
    m_qaIdHasBeenSet = true;
}

bool ConflictQA::QaIdHasBeenSet() const
{
    return m_qaIdHasBeenSet;
}

string ConflictQA::GetQuestion() const
{
    return m_question;
}

void ConflictQA::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ConflictQA::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

int64_t ConflictQA::GetSourceType() const
{
    return m_sourceType;
}

void ConflictQA::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ConflictQA::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ConflictQA::GetUpdateTime() const
{
    return m_updateTime;
}

void ConflictQA::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConflictQA::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

