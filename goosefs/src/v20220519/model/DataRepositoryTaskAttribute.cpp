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

#include <tencentcloud/goosefs/v20220519/model/DataRepositoryTaskAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

DataRepositoryTaskAttribute::DataRepositoryTaskAttribute() :
    m_taskTypeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_taskPathHasBeenSet(false),
    m_totalCapacityHasBeenSet(false),
    m_finishedCapacityHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskFailMsgHasBeenSet(false),
    m_totalFileNumberHasBeenSet(false),
    m_finishedFileNumberHasBeenSet(false),
    m_textLocationHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_enableDataFlowSubPathHasBeenSet(false),
    m_dataFlowSubPathHasBeenSet(false),
    m_enableCustomDestPathHasBeenSet(false),
    m_customDestPathHasBeenSet(false),
    m_isTaskPathAbsoluteHasBeenSet(false),
    m_outputBucketHasBeenSet(false),
    m_outputPrefixHasBeenSet(false),
    m_enableCustomSrcPathHasBeenSet(false),
    m_customSrcPathHasBeenSet(false)
{
}

CoreInternalOutcome DataRepositoryTaskAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("TaskPath") && !value["TaskPath"].IsNull())
    {
        if (!value["TaskPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPath = string(value["TaskPath"].GetString());
        m_taskPathHasBeenSet = true;
    }

    if (value.HasMember("TotalCapacity") && !value["TotalCapacity"].IsNull())
    {
        if (!value["TotalCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TotalCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCapacity = value["TotalCapacity"].GetUint64();
        m_totalCapacityHasBeenSet = true;
    }

    if (value.HasMember("FinishedCapacity") && !value["FinishedCapacity"].IsNull())
    {
        if (!value["FinishedCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.FinishedCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedCapacity = value["FinishedCapacity"].GetUint64();
        m_finishedCapacityHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStartTime") && !value["TaskStartTime"].IsNull())
    {
        if (!value["TaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStartTime = string(value["TaskStartTime"].GetString());
        m_taskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskEndTime") && !value["TaskEndTime"].IsNull())
    {
        if (!value["TaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEndTime = string(value["TaskEndTime"].GetString());
        m_taskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskFailMsg") && !value["TaskFailMsg"].IsNull())
    {
        if (!value["TaskFailMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TaskFailMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFailMsg = string(value["TaskFailMsg"].GetString());
        m_taskFailMsgHasBeenSet = true;
    }

    if (value.HasMember("TotalFileNumber") && !value["TotalFileNumber"].IsNull())
    {
        if (!value["TotalFileNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TotalFileNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFileNumber = value["TotalFileNumber"].GetUint64();
        m_totalFileNumberHasBeenSet = true;
    }

    if (value.HasMember("FinishedFileNumber") && !value["FinishedFileNumber"].IsNull())
    {
        if (!value["FinishedFileNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.FinishedFileNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedFileNumber = value["FinishedFileNumber"].GetUint64();
        m_finishedFileNumberHasBeenSet = true;
    }

    if (value.HasMember("TextLocation") && !value["TextLocation"].IsNull())
    {
        if (!value["TextLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.TextLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textLocation = string(value["TextLocation"].GetString());
        m_textLocationHasBeenSet = true;
    }

    if (value.HasMember("RepositoryType") && !value["RepositoryType"].IsNull())
    {
        if (!value["RepositoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.RepositoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryType = string(value["RepositoryType"].GetString());
        m_repositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableDataFlowSubPath") && !value["EnableDataFlowSubPath"].IsNull())
    {
        if (!value["EnableDataFlowSubPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.EnableDataFlowSubPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDataFlowSubPath = value["EnableDataFlowSubPath"].GetBool();
        m_enableDataFlowSubPathHasBeenSet = true;
    }

    if (value.HasMember("DataFlowSubPath") && !value["DataFlowSubPath"].IsNull())
    {
        if (!value["DataFlowSubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.DataFlowSubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowSubPath = string(value["DataFlowSubPath"].GetString());
        m_dataFlowSubPathHasBeenSet = true;
    }

    if (value.HasMember("EnableCustomDestPath") && !value["EnableCustomDestPath"].IsNull())
    {
        if (!value["EnableCustomDestPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.EnableCustomDestPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCustomDestPath = value["EnableCustomDestPath"].GetBool();
        m_enableCustomDestPathHasBeenSet = true;
    }

    if (value.HasMember("CustomDestPath") && !value["CustomDestPath"].IsNull())
    {
        if (!value["CustomDestPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.CustomDestPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customDestPath = string(value["CustomDestPath"].GetString());
        m_customDestPathHasBeenSet = true;
    }

    if (value.HasMember("IsTaskPathAbsolute") && !value["IsTaskPathAbsolute"].IsNull())
    {
        if (!value["IsTaskPathAbsolute"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.IsTaskPathAbsolute` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTaskPathAbsolute = value["IsTaskPathAbsolute"].GetBool();
        m_isTaskPathAbsoluteHasBeenSet = true;
    }

    if (value.HasMember("OutputBucket") && !value["OutputBucket"].IsNull())
    {
        if (!value["OutputBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.OutputBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputBucket = string(value["OutputBucket"].GetString());
        m_outputBucketHasBeenSet = true;
    }

    if (value.HasMember("OutputPrefix") && !value["OutputPrefix"].IsNull())
    {
        if (!value["OutputPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.OutputPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPrefix = string(value["OutputPrefix"].GetString());
        m_outputPrefixHasBeenSet = true;
    }

    if (value.HasMember("EnableCustomSrcPath") && !value["EnableCustomSrcPath"].IsNull())
    {
        if (!value["EnableCustomSrcPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.EnableCustomSrcPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCustomSrcPath = value["EnableCustomSrcPath"].GetBool();
        m_enableCustomSrcPathHasBeenSet = true;
    }

    if (value.HasMember("CustomSrcPath") && !value["CustomSrcPath"].IsNull())
    {
        if (!value["CustomSrcPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRepositoryTaskAttribute.CustomSrcPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customSrcPath = string(value["CustomSrcPath"].GetString());
        m_customSrcPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataRepositoryTaskAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPath.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCapacity, allocator);
    }

    if (m_finishedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedCapacity, allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFailMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFailMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFailMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFileNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFileNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFileNumber, allocator);
    }

    if (m_finishedFileNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedFileNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedFileNumber, allocator);
    }

    if (m_textLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDataFlowSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDataFlowSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDataFlowSubPath, allocator);
    }

    if (m_dataFlowSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowSubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCustomDestPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCustomDestPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCustomDestPath, allocator);
    }

    if (m_customDestPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDestPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customDestPath.c_str(), allocator).Move(), allocator);
    }

    if (m_isTaskPathAbsoluteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTaskPathAbsolute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTaskPathAbsolute, allocator);
    }

    if (m_outputBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_outputPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCustomSrcPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCustomSrcPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCustomSrcPath, allocator);
    }

    if (m_customSrcPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSrcPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customSrcPath.c_str(), allocator).Move(), allocator);
    }

}


string DataRepositoryTaskAttribute::GetTaskType() const
{
    return m_taskType;
}

void DataRepositoryTaskAttribute::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DataRepositoryTaskAttribute::GetBucket() const
{
    return m_bucket;
}

void DataRepositoryTaskAttribute::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskPath() const
{
    return m_taskPath;
}

void DataRepositoryTaskAttribute::SetTaskPath(const string& _taskPath)
{
    m_taskPath = _taskPath;
    m_taskPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskPathHasBeenSet() const
{
    return m_taskPathHasBeenSet;
}

uint64_t DataRepositoryTaskAttribute::GetTotalCapacity() const
{
    return m_totalCapacity;
}

void DataRepositoryTaskAttribute::SetTotalCapacity(const uint64_t& _totalCapacity)
{
    m_totalCapacity = _totalCapacity;
    m_totalCapacityHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TotalCapacityHasBeenSet() const
{
    return m_totalCapacityHasBeenSet;
}

uint64_t DataRepositoryTaskAttribute::GetFinishedCapacity() const
{
    return m_finishedCapacity;
}

void DataRepositoryTaskAttribute::SetFinishedCapacity(const uint64_t& _finishedCapacity)
{
    m_finishedCapacity = _finishedCapacity;
    m_finishedCapacityHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::FinishedCapacityHasBeenSet() const
{
    return m_finishedCapacityHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void DataRepositoryTaskAttribute::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void DataRepositoryTaskAttribute::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void DataRepositoryTaskAttribute::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskStatus() const
{
    return m_taskStatus;
}

void DataRepositoryTaskAttribute::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskId() const
{
    return m_taskId;
}

void DataRepositoryTaskAttribute::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskName() const
{
    return m_taskName;
}

void DataRepositoryTaskAttribute::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTaskFailMsg() const
{
    return m_taskFailMsg;
}

void DataRepositoryTaskAttribute::SetTaskFailMsg(const string& _taskFailMsg)
{
    m_taskFailMsg = _taskFailMsg;
    m_taskFailMsgHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TaskFailMsgHasBeenSet() const
{
    return m_taskFailMsgHasBeenSet;
}

uint64_t DataRepositoryTaskAttribute::GetTotalFileNumber() const
{
    return m_totalFileNumber;
}

void DataRepositoryTaskAttribute::SetTotalFileNumber(const uint64_t& _totalFileNumber)
{
    m_totalFileNumber = _totalFileNumber;
    m_totalFileNumberHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TotalFileNumberHasBeenSet() const
{
    return m_totalFileNumberHasBeenSet;
}

uint64_t DataRepositoryTaskAttribute::GetFinishedFileNumber() const
{
    return m_finishedFileNumber;
}

void DataRepositoryTaskAttribute::SetFinishedFileNumber(const uint64_t& _finishedFileNumber)
{
    m_finishedFileNumber = _finishedFileNumber;
    m_finishedFileNumberHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::FinishedFileNumberHasBeenSet() const
{
    return m_finishedFileNumberHasBeenSet;
}

string DataRepositoryTaskAttribute::GetTextLocation() const
{
    return m_textLocation;
}

void DataRepositoryTaskAttribute::SetTextLocation(const string& _textLocation)
{
    m_textLocation = _textLocation;
    m_textLocationHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::TextLocationHasBeenSet() const
{
    return m_textLocationHasBeenSet;
}

string DataRepositoryTaskAttribute::GetRepositoryType() const
{
    return m_repositoryType;
}

void DataRepositoryTaskAttribute::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

bool DataRepositoryTaskAttribute::GetEnableDataFlowSubPath() const
{
    return m_enableDataFlowSubPath;
}

void DataRepositoryTaskAttribute::SetEnableDataFlowSubPath(const bool& _enableDataFlowSubPath)
{
    m_enableDataFlowSubPath = _enableDataFlowSubPath;
    m_enableDataFlowSubPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::EnableDataFlowSubPathHasBeenSet() const
{
    return m_enableDataFlowSubPathHasBeenSet;
}

string DataRepositoryTaskAttribute::GetDataFlowSubPath() const
{
    return m_dataFlowSubPath;
}

void DataRepositoryTaskAttribute::SetDataFlowSubPath(const string& _dataFlowSubPath)
{
    m_dataFlowSubPath = _dataFlowSubPath;
    m_dataFlowSubPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::DataFlowSubPathHasBeenSet() const
{
    return m_dataFlowSubPathHasBeenSet;
}

bool DataRepositoryTaskAttribute::GetEnableCustomDestPath() const
{
    return m_enableCustomDestPath;
}

void DataRepositoryTaskAttribute::SetEnableCustomDestPath(const bool& _enableCustomDestPath)
{
    m_enableCustomDestPath = _enableCustomDestPath;
    m_enableCustomDestPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::EnableCustomDestPathHasBeenSet() const
{
    return m_enableCustomDestPathHasBeenSet;
}

string DataRepositoryTaskAttribute::GetCustomDestPath() const
{
    return m_customDestPath;
}

void DataRepositoryTaskAttribute::SetCustomDestPath(const string& _customDestPath)
{
    m_customDestPath = _customDestPath;
    m_customDestPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::CustomDestPathHasBeenSet() const
{
    return m_customDestPathHasBeenSet;
}

bool DataRepositoryTaskAttribute::GetIsTaskPathAbsolute() const
{
    return m_isTaskPathAbsolute;
}

void DataRepositoryTaskAttribute::SetIsTaskPathAbsolute(const bool& _isTaskPathAbsolute)
{
    m_isTaskPathAbsolute = _isTaskPathAbsolute;
    m_isTaskPathAbsoluteHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::IsTaskPathAbsoluteHasBeenSet() const
{
    return m_isTaskPathAbsoluteHasBeenSet;
}

string DataRepositoryTaskAttribute::GetOutputBucket() const
{
    return m_outputBucket;
}

void DataRepositoryTaskAttribute::SetOutputBucket(const string& _outputBucket)
{
    m_outputBucket = _outputBucket;
    m_outputBucketHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::OutputBucketHasBeenSet() const
{
    return m_outputBucketHasBeenSet;
}

string DataRepositoryTaskAttribute::GetOutputPrefix() const
{
    return m_outputPrefix;
}

void DataRepositoryTaskAttribute::SetOutputPrefix(const string& _outputPrefix)
{
    m_outputPrefix = _outputPrefix;
    m_outputPrefixHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::OutputPrefixHasBeenSet() const
{
    return m_outputPrefixHasBeenSet;
}

bool DataRepositoryTaskAttribute::GetEnableCustomSrcPath() const
{
    return m_enableCustomSrcPath;
}

void DataRepositoryTaskAttribute::SetEnableCustomSrcPath(const bool& _enableCustomSrcPath)
{
    m_enableCustomSrcPath = _enableCustomSrcPath;
    m_enableCustomSrcPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::EnableCustomSrcPathHasBeenSet() const
{
    return m_enableCustomSrcPathHasBeenSet;
}

string DataRepositoryTaskAttribute::GetCustomSrcPath() const
{
    return m_customSrcPath;
}

void DataRepositoryTaskAttribute::SetCustomSrcPath(const string& _customSrcPath)
{
    m_customSrcPath = _customSrcPath;
    m_customSrcPathHasBeenSet = true;
}

bool DataRepositoryTaskAttribute::CustomSrcPathHasBeenSet() const
{
    return m_customSrcPathHasBeenSet;
}

