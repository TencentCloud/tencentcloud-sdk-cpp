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

#include <tencentcloud/vod/v20180717/model/PullFileTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

PullFileTask::PullFileTask() :
    m_taskIdHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_mediaBasicInfoHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_procedureTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome PullFileTask::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaBasicInfo") && !value["MediaBasicInfo"].IsNull())
    {
        if (!value["MediaBasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.MediaBasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaBasicInfo.Deserialize(value["MediaBasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaBasicInfoHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskId") && !value["ProcedureTaskId"].IsNull())
    {
        if (!value["ProcedureTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PullFileTask.ProcedureTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureTaskId = string(value["ProcedureTaskId"].GetString());
        m_procedureTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullFileTask::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaBasicInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaBasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaBasicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureTaskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProcedureTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_procedureTaskId.c_str(), allocator).Move(), allocator);
    }

}


string PullFileTask::GetTaskId() const
{
    return m_taskId;
}

void PullFileTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool PullFileTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t PullFileTask::GetErrCode() const
{
    return m_errCode;
}

void PullFileTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool PullFileTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string PullFileTask::GetMessage() const
{
    return m_message;
}

void PullFileTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool PullFileTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string PullFileTask::GetFileId() const
{
    return m_fileId;
}

void PullFileTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool PullFileTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

MediaBasicInfo PullFileTask::GetMediaBasicInfo() const
{
    return m_mediaBasicInfo;
}

void PullFileTask::SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo)
{
    m_mediaBasicInfo = _mediaBasicInfo;
    m_mediaBasicInfoHasBeenSet = true;
}

bool PullFileTask::MediaBasicInfoHasBeenSet() const
{
    return m_mediaBasicInfoHasBeenSet;
}

string PullFileTask::GetFileUrl() const
{
    return m_fileUrl;
}

void PullFileTask::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool PullFileTask::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string PullFileTask::GetProcedureTaskId() const
{
    return m_procedureTaskId;
}

void PullFileTask::SetProcedureTaskId(const string& _procedureTaskId)
{
    m_procedureTaskId = _procedureTaskId;
    m_procedureTaskIdHasBeenSet = true;
}

bool PullFileTask::ProcedureTaskIdHasBeenSet() const
{
    return m_procedureTaskIdHasBeenSet;
}

