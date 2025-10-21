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

#include <tencentcloud/cfs/v20190719/model/LifecycleDataTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

LifecycleDataTaskInfo::LifecycleDataTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_fileTotalCountHasBeenSet(false),
    m_fileSuccessedCountHasBeenSet(false),
    m_fileFailedCountHasBeenSet(false),
    m_fileTotalSizeHasBeenSet(false),
    m_fileSuccessedSizeHasBeenSet(false),
    m_fileFailedSizeHasBeenSet(false),
    m_fileTotalListHasBeenSet(false),
    m_fileSuccessedListHasBeenSet(false),
    m_fileFailedListHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskPathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dataFlowIdHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleDataTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("FileTotalCount") && !value["FileTotalCount"].IsNull())
    {
        if (!value["FileTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalCount = value["FileTotalCount"].GetUint64();
        m_fileTotalCountHasBeenSet = true;
    }

    if (value.HasMember("FileSuccessedCount") && !value["FileSuccessedCount"].IsNull())
    {
        if (!value["FileSuccessedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileSuccessedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSuccessedCount = value["FileSuccessedCount"].GetUint64();
        m_fileSuccessedCountHasBeenSet = true;
    }

    if (value.HasMember("FileFailedCount") && !value["FileFailedCount"].IsNull())
    {
        if (!value["FileFailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileFailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedCount = value["FileFailedCount"].GetUint64();
        m_fileFailedCountHasBeenSet = true;
    }

    if (value.HasMember("FileTotalSize") && !value["FileTotalSize"].IsNull())
    {
        if (!value["FileTotalSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileTotalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalSize = value["FileTotalSize"].GetUint64();
        m_fileTotalSizeHasBeenSet = true;
    }

    if (value.HasMember("FileSuccessedSize") && !value["FileSuccessedSize"].IsNull())
    {
        if (!value["FileSuccessedSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileSuccessedSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSuccessedSize = value["FileSuccessedSize"].GetUint64();
        m_fileSuccessedSizeHasBeenSet = true;
    }

    if (value.HasMember("FileFailedSize") && !value["FileFailedSize"].IsNull())
    {
        if (!value["FileFailedSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileFailedSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedSize = value["FileFailedSize"].GetUint64();
        m_fileFailedSizeHasBeenSet = true;
    }

    if (value.HasMember("FileTotalList") && !value["FileTotalList"].IsNull())
    {
        if (!value["FileTotalList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileTotalList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalList = string(value["FileTotalList"].GetString());
        m_fileTotalListHasBeenSet = true;
    }

    if (value.HasMember("FileSuccessedList") && !value["FileSuccessedList"].IsNull())
    {
        if (!value["FileSuccessedList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileSuccessedList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSuccessedList = string(value["FileSuccessedList"].GetString());
        m_fileSuccessedListHasBeenSet = true;
    }

    if (value.HasMember("FileFailedList") && !value["FileFailedList"].IsNull())
    {
        if (!value["FileFailedList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileFailedList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedList = string(value["FileFailedList"].GetString());
        m_fileFailedListHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskPath") && !value["TaskPath"].IsNull())
    {
        if (!value["TaskPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.TaskPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPath = string(value["TaskPath"].GetString());
        m_taskPathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DataFlowId") && !value["DataFlowId"].IsNull())
    {
        if (!value["DataFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleDataTaskInfo.DataFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowId = string(value["DataFlowId"].GetString());
        m_dataFlowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleDataTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTotalCount, allocator);
    }

    if (m_fileSuccessedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSuccessedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSuccessedCount, allocator);
    }

    if (m_fileFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileFailedCount, allocator);
    }

    if (m_fileTotalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTotalSize, allocator);
    }

    if (m_fileSuccessedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSuccessedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSuccessedSize, allocator);
    }

    if (m_fileFailedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileFailedSize, allocator);
    }

    if (m_fileTotalListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileTotalList.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSuccessedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSuccessedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSuccessedList.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFailedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileFailedList.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPath.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowId.c_str(), allocator).Move(), allocator);
    }

}


string LifecycleDataTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void LifecycleDataTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LifecycleDataTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LifecycleDataTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void LifecycleDataTaskInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool LifecycleDataTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string LifecycleDataTaskInfo::GetCreationTime() const
{
    return m_creationTime;
}

void LifecycleDataTaskInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string LifecycleDataTaskInfo::GetFinishTime() const
{
    return m_finishTime;
}

void LifecycleDataTaskInfo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileTotalCount() const
{
    return m_fileTotalCount;
}

void LifecycleDataTaskInfo::SetFileTotalCount(const uint64_t& _fileTotalCount)
{
    m_fileTotalCount = _fileTotalCount;
    m_fileTotalCountHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileTotalCountHasBeenSet() const
{
    return m_fileTotalCountHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileSuccessedCount() const
{
    return m_fileSuccessedCount;
}

void LifecycleDataTaskInfo::SetFileSuccessedCount(const uint64_t& _fileSuccessedCount)
{
    m_fileSuccessedCount = _fileSuccessedCount;
    m_fileSuccessedCountHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileSuccessedCountHasBeenSet() const
{
    return m_fileSuccessedCountHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileFailedCount() const
{
    return m_fileFailedCount;
}

void LifecycleDataTaskInfo::SetFileFailedCount(const uint64_t& _fileFailedCount)
{
    m_fileFailedCount = _fileFailedCount;
    m_fileFailedCountHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileFailedCountHasBeenSet() const
{
    return m_fileFailedCountHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileTotalSize() const
{
    return m_fileTotalSize;
}

void LifecycleDataTaskInfo::SetFileTotalSize(const uint64_t& _fileTotalSize)
{
    m_fileTotalSize = _fileTotalSize;
    m_fileTotalSizeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileTotalSizeHasBeenSet() const
{
    return m_fileTotalSizeHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileSuccessedSize() const
{
    return m_fileSuccessedSize;
}

void LifecycleDataTaskInfo::SetFileSuccessedSize(const uint64_t& _fileSuccessedSize)
{
    m_fileSuccessedSize = _fileSuccessedSize;
    m_fileSuccessedSizeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileSuccessedSizeHasBeenSet() const
{
    return m_fileSuccessedSizeHasBeenSet;
}

uint64_t LifecycleDataTaskInfo::GetFileFailedSize() const
{
    return m_fileFailedSize;
}

void LifecycleDataTaskInfo::SetFileFailedSize(const uint64_t& _fileFailedSize)
{
    m_fileFailedSize = _fileFailedSize;
    m_fileFailedSizeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileFailedSizeHasBeenSet() const
{
    return m_fileFailedSizeHasBeenSet;
}

string LifecycleDataTaskInfo::GetFileTotalList() const
{
    return m_fileTotalList;
}

void LifecycleDataTaskInfo::SetFileTotalList(const string& _fileTotalList)
{
    m_fileTotalList = _fileTotalList;
    m_fileTotalListHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileTotalListHasBeenSet() const
{
    return m_fileTotalListHasBeenSet;
}

string LifecycleDataTaskInfo::GetFileSuccessedList() const
{
    return m_fileSuccessedList;
}

void LifecycleDataTaskInfo::SetFileSuccessedList(const string& _fileSuccessedList)
{
    m_fileSuccessedList = _fileSuccessedList;
    m_fileSuccessedListHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileSuccessedListHasBeenSet() const
{
    return m_fileSuccessedListHasBeenSet;
}

string LifecycleDataTaskInfo::GetFileFailedList() const
{
    return m_fileFailedList;
}

void LifecycleDataTaskInfo::SetFileFailedList(const string& _fileFailedList)
{
    m_fileFailedList = _fileFailedList;
    m_fileFailedListHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileFailedListHasBeenSet() const
{
    return m_fileFailedListHasBeenSet;
}

string LifecycleDataTaskInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void LifecycleDataTaskInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool LifecycleDataTaskInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string LifecycleDataTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void LifecycleDataTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool LifecycleDataTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string LifecycleDataTaskInfo::GetTaskPath() const
{
    return m_taskPath;
}

void LifecycleDataTaskInfo::SetTaskPath(const string& _taskPath)
{
    m_taskPath = _taskPath;
    m_taskPathHasBeenSet = true;
}

bool LifecycleDataTaskInfo::TaskPathHasBeenSet() const
{
    return m_taskPathHasBeenSet;
}

string LifecycleDataTaskInfo::GetType() const
{
    return m_type;
}

void LifecycleDataTaskInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LifecycleDataTaskInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string LifecycleDataTaskInfo::GetDataFlowId() const
{
    return m_dataFlowId;
}

void LifecycleDataTaskInfo::SetDataFlowId(const string& _dataFlowId)
{
    m_dataFlowId = _dataFlowId;
    m_dataFlowIdHasBeenSet = true;
}

bool LifecycleDataTaskInfo::DataFlowIdHasBeenSet() const
{
    return m_dataFlowIdHasBeenSet;
}

