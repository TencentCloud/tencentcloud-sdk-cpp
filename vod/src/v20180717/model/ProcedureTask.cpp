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

#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcedureTask::ProcedureTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_mediaProcessResultSetHasBeenSet(false),
    m_aiContentReviewResultSetHasBeenSet(false),
    m_aiAnalysisResultSetHasBeenSet(false),
    m_aiRecognitionResultSetHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_tasksNotifyModeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProcedureTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("MediaProcessResultSet") && !value["MediaProcessResultSet"].IsNull())
    {
        if (!value["MediaProcessResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.MediaProcessResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaProcessResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaProcessTaskResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mediaProcessResultSet.push_back(item);
        }
        m_mediaProcessResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiContentReviewResultSet") && !value["AiContentReviewResultSet"].IsNull())
    {
        if (!value["AiContentReviewResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.AiContentReviewResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiContentReviewResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiContentReviewResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiContentReviewResultSet.push_back(item);
        }
        m_aiContentReviewResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiAnalysisResultSet") && !value["AiAnalysisResultSet"].IsNull())
    {
        if (!value["AiAnalysisResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.AiAnalysisResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiAnalysisResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiAnalysisResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiAnalysisResultSet.push_back(item);
        }
        m_aiAnalysisResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiRecognitionResultSet") && !value["AiRecognitionResultSet"].IsNull())
    {
        if (!value["AiRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.AiRecognitionResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiRecognitionResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiRecognitionResultSet.push_back(item);
        }
        m_aiRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("TasksPriority") && !value["TasksPriority"].IsNull())
    {
        if (!value["TasksPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.TasksPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tasksPriority = value["TasksPriority"].GetInt64();
        m_tasksPriorityHasBeenSet = true;
    }

    if (value.HasMember("TasksNotifyMode") && !value["TasksNotifyMode"].IsNull())
    {
        if (!value["TasksNotifyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.TasksNotifyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tasksNotifyMode = string(value["TasksNotifyMode"].GetString());
        m_tasksNotifyModeHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTask.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcedureTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaProcessResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mediaProcessResultSet.begin(); itr != m_mediaProcessResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiContentReviewResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiContentReviewResultSet.begin(); itr != m_aiContentReviewResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiAnalysisResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiAnalysisResultSet.begin(); itr != m_aiAnalysisResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiRecognitionResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiRecognitionResultSet.begin(); itr != m_aiRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_tasksNotifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksNotifyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tasksNotifyMode.c_str(), allocator).Move(), allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

}


string ProcedureTask::GetTaskId() const
{
    return m_taskId;
}

void ProcedureTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProcedureTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ProcedureTask::GetStatus() const
{
    return m_status;
}

void ProcedureTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProcedureTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ProcedureTask::GetErrCode() const
{
    return m_errCode;
}

void ProcedureTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool ProcedureTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string ProcedureTask::GetMessage() const
{
    return m_message;
}

void ProcedureTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ProcedureTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ProcedureTask::GetFileId() const
{
    return m_fileId;
}

void ProcedureTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ProcedureTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ProcedureTask::GetFileName() const
{
    return m_fileName;
}

void ProcedureTask::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ProcedureTask::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ProcedureTask::GetFileUrl() const
{
    return m_fileUrl;
}

void ProcedureTask::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ProcedureTask::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

MediaMetaData ProcedureTask::GetMetaData() const
{
    return m_metaData;
}

void ProcedureTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool ProcedureTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

vector<MediaProcessTaskResult> ProcedureTask::GetMediaProcessResultSet() const
{
    return m_mediaProcessResultSet;
}

void ProcedureTask::SetMediaProcessResultSet(const vector<MediaProcessTaskResult>& _mediaProcessResultSet)
{
    m_mediaProcessResultSet = _mediaProcessResultSet;
    m_mediaProcessResultSetHasBeenSet = true;
}

bool ProcedureTask::MediaProcessResultSetHasBeenSet() const
{
    return m_mediaProcessResultSetHasBeenSet;
}

vector<AiContentReviewResult> ProcedureTask::GetAiContentReviewResultSet() const
{
    return m_aiContentReviewResultSet;
}

void ProcedureTask::SetAiContentReviewResultSet(const vector<AiContentReviewResult>& _aiContentReviewResultSet)
{
    m_aiContentReviewResultSet = _aiContentReviewResultSet;
    m_aiContentReviewResultSetHasBeenSet = true;
}

bool ProcedureTask::AiContentReviewResultSetHasBeenSet() const
{
    return m_aiContentReviewResultSetHasBeenSet;
}

vector<AiAnalysisResult> ProcedureTask::GetAiAnalysisResultSet() const
{
    return m_aiAnalysisResultSet;
}

void ProcedureTask::SetAiAnalysisResultSet(const vector<AiAnalysisResult>& _aiAnalysisResultSet)
{
    m_aiAnalysisResultSet = _aiAnalysisResultSet;
    m_aiAnalysisResultSetHasBeenSet = true;
}

bool ProcedureTask::AiAnalysisResultSetHasBeenSet() const
{
    return m_aiAnalysisResultSetHasBeenSet;
}

vector<AiRecognitionResult> ProcedureTask::GetAiRecognitionResultSet() const
{
    return m_aiRecognitionResultSet;
}

void ProcedureTask::SetAiRecognitionResultSet(const vector<AiRecognitionResult>& _aiRecognitionResultSet)
{
    m_aiRecognitionResultSet = _aiRecognitionResultSet;
    m_aiRecognitionResultSetHasBeenSet = true;
}

bool ProcedureTask::AiRecognitionResultSetHasBeenSet() const
{
    return m_aiRecognitionResultSetHasBeenSet;
}

int64_t ProcedureTask::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ProcedureTask::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ProcedureTask::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string ProcedureTask::GetTasksNotifyMode() const
{
    return m_tasksNotifyMode;
}

void ProcedureTask::SetTasksNotifyMode(const string& _tasksNotifyMode)
{
    m_tasksNotifyMode = _tasksNotifyMode;
    m_tasksNotifyModeHasBeenSet = true;
}

bool ProcedureTask::TasksNotifyModeHasBeenSet() const
{
    return m_tasksNotifyModeHasBeenSet;
}

string ProcedureTask::GetSessionContext() const
{
    return m_sessionContext;
}

void ProcedureTask::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ProcedureTask::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ProcedureTask::GetSessionId() const
{
    return m_sessionId;
}

void ProcedureTask::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ProcedureTask::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ProcedureTask::GetOperator() const
{
    return m_operator;
}

void ProcedureTask::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ProcedureTask::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ProcedureTask::GetOperationType() const
{
    return m_operationType;
}

void ProcedureTask::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool ProcedureTask::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

