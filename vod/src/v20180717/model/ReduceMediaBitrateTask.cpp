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

#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReduceMediaBitrateTask::ReduceMediaBitrateTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_mediaProcessResultSetHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_tasksNotifyModeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome ReduceMediaBitrateTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.MetaData` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.MediaProcessResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaProcessResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReduceMediaBitrateMediaProcessTaskResult item;
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

    if (value.HasMember("TasksPriority") && !value["TasksPriority"].IsNull())
    {
        if (!value["TasksPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.TasksPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tasksPriority = value["TasksPriority"].GetInt64();
        m_tasksPriorityHasBeenSet = true;
    }

    if (value.HasMember("TasksNotifyMode") && !value["TasksNotifyMode"].IsNull())
    {
        if (!value["TasksNotifyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.TasksNotifyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tasksNotifyMode = string(value["TasksNotifyMode"].GetString());
        m_tasksNotifyModeHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateTask.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReduceMediaBitrateTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ReduceMediaBitrateTask::GetTaskId() const
{
    return m_taskId;
}

void ReduceMediaBitrateTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ReduceMediaBitrateTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ReduceMediaBitrateTask::GetStatus() const
{
    return m_status;
}

void ReduceMediaBitrateTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReduceMediaBitrateTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReduceMediaBitrateTask::GetFileId() const
{
    return m_fileId;
}

void ReduceMediaBitrateTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ReduceMediaBitrateTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ReduceMediaBitrateTask::GetFileName() const
{
    return m_fileName;
}

void ReduceMediaBitrateTask::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ReduceMediaBitrateTask::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ReduceMediaBitrateTask::GetFileUrl() const
{
    return m_fileUrl;
}

void ReduceMediaBitrateTask::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ReduceMediaBitrateTask::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

MediaMetaData ReduceMediaBitrateTask::GetMetaData() const
{
    return m_metaData;
}

void ReduceMediaBitrateTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool ReduceMediaBitrateTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

vector<ReduceMediaBitrateMediaProcessTaskResult> ReduceMediaBitrateTask::GetMediaProcessResultSet() const
{
    return m_mediaProcessResultSet;
}

void ReduceMediaBitrateTask::SetMediaProcessResultSet(const vector<ReduceMediaBitrateMediaProcessTaskResult>& _mediaProcessResultSet)
{
    m_mediaProcessResultSet = _mediaProcessResultSet;
    m_mediaProcessResultSetHasBeenSet = true;
}

bool ReduceMediaBitrateTask::MediaProcessResultSetHasBeenSet() const
{
    return m_mediaProcessResultSetHasBeenSet;
}

int64_t ReduceMediaBitrateTask::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ReduceMediaBitrateTask::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ReduceMediaBitrateTask::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string ReduceMediaBitrateTask::GetTasksNotifyMode() const
{
    return m_tasksNotifyMode;
}

void ReduceMediaBitrateTask::SetTasksNotifyMode(const string& _tasksNotifyMode)
{
    m_tasksNotifyMode = _tasksNotifyMode;
    m_tasksNotifyModeHasBeenSet = true;
}

bool ReduceMediaBitrateTask::TasksNotifyModeHasBeenSet() const
{
    return m_tasksNotifyModeHasBeenSet;
}

string ReduceMediaBitrateTask::GetSessionContext() const
{
    return m_sessionContext;
}

void ReduceMediaBitrateTask::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ReduceMediaBitrateTask::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ReduceMediaBitrateTask::GetSessionId() const
{
    return m_sessionId;
}

void ReduceMediaBitrateTask::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ReduceMediaBitrateTask::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

