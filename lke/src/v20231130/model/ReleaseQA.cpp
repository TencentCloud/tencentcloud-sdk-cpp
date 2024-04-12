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

#include <tencentcloud/lke/v20231130/model/ReleaseQA.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReleaseQA::ReleaseQA() :
    m_questionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_actionDescHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_qaBizIdHasBeenSet(false),
    m_docBizIdHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseQA::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ActionDesc") && !value["ActionDesc"].IsNull())
    {
        if (!value["ActionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.ActionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDesc = string(value["ActionDesc"].GetString());
        m_actionDescHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.ReleaseStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_releaseStatus = value["ReleaseStatus"].GetUint64();
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(value["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseQA.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseQA::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_actionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_sourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDesc.c_str(), allocator).Move(), allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseStatus, allocator);
    }

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseQA::GetQuestion() const
{
    return m_question;
}

void ReleaseQA::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ReleaseQA::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ReleaseQA::GetUpdateTime() const
{
    return m_updateTime;
}

void ReleaseQA::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReleaseQA::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ReleaseQA::GetAction() const
{
    return m_action;
}

void ReleaseQA::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ReleaseQA::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ReleaseQA::GetActionDesc() const
{
    return m_actionDesc;
}

void ReleaseQA::SetActionDesc(const string& _actionDesc)
{
    m_actionDesc = _actionDesc;
    m_actionDescHasBeenSet = true;
}

bool ReleaseQA::ActionDescHasBeenSet() const
{
    return m_actionDescHasBeenSet;
}

uint64_t ReleaseQA::GetSource() const
{
    return m_source;
}

void ReleaseQA::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ReleaseQA::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ReleaseQA::GetSourceDesc() const
{
    return m_sourceDesc;
}

void ReleaseQA::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool ReleaseQA::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

string ReleaseQA::GetFileName() const
{
    return m_fileName;
}

void ReleaseQA::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ReleaseQA::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ReleaseQA::GetFileType() const
{
    return m_fileType;
}

void ReleaseQA::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ReleaseQA::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ReleaseQA::GetMessage() const
{
    return m_message;
}

void ReleaseQA::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ReleaseQA::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t ReleaseQA::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ReleaseQA::SetReleaseStatus(const uint64_t& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ReleaseQA::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

string ReleaseQA::GetQaBizId() const
{
    return m_qaBizId;
}

void ReleaseQA::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool ReleaseQA::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

string ReleaseQA::GetDocBizId() const
{
    return m_docBizId;
}

void ReleaseQA::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ReleaseQA::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

