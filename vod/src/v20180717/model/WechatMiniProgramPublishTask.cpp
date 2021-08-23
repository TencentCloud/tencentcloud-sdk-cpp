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

#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WechatMiniProgramPublishTask::WechatMiniProgramPublishTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_sourceDefinitionHasBeenSet(false),
    m_publishResultHasBeenSet(false)
{
}

CoreInternalOutcome WechatMiniProgramPublishTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("SourceDefinition") && !value["SourceDefinition"].IsNull())
    {
        if (!value["SourceDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.SourceDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDefinition = value["SourceDefinition"].GetUint64();
        m_sourceDefinitionHasBeenSet = true;
    }

    if (value.HasMember("PublishResult") && !value["PublishResult"].IsNull())
    {
        if (!value["PublishResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTask.PublishResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishResult = string(value["PublishResult"].GetString());
        m_publishResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatMiniProgramPublishTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceDefinition, allocator);
    }

    if (m_publishResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishResult.c_str(), allocator).Move(), allocator);
    }

}


string WechatMiniProgramPublishTask::GetTaskId() const
{
    return m_taskId;
}

void WechatMiniProgramPublishTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WechatMiniProgramPublishTask::GetStatus() const
{
    return m_status;
}

void WechatMiniProgramPublishTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t WechatMiniProgramPublishTask::GetErrCode() const
{
    return m_errCode;
}

void WechatMiniProgramPublishTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string WechatMiniProgramPublishTask::GetMessage() const
{
    return m_message;
}

void WechatMiniProgramPublishTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string WechatMiniProgramPublishTask::GetFileId() const
{
    return m_fileId;
}

void WechatMiniProgramPublishTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t WechatMiniProgramPublishTask::GetSourceDefinition() const
{
    return m_sourceDefinition;
}

void WechatMiniProgramPublishTask::SetSourceDefinition(const uint64_t& _sourceDefinition)
{
    m_sourceDefinition = _sourceDefinition;
    m_sourceDefinitionHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::SourceDefinitionHasBeenSet() const
{
    return m_sourceDefinitionHasBeenSet;
}

string WechatMiniProgramPublishTask::GetPublishResult() const
{
    return m_publishResult;
}

void WechatMiniProgramPublishTask::SetPublishResult(const string& _publishResult)
{
    m_publishResult = _publishResult;
    m_publishResultHasBeenSet = true;
}

bool WechatMiniProgramPublishTask::PublishResultHasBeenSet() const
{
    return m_publishResultHasBeenSet;
}

