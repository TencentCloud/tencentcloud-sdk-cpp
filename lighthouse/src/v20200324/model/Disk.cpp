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

#include <tencentcloud/lighthouse/v20200324/model/Disk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Disk::Disk() :
    m_diskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_diskStateHasBeenSet(false),
    m_attachedHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_latestOperationRequestIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_diskBackupCountHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false)
{
}

CoreInternalOutcome Disk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("DiskState") && !value["DiskState"].IsNull())
    {
        if (!value["DiskState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskState = string(value["DiskState"].GetString());
        m_diskStateHasBeenSet = true;
    }

    if (value.HasMember("Attached") && !value["Attached"].IsNull())
    {
        if (!value["Attached"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Attached` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_attached = value["Attached"].GetBool();
        m_attachedHasBeenSet = true;
    }

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationRequestId") && !value["LatestOperationRequestId"].IsNull())
    {
        if (!value["LatestOperationRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.LatestOperationRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationRequestId = string(value["LatestOperationRequestId"].GetString());
        m_latestOperationRequestIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupCount") && !value["DiskBackupCount"].IsNull())
    {
        if (!value["DiskBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupCount = value["DiskBackupCount"].GetInt64();
        m_diskBackupCountHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupQuota") && !value["DiskBackupQuota"].IsNull())
    {
        if (!value["DiskBackupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskBackupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupQuota = value["DiskBackupQuota"].GetInt64();
        m_diskBackupQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Disk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_diskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskState.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attached, allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_diskBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskBackupCount, allocator);
    }

    if (m_diskBackupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskBackupQuota, allocator);
    }

}


string Disk::GetDiskId() const
{
    return m_diskId;
}

void Disk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool Disk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string Disk::GetInstanceId() const
{
    return m_instanceId;
}

void Disk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Disk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Disk::GetZone() const
{
    return m_zone;
}

void Disk::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Disk::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Disk::GetDiskName() const
{
    return m_diskName;
}

void Disk::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool Disk::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

string Disk::GetDiskUsage() const
{
    return m_diskUsage;
}

void Disk::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool Disk::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string Disk::GetDiskType() const
{
    return m_diskType;
}

void Disk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Disk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string Disk::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void Disk::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool Disk::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

int64_t Disk::GetDiskSize() const
{
    return m_diskSize;
}

void Disk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Disk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string Disk::GetRenewFlag() const
{
    return m_renewFlag;
}

void Disk::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Disk::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string Disk::GetDiskState() const
{
    return m_diskState;
}

void Disk::SetDiskState(const string& _diskState)
{
    m_diskState = _diskState;
    m_diskStateHasBeenSet = true;
}

bool Disk::DiskStateHasBeenSet() const
{
    return m_diskStateHasBeenSet;
}

bool Disk::GetAttached() const
{
    return m_attached;
}

void Disk::SetAttached(const bool& _attached)
{
    m_attached = _attached;
    m_attachedHasBeenSet = true;
}

bool Disk::AttachedHasBeenSet() const
{
    return m_attachedHasBeenSet;
}

bool Disk::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void Disk::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool Disk::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

string Disk::GetLatestOperation() const
{
    return m_latestOperation;
}

void Disk::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool Disk::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string Disk::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void Disk::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool Disk::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

string Disk::GetLatestOperationRequestId() const
{
    return m_latestOperationRequestId;
}

void Disk::SetLatestOperationRequestId(const string& _latestOperationRequestId)
{
    m_latestOperationRequestId = _latestOperationRequestId;
    m_latestOperationRequestIdHasBeenSet = true;
}

bool Disk::LatestOperationRequestIdHasBeenSet() const
{
    return m_latestOperationRequestIdHasBeenSet;
}

string Disk::GetCreatedTime() const
{
    return m_createdTime;
}

void Disk::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Disk::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Disk::GetExpiredTime() const
{
    return m_expiredTime;
}

void Disk::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Disk::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string Disk::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Disk::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Disk::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

int64_t Disk::GetDiskBackupCount() const
{
    return m_diskBackupCount;
}

void Disk::SetDiskBackupCount(const int64_t& _diskBackupCount)
{
    m_diskBackupCount = _diskBackupCount;
    m_diskBackupCountHasBeenSet = true;
}

bool Disk::DiskBackupCountHasBeenSet() const
{
    return m_diskBackupCountHasBeenSet;
}

int64_t Disk::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void Disk::SetDiskBackupQuota(const int64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool Disk::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}

