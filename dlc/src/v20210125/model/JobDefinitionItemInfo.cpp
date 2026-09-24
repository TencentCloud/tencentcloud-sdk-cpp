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

#include <tencentcloud/dlc/v20210125/model/JobDefinitionItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobDefinitionItemInfo::JobDefinitionItemInfo() :
    m_jobDefinitionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_majorTypeHasBeenSet(false),
    m_minorTypeHasBeenSet(false),
    m_checkpointLocationHasBeenSet(false),
    m_creatorSubUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_warehouseIdHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_runtimeCodeHasBeenSet(false),
    m_runtimeNameHasBeenSet(false),
    m_warehouseNameHasBeenSet(false)
{
}

CoreInternalOutcome JobDefinitionItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobDefinitionId") && !value["JobDefinitionId"].IsNull())
    {
        if (!value["JobDefinitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.JobDefinitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDefinitionId = string(value["JobDefinitionId"].GetString());
        m_jobDefinitionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MajorType") && !value["MajorType"].IsNull())
    {
        if (!value["MajorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.MajorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_majorType = string(value["MajorType"].GetString());
        m_majorTypeHasBeenSet = true;
    }

    if (value.HasMember("MinorType") && !value["MinorType"].IsNull())
    {
        if (!value["MinorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.MinorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minorType = string(value["MinorType"].GetString());
        m_minorTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckpointLocation") && !value["CheckpointLocation"].IsNull())
    {
        if (!value["CheckpointLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.CheckpointLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkpointLocation = string(value["CheckpointLocation"].GetString());
        m_checkpointLocationHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubUin") && !value["CreatorSubUin"].IsNull())
    {
        if (!value["CreatorSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.CreatorSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubUin = string(value["CreatorSubUin"].GetString());
        m_creatorSubUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(value["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("WarehouseId") && !value["WarehouseId"].IsNull())
    {
        if (!value["WarehouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.WarehouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseId = string(value["WarehouseId"].GetString());
        m_warehouseIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RuntimeCode") && !value["RuntimeCode"].IsNull())
    {
        if (!value["RuntimeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.RuntimeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeCode = string(value["RuntimeCode"].GetString());
        m_runtimeCodeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeName") && !value["RuntimeName"].IsNull())
    {
        if (!value["RuntimeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.RuntimeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeName = string(value["RuntimeName"].GetString());
        m_runtimeNameHasBeenSet = true;
    }

    if (value.HasMember("WarehouseName") && !value["WarehouseName"].IsNull())
    {
        if (!value["WarehouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDefinitionItemInfo.WarehouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseName = string(value["WarehouseName"].GetString());
        m_warehouseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobDefinitionItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobDefinitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDefinitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobDefinitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_checkpointLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkpointLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
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

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_runtimeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeName.c_str(), allocator).Move(), allocator);
    }

    if (m_warehouseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseName.c_str(), allocator).Move(), allocator);
    }

}


string JobDefinitionItemInfo::GetJobDefinitionId() const
{
    return m_jobDefinitionId;
}

void JobDefinitionItemInfo::SetJobDefinitionId(const string& _jobDefinitionId)
{
    m_jobDefinitionId = _jobDefinitionId;
    m_jobDefinitionIdHasBeenSet = true;
}

bool JobDefinitionItemInfo::JobDefinitionIdHasBeenSet() const
{
    return m_jobDefinitionIdHasBeenSet;
}

string JobDefinitionItemInfo::GetName() const
{
    return m_name;
}

void JobDefinitionItemInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JobDefinitionItemInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string JobDefinitionItemInfo::GetDescription() const
{
    return m_description;
}

void JobDefinitionItemInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JobDefinitionItemInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JobDefinitionItemInfo::GetMajorType() const
{
    return m_majorType;
}

void JobDefinitionItemInfo::SetMajorType(const string& _majorType)
{
    m_majorType = _majorType;
    m_majorTypeHasBeenSet = true;
}

bool JobDefinitionItemInfo::MajorTypeHasBeenSet() const
{
    return m_majorTypeHasBeenSet;
}

string JobDefinitionItemInfo::GetMinorType() const
{
    return m_minorType;
}

void JobDefinitionItemInfo::SetMinorType(const string& _minorType)
{
    m_minorType = _minorType;
    m_minorTypeHasBeenSet = true;
}

bool JobDefinitionItemInfo::MinorTypeHasBeenSet() const
{
    return m_minorTypeHasBeenSet;
}

string JobDefinitionItemInfo::GetCheckpointLocation() const
{
    return m_checkpointLocation;
}

void JobDefinitionItemInfo::SetCheckpointLocation(const string& _checkpointLocation)
{
    m_checkpointLocation = _checkpointLocation;
    m_checkpointLocationHasBeenSet = true;
}

bool JobDefinitionItemInfo::CheckpointLocationHasBeenSet() const
{
    return m_checkpointLocationHasBeenSet;
}

string JobDefinitionItemInfo::GetCreatorSubUin() const
{
    return m_creatorSubUin;
}

void JobDefinitionItemInfo::SetCreatorSubUin(const string& _creatorSubUin)
{
    m_creatorSubUin = _creatorSubUin;
    m_creatorSubUinHasBeenSet = true;
}

bool JobDefinitionItemInfo::CreatorSubUinHasBeenSet() const
{
    return m_creatorSubUinHasBeenSet;
}

int64_t JobDefinitionItemInfo::GetCreateTime() const
{
    return m_createTime;
}

void JobDefinitionItemInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobDefinitionItemInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t JobDefinitionItemInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void JobDefinitionItemInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobDefinitionItemInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobDefinitionItemInfo::GetPartitionCode() const
{
    return m_partitionCode;
}

void JobDefinitionItemInfo::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool JobDefinitionItemInfo::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string JobDefinitionItemInfo::GetPartitionName() const
{
    return m_partitionName;
}

void JobDefinitionItemInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool JobDefinitionItemInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string JobDefinitionItemInfo::GetQueueName() const
{
    return m_queueName;
}

void JobDefinitionItemInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool JobDefinitionItemInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string JobDefinitionItemInfo::GetRunMode() const
{
    return m_runMode;
}

void JobDefinitionItemInfo::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool JobDefinitionItemInfo::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string JobDefinitionItemInfo::GetWarehouseId() const
{
    return m_warehouseId;
}

void JobDefinitionItemInfo::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool JobDefinitionItemInfo::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}

int64_t JobDefinitionItemInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void JobDefinitionItemInfo::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool JobDefinitionItemInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string JobDefinitionItemInfo::GetRuntimeCode() const
{
    return m_runtimeCode;
}

void JobDefinitionItemInfo::SetRuntimeCode(const string& _runtimeCode)
{
    m_runtimeCode = _runtimeCode;
    m_runtimeCodeHasBeenSet = true;
}

bool JobDefinitionItemInfo::RuntimeCodeHasBeenSet() const
{
    return m_runtimeCodeHasBeenSet;
}

string JobDefinitionItemInfo::GetRuntimeName() const
{
    return m_runtimeName;
}

void JobDefinitionItemInfo::SetRuntimeName(const string& _runtimeName)
{
    m_runtimeName = _runtimeName;
    m_runtimeNameHasBeenSet = true;
}

bool JobDefinitionItemInfo::RuntimeNameHasBeenSet() const
{
    return m_runtimeNameHasBeenSet;
}

string JobDefinitionItemInfo::GetWarehouseName() const
{
    return m_warehouseName;
}

void JobDefinitionItemInfo::SetWarehouseName(const string& _warehouseName)
{
    m_warehouseName = _warehouseName;
    m_warehouseNameHasBeenSet = true;
}

bool JobDefinitionItemInfo::WarehouseNameHasBeenSet() const
{
    return m_warehouseNameHasBeenSet;
}

