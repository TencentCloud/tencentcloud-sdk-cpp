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

#include <tencentcloud/ie/v20200304/model/MediaProcessTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaProcessTaskResult::MediaProcessTaskResult() :
    m_taskIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_mediaCuttingTaskResultHasBeenSet(false),
    m_mediaJoiningTaskResultHasBeenSet(false),
    m_mediaRecognitionTaskResultHasBeenSet(false)
{
}

CoreInternalOutcome MediaProcessTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("MediaCuttingTaskResult") && !value["MediaCuttingTaskResult"].IsNull())
    {
        if (!value["MediaCuttingTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.MediaCuttingTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaCuttingTaskResult.Deserialize(value["MediaCuttingTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaCuttingTaskResultHasBeenSet = true;
    }

    if (value.HasMember("MediaJoiningTaskResult") && !value["MediaJoiningTaskResult"].IsNull())
    {
        if (!value["MediaJoiningTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.MediaJoiningTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaJoiningTaskResult.Deserialize(value["MediaJoiningTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaJoiningTaskResultHasBeenSet = true;
    }

    if (value.HasMember("MediaRecognitionTaskResult") && !value["MediaRecognitionTaskResult"].IsNull())
    {
        if (!value["MediaRecognitionTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.MediaRecognitionTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaRecognitionTaskResult.Deserialize(value["MediaRecognitionTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaRecognitionTaskResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaProcessTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaCuttingTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaCuttingTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaCuttingTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaJoiningTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaJoiningTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaJoiningTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaRecognitionTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaRecognitionTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaRecognitionTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaProcessTaskResult::GetTaskId() const
{
    return m_taskId;
}

void MediaProcessTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MediaProcessTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string MediaProcessTaskResult::GetType() const
{
    return m_type;
}

void MediaProcessTaskResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaProcessTaskResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t MediaProcessTaskResult::GetProgress() const
{
    return m_progress;
}

void MediaProcessTaskResult::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MediaProcessTaskResult::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t MediaProcessTaskResult::GetStatus() const
{
    return m_status;
}

void MediaProcessTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaProcessTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t MediaProcessTaskResult::GetErrCode() const
{
    return m_errCode;
}

void MediaProcessTaskResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool MediaProcessTaskResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string MediaProcessTaskResult::GetErrMsg() const
{
    return m_errMsg;
}

void MediaProcessTaskResult::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool MediaProcessTaskResult::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

MediaCuttingTaskResult MediaProcessTaskResult::GetMediaCuttingTaskResult() const
{
    return m_mediaCuttingTaskResult;
}

void MediaProcessTaskResult::SetMediaCuttingTaskResult(const MediaCuttingTaskResult& _mediaCuttingTaskResult)
{
    m_mediaCuttingTaskResult = _mediaCuttingTaskResult;
    m_mediaCuttingTaskResultHasBeenSet = true;
}

bool MediaProcessTaskResult::MediaCuttingTaskResultHasBeenSet() const
{
    return m_mediaCuttingTaskResultHasBeenSet;
}

MediaJoiningTaskResult MediaProcessTaskResult::GetMediaJoiningTaskResult() const
{
    return m_mediaJoiningTaskResult;
}

void MediaProcessTaskResult::SetMediaJoiningTaskResult(const MediaJoiningTaskResult& _mediaJoiningTaskResult)
{
    m_mediaJoiningTaskResult = _mediaJoiningTaskResult;
    m_mediaJoiningTaskResultHasBeenSet = true;
}

bool MediaProcessTaskResult::MediaJoiningTaskResultHasBeenSet() const
{
    return m_mediaJoiningTaskResultHasBeenSet;
}

MediaRecognitionTaskResult MediaProcessTaskResult::GetMediaRecognitionTaskResult() const
{
    return m_mediaRecognitionTaskResult;
}

void MediaProcessTaskResult::SetMediaRecognitionTaskResult(const MediaRecognitionTaskResult& _mediaRecognitionTaskResult)
{
    m_mediaRecognitionTaskResult = _mediaRecognitionTaskResult;
    m_mediaRecognitionTaskResultHasBeenSet = true;
}

bool MediaProcessTaskResult::MediaRecognitionTaskResultHasBeenSet() const
{
    return m_mediaRecognitionTaskResultHasBeenSet;
}

