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

#include <tencentcloud/cbs/v20170312/model/Disk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

Disk::Disk() :
    m_deleteWithInstanceHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskStateHasBeenSet(false),
    m_snapshotCountHasBeenSet(false),
    m_autoRenewFlagErrorHasBeenSet(false),
    m_rollbackingHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_backupDiskHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_attachModeHasBeenSet(false),
    m_autoSnapshotPolicyIdsHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false),
    m_migratingHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_snapshotSizeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_isReturnableHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_attachedHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_migratePercentHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_portableHasBeenSet(false),
    m_snapshotAbilityHasBeenSet(false),
    m_deadlineErrorHasBeenSet(false),
    m_rollbackPercentHasBeenSet(false),
    m_differDaysOfDeadlineHasBeenSet(false),
    m_returnFailCodeHasBeenSet(false),
    m_shareableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deleteSnapshotHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false),
    m_diskBackupCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_lastAttachInsIdHasBeenSet(false),
    m_errorPromptHasBeenSet(false),
    m_burstPerformanceHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

CoreInternalOutcome Disk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
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

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
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

    if (value.HasMember("SnapshotCount") && !value["SnapshotCount"].IsNull())
    {
        if (!value["SnapshotCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.SnapshotCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotCount = value["SnapshotCount"].GetInt64();
        m_snapshotCountHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlagError") && !value["AutoRenewFlagError"].IsNull())
    {
        if (!value["AutoRenewFlagError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.AutoRenewFlagError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlagError = value["AutoRenewFlagError"].GetBool();
        m_autoRenewFlagErrorHasBeenSet = true;
    }

    if (value.HasMember("Rollbacking") && !value["Rollbacking"].IsNull())
    {
        if (!value["Rollbacking"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Rollbacking` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rollbacking = value["Rollbacking"].GetBool();
        m_rollbackingHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdList") && !value["InstanceIdList"].IsNull())
    {
        if (!value["InstanceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Disk.InstanceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdList.push_back((*itr).GetString());
        }
        m_instanceIdListHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
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

    if (value.HasMember("BackupDisk") && !value["BackupDisk"].IsNull())
    {
        if (!value["BackupDisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.BackupDisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backupDisk = value["BackupDisk"].GetBool();
        m_backupDiskHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Disk.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
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

    if (value.HasMember("AttachMode") && !value["AttachMode"].IsNull())
    {
        if (!value["AttachMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.AttachMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachMode = string(value["AttachMode"].GetString());
        m_attachModeHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyIds") && !value["AutoSnapshotPolicyIds"].IsNull())
    {
        if (!value["AutoSnapshotPolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Disk.AutoSnapshotPolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoSnapshotPolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoSnapshotPolicyIds.push_back((*itr).GetString());
        }
        m_autoSnapshotPolicyIdsHasBeenSet = true;
    }

    if (value.HasMember("ThroughputPerformance") && !value["ThroughputPerformance"].IsNull())
    {
        if (!value["ThroughputPerformance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.ThroughputPerformance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_throughputPerformance = value["ThroughputPerformance"].GetUint64();
        m_throughputPerformanceHasBeenSet = true;
    }

    if (value.HasMember("Migrating") && !value["Migrating"].IsNull())
    {
        if (!value["Migrating"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Migrating` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_migrating = value["Migrating"].GetBool();
        m_migratingHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotSize") && !value["SnapshotSize"].IsNull())
    {
        if (!value["SnapshotSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.SnapshotSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotSize = value["SnapshotSize"].GetUint64();
        m_snapshotSizeHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("IsReturnable") && !value["IsReturnable"].IsNull())
    {
        if (!value["IsReturnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.IsReturnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReturnable = value["IsReturnable"].GetBool();
        m_isReturnableHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
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

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("MigratePercent") && !value["MigratePercent"].IsNull())
    {
        if (!value["MigratePercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.MigratePercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migratePercent = value["MigratePercent"].GetUint64();
        m_migratePercentHasBeenSet = true;
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

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Portable") && !value["Portable"].IsNull())
    {
        if (!value["Portable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Portable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_portable = value["Portable"].GetBool();
        m_portableHasBeenSet = true;
    }

    if (value.HasMember("SnapshotAbility") && !value["SnapshotAbility"].IsNull())
    {
        if (!value["SnapshotAbility"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.SnapshotAbility` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotAbility = value["SnapshotAbility"].GetBool();
        m_snapshotAbilityHasBeenSet = true;
    }

    if (value.HasMember("DeadlineError") && !value["DeadlineError"].IsNull())
    {
        if (!value["DeadlineError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DeadlineError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineError = value["DeadlineError"].GetBool();
        m_deadlineErrorHasBeenSet = true;
    }

    if (value.HasMember("RollbackPercent") && !value["RollbackPercent"].IsNull())
    {
        if (!value["RollbackPercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.RollbackPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackPercent = value["RollbackPercent"].GetUint64();
        m_rollbackPercentHasBeenSet = true;
    }

    if (value.HasMember("DifferDaysOfDeadline") && !value["DifferDaysOfDeadline"].IsNull())
    {
        if (!value["DifferDaysOfDeadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DifferDaysOfDeadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_differDaysOfDeadline = value["DifferDaysOfDeadline"].GetInt64();
        m_differDaysOfDeadlineHasBeenSet = true;
    }

    if (value.HasMember("ReturnFailCode") && !value["ReturnFailCode"].IsNull())
    {
        if (!value["ReturnFailCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.ReturnFailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnFailCode = value["ReturnFailCode"].GetInt64();
        m_returnFailCodeHasBeenSet = true;
    }

    if (value.HasMember("Shareable") && !value["Shareable"].IsNull())
    {
        if (!value["Shareable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.Shareable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shareable = value["Shareable"].GetBool();
        m_shareableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeleteSnapshot") && !value["DeleteSnapshot"].IsNull())
    {
        if (!value["DeleteSnapshot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DeleteSnapshot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteSnapshot = value["DeleteSnapshot"].GetInt64();
        m_deleteSnapshotHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupQuota") && !value["DiskBackupQuota"].IsNull())
    {
        if (!value["DiskBackupQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskBackupQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupQuota = value["DiskBackupQuota"].GetUint64();
        m_diskBackupQuotaHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupCount") && !value["DiskBackupCount"].IsNull())
    {
        if (!value["DiskBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupCount = value["DiskBackupCount"].GetUint64();
        m_diskBackupCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("LastAttachInsId") && !value["LastAttachInsId"].IsNull())
    {
        if (!value["LastAttachInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.LastAttachInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAttachInsId = string(value["LastAttachInsId"].GetString());
        m_lastAttachInsIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorPrompt") && !value["ErrorPrompt"].IsNull())
    {
        if (!value["ErrorPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.ErrorPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorPrompt = string(value["ErrorPrompt"].GetString());
        m_errorPromptHasBeenSet = true;
    }

    if (value.HasMember("BurstPerformance") && !value["BurstPerformance"].IsNull())
    {
        if (!value["BurstPerformance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.BurstPerformance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_burstPerformance = value["BurstPerformance"].GetBool();
        m_burstPerformanceHasBeenSet = true;
    }

    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.EncryptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = string(value["EncryptType"].GetString());
        m_encryptTypeHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Disk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskState.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotCount, allocator);
    }

    if (m_autoRenewFlagErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlagError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlagError, allocator);
    }

    if (m_rollbackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rollbacking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbacking, allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupDisk, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSnapshotPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoSnapshotPolicyIds.begin(); itr != m_autoSnapshotPolicyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_migratingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Migrating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrating, allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotSize, allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isReturnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReturnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReturnable, allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attached, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_migratePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigratePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migratePercent, allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_portableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Portable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portable, allocator);
    }

    if (m_snapshotAbilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotAbility, allocator);
    }

    if (m_deadlineErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadlineError, allocator);
    }

    if (m_rollbackPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbackPercent, allocator);
    }

    if (m_differDaysOfDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferDaysOfDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differDaysOfDeadline, allocator);
    }

    if (m_returnFailCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnFailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnFailCode, allocator);
    }

    if (m_shareableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shareable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteSnapshot, allocator);
    }

    if (m_diskBackupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskBackupQuota, allocator);
    }

    if (m_diskBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskBackupCount, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAttachInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAttachInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAttachInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_burstPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurstPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burstPerformance, allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

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

int64_t Disk::GetSnapshotCount() const
{
    return m_snapshotCount;
}

void Disk::SetSnapshotCount(const int64_t& _snapshotCount)
{
    m_snapshotCount = _snapshotCount;
    m_snapshotCountHasBeenSet = true;
}

bool Disk::SnapshotCountHasBeenSet() const
{
    return m_snapshotCountHasBeenSet;
}

bool Disk::GetAutoRenewFlagError() const
{
    return m_autoRenewFlagError;
}

void Disk::SetAutoRenewFlagError(const bool& _autoRenewFlagError)
{
    m_autoRenewFlagError = _autoRenewFlagError;
    m_autoRenewFlagErrorHasBeenSet = true;
}

bool Disk::AutoRenewFlagErrorHasBeenSet() const
{
    return m_autoRenewFlagErrorHasBeenSet;
}

bool Disk::GetRollbacking() const
{
    return m_rollbacking;
}

void Disk::SetRollbacking(const bool& _rollbacking)
{
    m_rollbacking = _rollbacking;
    m_rollbackingHasBeenSet = true;
}

bool Disk::RollbackingHasBeenSet() const
{
    return m_rollbackingHasBeenSet;
}

vector<string> Disk::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void Disk::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool Disk::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

bool Disk::GetEncrypt() const
{
    return m_encrypt;
}

void Disk::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool Disk::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
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

bool Disk::GetBackupDisk() const
{
    return m_backupDisk;
}

void Disk::SetBackupDisk(const bool& _backupDisk)
{
    m_backupDisk = _backupDisk;
    m_backupDiskHasBeenSet = true;
}

bool Disk::BackupDiskHasBeenSet() const
{
    return m_backupDiskHasBeenSet;
}

vector<Tag> Disk::GetTags() const
{
    return m_tags;
}

void Disk::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Disk::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
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

string Disk::GetAttachMode() const
{
    return m_attachMode;
}

void Disk::SetAttachMode(const string& _attachMode)
{
    m_attachMode = _attachMode;
    m_attachModeHasBeenSet = true;
}

bool Disk::AttachModeHasBeenSet() const
{
    return m_attachModeHasBeenSet;
}

vector<string> Disk::GetAutoSnapshotPolicyIds() const
{
    return m_autoSnapshotPolicyIds;
}

void Disk::SetAutoSnapshotPolicyIds(const vector<string>& _autoSnapshotPolicyIds)
{
    m_autoSnapshotPolicyIds = _autoSnapshotPolicyIds;
    m_autoSnapshotPolicyIdsHasBeenSet = true;
}

bool Disk::AutoSnapshotPolicyIdsHasBeenSet() const
{
    return m_autoSnapshotPolicyIdsHasBeenSet;
}

uint64_t Disk::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void Disk::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool Disk::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

bool Disk::GetMigrating() const
{
    return m_migrating;
}

void Disk::SetMigrating(const bool& _migrating)
{
    m_migrating = _migrating;
    m_migratingHasBeenSet = true;
}

bool Disk::MigratingHasBeenSet() const
{
    return m_migratingHasBeenSet;
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

uint64_t Disk::GetSnapshotSize() const
{
    return m_snapshotSize;
}

void Disk::SetSnapshotSize(const uint64_t& _snapshotSize)
{
    m_snapshotSize = _snapshotSize;
    m_snapshotSizeHasBeenSet = true;
}

bool Disk::SnapshotSizeHasBeenSet() const
{
    return m_snapshotSizeHasBeenSet;
}

Placement Disk::GetPlacement() const
{
    return m_placement;
}

void Disk::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool Disk::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

bool Disk::GetIsReturnable() const
{
    return m_isReturnable;
}

void Disk::SetIsReturnable(const bool& _isReturnable)
{
    m_isReturnable = _isReturnable;
    m_isReturnableHasBeenSet = true;
}

bool Disk::IsReturnableHasBeenSet() const
{
    return m_isReturnableHasBeenSet;
}

string Disk::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void Disk::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool Disk::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
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

uint64_t Disk::GetDiskSize() const
{
    return m_diskSize;
}

void Disk::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Disk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t Disk::GetMigratePercent() const
{
    return m_migratePercent;
}

void Disk::SetMigratePercent(const uint64_t& _migratePercent)
{
    m_migratePercent = _migratePercent;
    m_migratePercentHasBeenSet = true;
}

bool Disk::MigratePercentHasBeenSet() const
{
    return m_migratePercentHasBeenSet;
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

bool Disk::GetPortable() const
{
    return m_portable;
}

void Disk::SetPortable(const bool& _portable)
{
    m_portable = _portable;
    m_portableHasBeenSet = true;
}

bool Disk::PortableHasBeenSet() const
{
    return m_portableHasBeenSet;
}

bool Disk::GetSnapshotAbility() const
{
    return m_snapshotAbility;
}

void Disk::SetSnapshotAbility(const bool& _snapshotAbility)
{
    m_snapshotAbility = _snapshotAbility;
    m_snapshotAbilityHasBeenSet = true;
}

bool Disk::SnapshotAbilityHasBeenSet() const
{
    return m_snapshotAbilityHasBeenSet;
}

bool Disk::GetDeadlineError() const
{
    return m_deadlineError;
}

void Disk::SetDeadlineError(const bool& _deadlineError)
{
    m_deadlineError = _deadlineError;
    m_deadlineErrorHasBeenSet = true;
}

bool Disk::DeadlineErrorHasBeenSet() const
{
    return m_deadlineErrorHasBeenSet;
}

uint64_t Disk::GetRollbackPercent() const
{
    return m_rollbackPercent;
}

void Disk::SetRollbackPercent(const uint64_t& _rollbackPercent)
{
    m_rollbackPercent = _rollbackPercent;
    m_rollbackPercentHasBeenSet = true;
}

bool Disk::RollbackPercentHasBeenSet() const
{
    return m_rollbackPercentHasBeenSet;
}

int64_t Disk::GetDifferDaysOfDeadline() const
{
    return m_differDaysOfDeadline;
}

void Disk::SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline)
{
    m_differDaysOfDeadline = _differDaysOfDeadline;
    m_differDaysOfDeadlineHasBeenSet = true;
}

bool Disk::DifferDaysOfDeadlineHasBeenSet() const
{
    return m_differDaysOfDeadlineHasBeenSet;
}

int64_t Disk::GetReturnFailCode() const
{
    return m_returnFailCode;
}

void Disk::SetReturnFailCode(const int64_t& _returnFailCode)
{
    m_returnFailCode = _returnFailCode;
    m_returnFailCodeHasBeenSet = true;
}

bool Disk::ReturnFailCodeHasBeenSet() const
{
    return m_returnFailCodeHasBeenSet;
}

bool Disk::GetShareable() const
{
    return m_shareable;
}

void Disk::SetShareable(const bool& _shareable)
{
    m_shareable = _shareable;
    m_shareableHasBeenSet = true;
}

bool Disk::ShareableHasBeenSet() const
{
    return m_shareableHasBeenSet;
}

string Disk::GetCreateTime() const
{
    return m_createTime;
}

void Disk::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Disk::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Disk::GetDeleteSnapshot() const
{
    return m_deleteSnapshot;
}

void Disk::SetDeleteSnapshot(const int64_t& _deleteSnapshot)
{
    m_deleteSnapshot = _deleteSnapshot;
    m_deleteSnapshotHasBeenSet = true;
}

bool Disk::DeleteSnapshotHasBeenSet() const
{
    return m_deleteSnapshotHasBeenSet;
}

uint64_t Disk::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void Disk::SetDiskBackupQuota(const uint64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool Disk::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}

uint64_t Disk::GetDiskBackupCount() const
{
    return m_diskBackupCount;
}

void Disk::SetDiskBackupCount(const uint64_t& _diskBackupCount)
{
    m_diskBackupCount = _diskBackupCount;
    m_diskBackupCountHasBeenSet = true;
}

bool Disk::DiskBackupCountHasBeenSet() const
{
    return m_diskBackupCountHasBeenSet;
}

string Disk::GetInstanceType() const
{
    return m_instanceType;
}

void Disk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Disk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Disk::GetLastAttachInsId() const
{
    return m_lastAttachInsId;
}

void Disk::SetLastAttachInsId(const string& _lastAttachInsId)
{
    m_lastAttachInsId = _lastAttachInsId;
    m_lastAttachInsIdHasBeenSet = true;
}

bool Disk::LastAttachInsIdHasBeenSet() const
{
    return m_lastAttachInsIdHasBeenSet;
}

string Disk::GetErrorPrompt() const
{
    return m_errorPrompt;
}

void Disk::SetErrorPrompt(const string& _errorPrompt)
{
    m_errorPrompt = _errorPrompt;
    m_errorPromptHasBeenSet = true;
}

bool Disk::ErrorPromptHasBeenSet() const
{
    return m_errorPromptHasBeenSet;
}

bool Disk::GetBurstPerformance() const
{
    return m_burstPerformance;
}

void Disk::SetBurstPerformance(const bool& _burstPerformance)
{
    m_burstPerformance = _burstPerformance;
    m_burstPerformanceHasBeenSet = true;
}

bool Disk::BurstPerformanceHasBeenSet() const
{
    return m_burstPerformanceHasBeenSet;
}

string Disk::GetEncryptType() const
{
    return m_encryptType;
}

void Disk::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool Disk::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string Disk::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void Disk::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool Disk::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

