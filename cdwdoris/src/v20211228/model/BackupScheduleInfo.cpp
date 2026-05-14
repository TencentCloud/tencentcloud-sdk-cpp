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

#include <tencentcloud/cdwdoris/v20211228/model/BackupScheduleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BackupScheduleInfo::BackupScheduleInfo() :
    m_backupTypeHasBeenSet(false),
    m_existCountHasBeenSet(false),
    m_cosSourceInfoHasBeenSet(false),
    m_dorisSourceInfoHasBeenSet(false),
    m_restoreTypeHasBeenSet(false),
    m_snapshotRemainPolicyHasBeenSet(false),
    m_dataRemoteRegionHasBeenSet(false),
    m_isWithinGracePeriodHasBeenSet(false),
    m_gracePeriodHasBeenSet(false),
    m_graceStartTimeHasBeenSet(false),
    m_bucketTypeHasBeenSet(false),
    m_enableSecurityLockHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_bucketEncryptionHasBeenSet(false)
{
}

CoreInternalOutcome BackupScheduleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.BackupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = value["BackupType"].GetInt64();
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("ExistCount") && !value["ExistCount"].IsNull())
    {
        if (!value["ExistCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.ExistCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_existCount = value["ExistCount"].GetInt64();
        m_existCountHasBeenSet = true;
    }

    if (value.HasMember("CosSourceInfo") && !value["CosSourceInfo"].IsNull())
    {
        if (!value["CosSourceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.CosSourceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSourceInfo = string(value["CosSourceInfo"].GetString());
        m_cosSourceInfoHasBeenSet = true;
    }

    if (value.HasMember("DorisSourceInfo") && !value["DorisSourceInfo"].IsNull())
    {
        if (!value["DorisSourceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.DorisSourceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dorisSourceInfo = string(value["DorisSourceInfo"].GetString());
        m_dorisSourceInfoHasBeenSet = true;
    }

    if (value.HasMember("RestoreType") && !value["RestoreType"].IsNull())
    {
        if (!value["RestoreType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.RestoreType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreType = value["RestoreType"].GetInt64();
        m_restoreTypeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotRemainPolicy") && !value["SnapshotRemainPolicy"].IsNull())
    {
        if (!value["SnapshotRemainPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.SnapshotRemainPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotRemainPolicy.Deserialize(value["SnapshotRemainPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotRemainPolicyHasBeenSet = true;
    }

    if (value.HasMember("DataRemoteRegion") && !value["DataRemoteRegion"].IsNull())
    {
        if (!value["DataRemoteRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.DataRemoteRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRemoteRegion = string(value["DataRemoteRegion"].GetString());
        m_dataRemoteRegionHasBeenSet = true;
    }

    if (value.HasMember("IsWithinGracePeriod") && !value["IsWithinGracePeriod"].IsNull())
    {
        if (!value["IsWithinGracePeriod"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.IsWithinGracePeriod` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWithinGracePeriod = value["IsWithinGracePeriod"].GetBool();
        m_isWithinGracePeriodHasBeenSet = true;
    }

    if (value.HasMember("GracePeriod") && !value["GracePeriod"].IsNull())
    {
        if (!value["GracePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.GracePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gracePeriod = value["GracePeriod"].GetInt64();
        m_gracePeriodHasBeenSet = true;
    }

    if (value.HasMember("GraceStartTime") && !value["GraceStartTime"].IsNull())
    {
        if (!value["GraceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.GraceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_graceStartTime = string(value["GraceStartTime"].GetString());
        m_graceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("BucketType") && !value["BucketType"].IsNull())
    {
        if (!value["BucketType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.BucketType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketType = string(value["BucketType"].GetString());
        m_bucketTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableSecurityLock") && !value["EnableSecurityLock"].IsNull())
    {
        if (!value["EnableSecurityLock"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.EnableSecurityLock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSecurityLock = value["EnableSecurityLock"].GetUint64();
        m_enableSecurityLockHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("BucketEncryption") && !value["BucketEncryption"].IsNull())
    {
        if (!value["BucketEncryption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfo.BucketEncryption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketEncryption.Deserialize(value["BucketEncryption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketEncryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupScheduleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupType, allocator);
    }

    if (m_existCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_existCount, allocator);
    }

    if (m_cosSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSourceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_dorisSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dorisSourceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreType, allocator);
    }

    if (m_snapshotRemainPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotRemainPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotRemainPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataRemoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRemoteRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isWithinGracePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWithinGracePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWithinGracePeriod, allocator);
    }

    if (m_gracePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GracePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gracePeriod, allocator);
    }

    if (m_graceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_graceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSecurityLockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSecurityLock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSecurityLock, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketEncryption.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t BackupScheduleInfo::GetBackupType() const
{
    return m_backupType;
}

void BackupScheduleInfo::SetBackupType(const int64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupScheduleInfo::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

int64_t BackupScheduleInfo::GetExistCount() const
{
    return m_existCount;
}

void BackupScheduleInfo::SetExistCount(const int64_t& _existCount)
{
    m_existCount = _existCount;
    m_existCountHasBeenSet = true;
}

bool BackupScheduleInfo::ExistCountHasBeenSet() const
{
    return m_existCountHasBeenSet;
}

string BackupScheduleInfo::GetCosSourceInfo() const
{
    return m_cosSourceInfo;
}

void BackupScheduleInfo::SetCosSourceInfo(const string& _cosSourceInfo)
{
    m_cosSourceInfo = _cosSourceInfo;
    m_cosSourceInfoHasBeenSet = true;
}

bool BackupScheduleInfo::CosSourceInfoHasBeenSet() const
{
    return m_cosSourceInfoHasBeenSet;
}

string BackupScheduleInfo::GetDorisSourceInfo() const
{
    return m_dorisSourceInfo;
}

void BackupScheduleInfo::SetDorisSourceInfo(const string& _dorisSourceInfo)
{
    m_dorisSourceInfo = _dorisSourceInfo;
    m_dorisSourceInfoHasBeenSet = true;
}

bool BackupScheduleInfo::DorisSourceInfoHasBeenSet() const
{
    return m_dorisSourceInfoHasBeenSet;
}

int64_t BackupScheduleInfo::GetRestoreType() const
{
    return m_restoreType;
}

void BackupScheduleInfo::SetRestoreType(const int64_t& _restoreType)
{
    m_restoreType = _restoreType;
    m_restoreTypeHasBeenSet = true;
}

bool BackupScheduleInfo::RestoreTypeHasBeenSet() const
{
    return m_restoreTypeHasBeenSet;
}

SnapshotRemainPolicy BackupScheduleInfo::GetSnapshotRemainPolicy() const
{
    return m_snapshotRemainPolicy;
}

void BackupScheduleInfo::SetSnapshotRemainPolicy(const SnapshotRemainPolicy& _snapshotRemainPolicy)
{
    m_snapshotRemainPolicy = _snapshotRemainPolicy;
    m_snapshotRemainPolicyHasBeenSet = true;
}

bool BackupScheduleInfo::SnapshotRemainPolicyHasBeenSet() const
{
    return m_snapshotRemainPolicyHasBeenSet;
}

string BackupScheduleInfo::GetDataRemoteRegion() const
{
    return m_dataRemoteRegion;
}

void BackupScheduleInfo::SetDataRemoteRegion(const string& _dataRemoteRegion)
{
    m_dataRemoteRegion = _dataRemoteRegion;
    m_dataRemoteRegionHasBeenSet = true;
}

bool BackupScheduleInfo::DataRemoteRegionHasBeenSet() const
{
    return m_dataRemoteRegionHasBeenSet;
}

bool BackupScheduleInfo::GetIsWithinGracePeriod() const
{
    return m_isWithinGracePeriod;
}

void BackupScheduleInfo::SetIsWithinGracePeriod(const bool& _isWithinGracePeriod)
{
    m_isWithinGracePeriod = _isWithinGracePeriod;
    m_isWithinGracePeriodHasBeenSet = true;
}

bool BackupScheduleInfo::IsWithinGracePeriodHasBeenSet() const
{
    return m_isWithinGracePeriodHasBeenSet;
}

int64_t BackupScheduleInfo::GetGracePeriod() const
{
    return m_gracePeriod;
}

void BackupScheduleInfo::SetGracePeriod(const int64_t& _gracePeriod)
{
    m_gracePeriod = _gracePeriod;
    m_gracePeriodHasBeenSet = true;
}

bool BackupScheduleInfo::GracePeriodHasBeenSet() const
{
    return m_gracePeriodHasBeenSet;
}

string BackupScheduleInfo::GetGraceStartTime() const
{
    return m_graceStartTime;
}

void BackupScheduleInfo::SetGraceStartTime(const string& _graceStartTime)
{
    m_graceStartTime = _graceStartTime;
    m_graceStartTimeHasBeenSet = true;
}

bool BackupScheduleInfo::GraceStartTimeHasBeenSet() const
{
    return m_graceStartTimeHasBeenSet;
}

string BackupScheduleInfo::GetBucketType() const
{
    return m_bucketType;
}

void BackupScheduleInfo::SetBucketType(const string& _bucketType)
{
    m_bucketType = _bucketType;
    m_bucketTypeHasBeenSet = true;
}

bool BackupScheduleInfo::BucketTypeHasBeenSet() const
{
    return m_bucketTypeHasBeenSet;
}

uint64_t BackupScheduleInfo::GetEnableSecurityLock() const
{
    return m_enableSecurityLock;
}

void BackupScheduleInfo::SetEnableSecurityLock(const uint64_t& _enableSecurityLock)
{
    m_enableSecurityLock = _enableSecurityLock;
    m_enableSecurityLockHasBeenSet = true;
}

bool BackupScheduleInfo::EnableSecurityLockHasBeenSet() const
{
    return m_enableSecurityLockHasBeenSet;
}

string BackupScheduleInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BackupScheduleInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupScheduleInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupScheduleInfo::GetInstanceName() const
{
    return m_instanceName;
}

void BackupScheduleInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BackupScheduleInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string BackupScheduleInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void BackupScheduleInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool BackupScheduleInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string BackupScheduleInfo::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void BackupScheduleInfo::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool BackupScheduleInfo::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

BucketEncryptionInfo BackupScheduleInfo::GetBucketEncryption() const
{
    return m_bucketEncryption;
}

void BackupScheduleInfo::SetBucketEncryption(const BucketEncryptionInfo& _bucketEncryption)
{
    m_bucketEncryption = _bucketEncryption;
    m_bucketEncryptionHasBeenSet = true;
}

bool BackupScheduleInfo::BucketEncryptionHasBeenSet() const
{
    return m_bucketEncryptionHasBeenSet;
}

