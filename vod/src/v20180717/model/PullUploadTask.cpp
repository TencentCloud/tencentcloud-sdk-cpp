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

#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

PullUploadTask::PullUploadTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_mediaBasicInfoHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_procedureTaskIdHasBeenSet(false),
    m_reviewAudioVideoTaskIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome PullUploadTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaBasicInfo") && !value["MediaBasicInfo"].IsNull())
    {
        if (!value["MediaBasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.MediaBasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaBasicInfo.Deserialize(value["MediaBasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaBasicInfoHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskId") && !value["ProcedureTaskId"].IsNull())
    {
        if (!value["ProcedureTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.ProcedureTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureTaskId = string(value["ProcedureTaskId"].GetString());
        m_procedureTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ReviewAudioVideoTaskId") && !value["ReviewAudioVideoTaskId"].IsNull())
    {
        if (!value["ReviewAudioVideoTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.ReviewAudioVideoTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewAudioVideoTaskId = string(value["ReviewAudioVideoTaskId"].GetString());
        m_reviewAudioVideoTaskIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullUploadTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullUploadTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mediaBasicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaBasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaBasicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewAudioVideoTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewAudioVideoTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

}


string PullUploadTask::GetTaskId() const
{
    return m_taskId;
}

void PullUploadTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool PullUploadTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string PullUploadTask::GetStatus() const
{
    return m_status;
}

void PullUploadTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PullUploadTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t PullUploadTask::GetErrCode() const
{
    return m_errCode;
}

void PullUploadTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool PullUploadTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string PullUploadTask::GetMessage() const
{
    return m_message;
}

void PullUploadTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool PullUploadTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string PullUploadTask::GetFileId() const
{
    return m_fileId;
}

void PullUploadTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool PullUploadTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

MediaBasicInfo PullUploadTask::GetMediaBasicInfo() const
{
    return m_mediaBasicInfo;
}

void PullUploadTask::SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo)
{
    m_mediaBasicInfo = _mediaBasicInfo;
    m_mediaBasicInfoHasBeenSet = true;
}

bool PullUploadTask::MediaBasicInfoHasBeenSet() const
{
    return m_mediaBasicInfoHasBeenSet;
}

MediaMetaData PullUploadTask::GetMetaData() const
{
    return m_metaData;
}

void PullUploadTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool PullUploadTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string PullUploadTask::GetFileUrl() const
{
    return m_fileUrl;
}

void PullUploadTask::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool PullUploadTask::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string PullUploadTask::GetProcedureTaskId() const
{
    return m_procedureTaskId;
}

void PullUploadTask::SetProcedureTaskId(const string& _procedureTaskId)
{
    m_procedureTaskId = _procedureTaskId;
    m_procedureTaskIdHasBeenSet = true;
}

bool PullUploadTask::ProcedureTaskIdHasBeenSet() const
{
    return m_procedureTaskIdHasBeenSet;
}

string PullUploadTask::GetReviewAudioVideoTaskId() const
{
    return m_reviewAudioVideoTaskId;
}

void PullUploadTask::SetReviewAudioVideoTaskId(const string& _reviewAudioVideoTaskId)
{
    m_reviewAudioVideoTaskId = _reviewAudioVideoTaskId;
    m_reviewAudioVideoTaskIdHasBeenSet = true;
}

bool PullUploadTask::ReviewAudioVideoTaskIdHasBeenSet() const
{
    return m_reviewAudioVideoTaskIdHasBeenSet;
}

string PullUploadTask::GetSessionContext() const
{
    return m_sessionContext;
}

void PullUploadTask::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool PullUploadTask::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string PullUploadTask::GetSessionId() const
{
    return m_sessionId;
}

void PullUploadTask::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool PullUploadTask::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t PullUploadTask::GetProgress() const
{
    return m_progress;
}

void PullUploadTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool PullUploadTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

