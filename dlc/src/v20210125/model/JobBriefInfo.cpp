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

#include <tencentcloud/dlc/v20210125/model/JobBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobBriefInfo::JobBriefInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_creatorSubUinHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_majorTypeHasBeenSet(false),
    m_minorTypeHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_warehouseIdHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_checkpointLocationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_runningTimeMsHasBeenSet(false),
    m_warehouseNameHasBeenSet(false)
{
}

CoreInternalOutcome JobBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubUin") && !value["CreatorSubUin"].IsNull())
    {
        if (!value["CreatorSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.CreatorSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubUin = string(value["CreatorSubUin"].GetString());
        m_creatorSubUinHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("MajorType") && !value["MajorType"].IsNull())
    {
        if (!value["MajorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.MajorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_majorType = string(value["MajorType"].GetString());
        m_majorTypeHasBeenSet = true;
    }

    if (value.HasMember("MinorType") && !value["MinorType"].IsNull())
    {
        if (!value["MinorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.MinorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minorType = string(value["MinorType"].GetString());
        m_minorTypeHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(value["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("WarehouseId") && !value["WarehouseId"].IsNull())
    {
        if (!value["WarehouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.WarehouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseId = string(value["WarehouseId"].GetString());
        m_warehouseIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("CheckpointLocation") && !value["CheckpointLocation"].IsNull())
    {
        if (!value["CheckpointLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.CheckpointLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkpointLocation = string(value["CheckpointLocation"].GetString());
        m_checkpointLocationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.SubmitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = value["SubmitTime"].GetInt64();
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.FinishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = value["FinishTime"].GetInt64();
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("RunningTimeMs") && !value["RunningTimeMs"].IsNull())
    {
        if (!value["RunningTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.RunningTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTimeMs = value["RunningTimeMs"].GetInt64();
        m_runningTimeMsHasBeenSet = true;
    }

    if (value.HasMember("WarehouseName") && !value["WarehouseName"].IsNull())
    {
        if (!value["WarehouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobBriefInfo.WarehouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseName = string(value["WarehouseName"].GetString());
        m_warehouseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_majorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_majorType.c_str(), allocator).Move(), allocator);
    }

    if (m_minorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minorType.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_warehouseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkpointLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkpointLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submitTime, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishTime, allocator);
    }

    if (m_runningTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTimeMs, allocator);
    }

    if (m_warehouseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseName.c_str(), allocator).Move(), allocator);
    }

}


string JobBriefInfo::GetJobId() const
{
    return m_jobId;
}

void JobBriefInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobBriefInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobBriefInfo::GetJobName() const
{
    return m_jobName;
}

void JobBriefInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobBriefInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobBriefInfo::GetCreatorSubUin() const
{
    return m_creatorSubUin;
}

void JobBriefInfo::SetCreatorSubUin(const string& _creatorSubUin)
{
    m_creatorSubUin = _creatorSubUin;
    m_creatorSubUinHasBeenSet = true;
}

bool JobBriefInfo::CreatorSubUinHasBeenSet() const
{
    return m_creatorSubUinHasBeenSet;
}

string JobBriefInfo::GetState() const
{
    return m_state;
}

void JobBriefInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool JobBriefInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string JobBriefInfo::GetMajorType() const
{
    return m_majorType;
}

void JobBriefInfo::SetMajorType(const string& _majorType)
{
    m_majorType = _majorType;
    m_majorTypeHasBeenSet = true;
}

bool JobBriefInfo::MajorTypeHasBeenSet() const
{
    return m_majorTypeHasBeenSet;
}

string JobBriefInfo::GetMinorType() const
{
    return m_minorType;
}

void JobBriefInfo::SetMinorType(const string& _minorType)
{
    m_minorType = _minorType;
    m_minorTypeHasBeenSet = true;
}

bool JobBriefInfo::MinorTypeHasBeenSet() const
{
    return m_minorTypeHasBeenSet;
}

string JobBriefInfo::GetRunMode() const
{
    return m_runMode;
}

void JobBriefInfo::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool JobBriefInfo::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string JobBriefInfo::GetWarehouseId() const
{
    return m_warehouseId;
}

void JobBriefInfo::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool JobBriefInfo::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}

string JobBriefInfo::GetPartitionCode() const
{
    return m_partitionCode;
}

void JobBriefInfo::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool JobBriefInfo::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string JobBriefInfo::GetPartitionName() const
{
    return m_partitionName;
}

void JobBriefInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool JobBriefInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string JobBriefInfo::GetQueueName() const
{
    return m_queueName;
}

void JobBriefInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool JobBriefInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string JobBriefInfo::GetCheckpointLocation() const
{
    return m_checkpointLocation;
}

void JobBriefInfo::SetCheckpointLocation(const string& _checkpointLocation)
{
    m_checkpointLocation = _checkpointLocation;
    m_checkpointLocationHasBeenSet = true;
}

bool JobBriefInfo::CheckpointLocationHasBeenSet() const
{
    return m_checkpointLocationHasBeenSet;
}

int64_t JobBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void JobBriefInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t JobBriefInfo::GetSubmitTime() const
{
    return m_submitTime;
}

void JobBriefInfo::SetSubmitTime(const int64_t& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool JobBriefInfo::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

int64_t JobBriefInfo::GetFinishTime() const
{
    return m_finishTime;
}

void JobBriefInfo::SetFinishTime(const int64_t& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool JobBriefInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t JobBriefInfo::GetRunningTimeMs() const
{
    return m_runningTimeMs;
}

void JobBriefInfo::SetRunningTimeMs(const int64_t& _runningTimeMs)
{
    m_runningTimeMs = _runningTimeMs;
    m_runningTimeMsHasBeenSet = true;
}

bool JobBriefInfo::RunningTimeMsHasBeenSet() const
{
    return m_runningTimeMsHasBeenSet;
}

string JobBriefInfo::GetWarehouseName() const
{
    return m_warehouseName;
}

void JobBriefInfo::SetWarehouseName(const string& _warehouseName)
{
    m_warehouseName = _warehouseName;
    m_warehouseNameHasBeenSet = true;
}

bool JobBriefInfo::WarehouseNameHasBeenSet() const
{
    return m_warehouseNameHasBeenSet;
}

