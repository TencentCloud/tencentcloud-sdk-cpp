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

#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WechatPublishTask::WechatPublishTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_sourceDefinitionHasBeenSet(false),
    m_wechatStatusHasBeenSet(false),
    m_wechatVidHasBeenSet(false),
    m_wechatUrlHasBeenSet(false)
{
}

CoreInternalOutcome WechatPublishTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("SourceDefinition") && !value["SourceDefinition"].IsNull())
    {
        if (!value["SourceDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.SourceDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDefinition = value["SourceDefinition"].GetUint64();
        m_sourceDefinitionHasBeenSet = true;
    }

    if (value.HasMember("WechatStatus") && !value["WechatStatus"].IsNull())
    {
        if (!value["WechatStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.WechatStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatStatus = string(value["WechatStatus"].GetString());
        m_wechatStatusHasBeenSet = true;
    }

    if (value.HasMember("WechatVid") && !value["WechatVid"].IsNull())
    {
        if (!value["WechatVid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.WechatVid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatVid = string(value["WechatVid"].GetString());
        m_wechatVidHasBeenSet = true;
    }

    if (value.HasMember("WechatUrl") && !value["WechatUrl"].IsNull())
    {
        if (!value["WechatUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatPublishTask.WechatUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatUrl = string(value["WechatUrl"].GetString());
        m_wechatUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatPublishTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_sourceDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceDefinition, allocator);
    }

    if (m_wechatStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatVidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatVid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatVid.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatUrl.c_str(), allocator).Move(), allocator);
    }

}


string WechatPublishTask::GetTaskId() const
{
    return m_taskId;
}

void WechatPublishTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WechatPublishTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WechatPublishTask::GetStatus() const
{
    return m_status;
}

void WechatPublishTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WechatPublishTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t WechatPublishTask::GetErrCode() const
{
    return m_errCode;
}

void WechatPublishTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool WechatPublishTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string WechatPublishTask::GetMessage() const
{
    return m_message;
}

void WechatPublishTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool WechatPublishTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string WechatPublishTask::GetFileId() const
{
    return m_fileId;
}

void WechatPublishTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool WechatPublishTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t WechatPublishTask::GetDefinition() const
{
    return m_definition;
}

void WechatPublishTask::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool WechatPublishTask::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t WechatPublishTask::GetSourceDefinition() const
{
    return m_sourceDefinition;
}

void WechatPublishTask::SetSourceDefinition(const uint64_t& _sourceDefinition)
{
    m_sourceDefinition = _sourceDefinition;
    m_sourceDefinitionHasBeenSet = true;
}

bool WechatPublishTask::SourceDefinitionHasBeenSet() const
{
    return m_sourceDefinitionHasBeenSet;
}

string WechatPublishTask::GetWechatStatus() const
{
    return m_wechatStatus;
}

void WechatPublishTask::SetWechatStatus(const string& _wechatStatus)
{
    m_wechatStatus = _wechatStatus;
    m_wechatStatusHasBeenSet = true;
}

bool WechatPublishTask::WechatStatusHasBeenSet() const
{
    return m_wechatStatusHasBeenSet;
}

string WechatPublishTask::GetWechatVid() const
{
    return m_wechatVid;
}

void WechatPublishTask::SetWechatVid(const string& _wechatVid)
{
    m_wechatVid = _wechatVid;
    m_wechatVidHasBeenSet = true;
}

bool WechatPublishTask::WechatVidHasBeenSet() const
{
    return m_wechatVidHasBeenSet;
}

string WechatPublishTask::GetWechatUrl() const
{
    return m_wechatUrl;
}

void WechatPublishTask::SetWechatUrl(const string& _wechatUrl)
{
    m_wechatUrl = _wechatUrl;
    m_wechatUrlHasBeenSet = true;
}

bool WechatPublishTask::WechatUrlHasBeenSet() const
{
    return m_wechatUrlHasBeenSet;
}

