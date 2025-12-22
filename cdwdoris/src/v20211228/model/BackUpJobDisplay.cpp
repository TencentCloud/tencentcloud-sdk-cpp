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

#include <tencentcloud/cdwdoris/v20211228/model/BackUpJobDisplay.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BackUpJobDisplay::BackUpJobDisplay() :
    m_jobIdHasBeenSet(false),
    m_snapshotHasBeenSet(false),
    m_backUpSizeHasBeenSet(false),
    m_backUpSingleSizeHasBeenSet(false),
    m_backUpTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_jobStatusHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupTimeTypeHasBeenSet(false),
    m_dorisSourceInfoHasBeenSet(false),
    m_jobStatusNumHasBeenSet(false),
    m_backupCosInfoHasBeenSet(false),
    m_isUserDefineBucketHasBeenSet(false),
    m_errorReasonHasBeenSet(false),
    m_snapshotRemainPolicyHasBeenSet(false),
    m_isolationCountHasBeenSet(false),
    m_enableSecurityLockHasBeenSet(false),
    m_gracePeriodHasBeenSet(false),
    m_graceStartTimeHasBeenSet(false),
    m_isWithinGracePeriodHasBeenSet(false),
    m_useManagedBucketHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_dataRemoteRegionHasBeenSet(false),
    m_bucketEncryptionHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_encryptionEnabledHasBeenSet(false)
{
}

CoreInternalOutcome BackUpJobDisplay::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Snapshot") && !value["Snapshot"].IsNull())
    {
        if (!value["Snapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.Snapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshot = string(value["Snapshot"].GetString());
        m_snapshotHasBeenSet = true;
    }

    if (value.HasMember("BackUpSize") && !value["BackUpSize"].IsNull())
    {
        if (!value["BackUpSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backUpSize = value["BackUpSize"].GetInt64();
        m_backUpSizeHasBeenSet = true;
    }

    if (value.HasMember("BackUpSingleSize") && !value["BackUpSingleSize"].IsNull())
    {
        if (!value["BackUpSingleSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpSingleSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backUpSingleSize = value["BackUpSingleSize"].GetInt64();
        m_backUpSingleSizeHasBeenSet = true;
    }

    if (value.HasMember("BackUpTime") && !value["BackUpTime"].IsNull())
    {
        if (!value["BackUpTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backUpTime = string(value["BackUpTime"].GetString());
        m_backUpTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.JobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = string(value["JobStatus"].GetString());
        m_jobStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = value["BackupType"].GetInt64();
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupTimeType") && !value["BackupTimeType"].IsNull())
    {
        if (!value["BackupTimeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackupTimeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeType = value["BackupTimeType"].GetInt64();
        m_backupTimeTypeHasBeenSet = true;
    }

    if (value.HasMember("DorisSourceInfo") && !value["DorisSourceInfo"].IsNull())
    {
        if (!value["DorisSourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.DorisSourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dorisSourceInfo.Deserialize(value["DorisSourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dorisSourceInfoHasBeenSet = true;
    }

    if (value.HasMember("JobStatusNum") && !value["JobStatusNum"].IsNull())
    {
        if (!value["JobStatusNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.JobStatusNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatusNum = value["JobStatusNum"].GetInt64();
        m_jobStatusNumHasBeenSet = true;
    }

    if (value.HasMember("BackupCosInfo") && !value["BackupCosInfo"].IsNull())
    {
        if (!value["BackupCosInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackupCosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupCosInfo.Deserialize(value["BackupCosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupCosInfoHasBeenSet = true;
    }

    if (value.HasMember("IsUserDefineBucket") && !value["IsUserDefineBucket"].IsNull())
    {
        if (!value["IsUserDefineBucket"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.IsUserDefineBucket` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUserDefineBucket = value["IsUserDefineBucket"].GetBool();
        m_isUserDefineBucketHasBeenSet = true;
    }

    if (value.HasMember("ErrorReason") && !value["ErrorReason"].IsNull())
    {
        if (!value["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(value["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }

    if (value.HasMember("SnapshotRemainPolicy") && !value["SnapshotRemainPolicy"].IsNull())
    {
        if (!value["SnapshotRemainPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.SnapshotRemainPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotRemainPolicy.Deserialize(value["SnapshotRemainPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotRemainPolicyHasBeenSet = true;
    }

    if (value.HasMember("IsolationCount") && !value["IsolationCount"].IsNull())
    {
        if (!value["IsolationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.IsolationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolationCount = value["IsolationCount"].GetInt64();
        m_isolationCountHasBeenSet = true;
    }

    if (value.HasMember("EnableSecurityLock") && !value["EnableSecurityLock"].IsNull())
    {
        if (!value["EnableSecurityLock"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.EnableSecurityLock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSecurityLock = value["EnableSecurityLock"].GetUint64();
        m_enableSecurityLockHasBeenSet = true;
    }

    if (value.HasMember("GracePeriod") && !value["GracePeriod"].IsNull())
    {
        if (!value["GracePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.GracePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gracePeriod = value["GracePeriod"].GetUint64();
        m_gracePeriodHasBeenSet = true;
    }

    if (value.HasMember("GraceStartTime") && !value["GraceStartTime"].IsNull())
    {
        if (!value["GraceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.GraceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_graceStartTime = string(value["GraceStartTime"].GetString());
        m_graceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("IsWithinGracePeriod") && !value["IsWithinGracePeriod"].IsNull())
    {
        if (!value["IsWithinGracePeriod"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.IsWithinGracePeriod` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWithinGracePeriod = value["IsWithinGracePeriod"].GetBool();
        m_isWithinGracePeriodHasBeenSet = true;
    }

    if (value.HasMember("UseManagedBucket") && !value["UseManagedBucket"].IsNull())
    {
        if (!value["UseManagedBucket"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.UseManagedBucket` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useManagedBucket = value["UseManagedBucket"].GetBool();
        m_useManagedBucketHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("DataRemoteRegion") && !value["DataRemoteRegion"].IsNull())
    {
        if (!value["DataRemoteRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.DataRemoteRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRemoteRegion = string(value["DataRemoteRegion"].GetString());
        m_dataRemoteRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketEncryption") && !value["BucketEncryption"].IsNull())
    {
        if (!value["BucketEncryption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BucketEncryption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketEncryption.Deserialize(value["BucketEncryption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketEncryptionHasBeenSet = true;
    }

    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("EncryptionEnabled") && !value["EncryptionEnabled"].IsNull())
    {
        if (!value["EncryptionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.EncryptionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionEnabled = value["EncryptionEnabled"].GetBool();
        m_encryptionEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackUpJobDisplay::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_snapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_backUpSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpSize, allocator);
    }

    if (m_backUpSingleSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpSingleSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpSingleSize, allocator);
    }

    if (m_backUpTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backUpTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupType, allocator);
    }

    if (m_backupTimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTimeType, allocator);
    }

    if (m_dorisSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dorisSourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobStatusNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatusNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatusNum, allocator);
    }

    if (m_backupCosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupCosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isUserDefineBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUserDefineBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUserDefineBucket, allocator);
    }

    if (m_errorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorReason.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotRemainPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotRemainPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotRemainPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isolationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolationCount, allocator);
    }

    if (m_enableSecurityLockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSecurityLock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSecurityLock, allocator);
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

    if (m_isWithinGracePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWithinGracePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWithinGracePeriod, allocator);
    }

    if (m_useManagedBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseManagedBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useManagedBucket, allocator);
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

    if (m_dataRemoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRemoteRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketEncryption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionEnabled, allocator);
    }

}


int64_t BackUpJobDisplay::GetJobId() const
{
    return m_jobId;
}

void BackUpJobDisplay::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool BackUpJobDisplay::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string BackUpJobDisplay::GetSnapshot() const
{
    return m_snapshot;
}

void BackUpJobDisplay::SetSnapshot(const string& _snapshot)
{
    m_snapshot = _snapshot;
    m_snapshotHasBeenSet = true;
}

bool BackUpJobDisplay::SnapshotHasBeenSet() const
{
    return m_snapshotHasBeenSet;
}

int64_t BackUpJobDisplay::GetBackUpSize() const
{
    return m_backUpSize;
}

void BackUpJobDisplay::SetBackUpSize(const int64_t& _backUpSize)
{
    m_backUpSize = _backUpSize;
    m_backUpSizeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpSizeHasBeenSet() const
{
    return m_backUpSizeHasBeenSet;
}

int64_t BackUpJobDisplay::GetBackUpSingleSize() const
{
    return m_backUpSingleSize;
}

void BackUpJobDisplay::SetBackUpSingleSize(const int64_t& _backUpSingleSize)
{
    m_backUpSingleSize = _backUpSingleSize;
    m_backUpSingleSizeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpSingleSizeHasBeenSet() const
{
    return m_backUpSingleSizeHasBeenSet;
}

string BackUpJobDisplay::GetBackUpTime() const
{
    return m_backUpTime;
}

void BackUpJobDisplay::SetBackUpTime(const string& _backUpTime)
{
    m_backUpTime = _backUpTime;
    m_backUpTimeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpTimeHasBeenSet() const
{
    return m_backUpTimeHasBeenSet;
}

string BackUpJobDisplay::GetExpireTime() const
{
    return m_expireTime;
}

void BackUpJobDisplay::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BackUpJobDisplay::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string BackUpJobDisplay::GetJobStatus() const
{
    return m_jobStatus;
}

void BackUpJobDisplay::SetJobStatus(const string& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool BackUpJobDisplay::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

int64_t BackUpJobDisplay::GetBackupType() const
{
    return m_backupType;
}

void BackUpJobDisplay::SetBackupType(const int64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackUpJobDisplay::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

int64_t BackUpJobDisplay::GetBackupTimeType() const
{
    return m_backupTimeType;
}

void BackUpJobDisplay::SetBackupTimeType(const int64_t& _backupTimeType)
{
    m_backupTimeType = _backupTimeType;
    m_backupTimeTypeHasBeenSet = true;
}

bool BackUpJobDisplay::BackupTimeTypeHasBeenSet() const
{
    return m_backupTimeTypeHasBeenSet;
}

DorisSourceInfo BackUpJobDisplay::GetDorisSourceInfo() const
{
    return m_dorisSourceInfo;
}

void BackUpJobDisplay::SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo)
{
    m_dorisSourceInfo = _dorisSourceInfo;
    m_dorisSourceInfoHasBeenSet = true;
}

bool BackUpJobDisplay::DorisSourceInfoHasBeenSet() const
{
    return m_dorisSourceInfoHasBeenSet;
}

int64_t BackUpJobDisplay::GetJobStatusNum() const
{
    return m_jobStatusNum;
}

void BackUpJobDisplay::SetJobStatusNum(const int64_t& _jobStatusNum)
{
    m_jobStatusNum = _jobStatusNum;
    m_jobStatusNumHasBeenSet = true;
}

bool BackUpJobDisplay::JobStatusNumHasBeenSet() const
{
    return m_jobStatusNumHasBeenSet;
}

BackupCosInfo BackUpJobDisplay::GetBackupCosInfo() const
{
    return m_backupCosInfo;
}

void BackUpJobDisplay::SetBackupCosInfo(const BackupCosInfo& _backupCosInfo)
{
    m_backupCosInfo = _backupCosInfo;
    m_backupCosInfoHasBeenSet = true;
}

bool BackUpJobDisplay::BackupCosInfoHasBeenSet() const
{
    return m_backupCosInfoHasBeenSet;
}

bool BackUpJobDisplay::GetIsUserDefineBucket() const
{
    return m_isUserDefineBucket;
}

void BackUpJobDisplay::SetIsUserDefineBucket(const bool& _isUserDefineBucket)
{
    m_isUserDefineBucket = _isUserDefineBucket;
    m_isUserDefineBucketHasBeenSet = true;
}

bool BackUpJobDisplay::IsUserDefineBucketHasBeenSet() const
{
    return m_isUserDefineBucketHasBeenSet;
}

string BackUpJobDisplay::GetErrorReason() const
{
    return m_errorReason;
}

void BackUpJobDisplay::SetErrorReason(const string& _errorReason)
{
    m_errorReason = _errorReason;
    m_errorReasonHasBeenSet = true;
}

bool BackUpJobDisplay::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

SnapshotRemainPolicy BackUpJobDisplay::GetSnapshotRemainPolicy() const
{
    return m_snapshotRemainPolicy;
}

void BackUpJobDisplay::SetSnapshotRemainPolicy(const SnapshotRemainPolicy& _snapshotRemainPolicy)
{
    m_snapshotRemainPolicy = _snapshotRemainPolicy;
    m_snapshotRemainPolicyHasBeenSet = true;
}

bool BackUpJobDisplay::SnapshotRemainPolicyHasBeenSet() const
{
    return m_snapshotRemainPolicyHasBeenSet;
}

int64_t BackUpJobDisplay::GetIsolationCount() const
{
    return m_isolationCount;
}

void BackUpJobDisplay::SetIsolationCount(const int64_t& _isolationCount)
{
    m_isolationCount = _isolationCount;
    m_isolationCountHasBeenSet = true;
}

bool BackUpJobDisplay::IsolationCountHasBeenSet() const
{
    return m_isolationCountHasBeenSet;
}

uint64_t BackUpJobDisplay::GetEnableSecurityLock() const
{
    return m_enableSecurityLock;
}

void BackUpJobDisplay::SetEnableSecurityLock(const uint64_t& _enableSecurityLock)
{
    m_enableSecurityLock = _enableSecurityLock;
    m_enableSecurityLockHasBeenSet = true;
}

bool BackUpJobDisplay::EnableSecurityLockHasBeenSet() const
{
    return m_enableSecurityLockHasBeenSet;
}

uint64_t BackUpJobDisplay::GetGracePeriod() const
{
    return m_gracePeriod;
}

void BackUpJobDisplay::SetGracePeriod(const uint64_t& _gracePeriod)
{
    m_gracePeriod = _gracePeriod;
    m_gracePeriodHasBeenSet = true;
}

bool BackUpJobDisplay::GracePeriodHasBeenSet() const
{
    return m_gracePeriodHasBeenSet;
}

string BackUpJobDisplay::GetGraceStartTime() const
{
    return m_graceStartTime;
}

void BackUpJobDisplay::SetGraceStartTime(const string& _graceStartTime)
{
    m_graceStartTime = _graceStartTime;
    m_graceStartTimeHasBeenSet = true;
}

bool BackUpJobDisplay::GraceStartTimeHasBeenSet() const
{
    return m_graceStartTimeHasBeenSet;
}

bool BackUpJobDisplay::GetIsWithinGracePeriod() const
{
    return m_isWithinGracePeriod;
}

void BackUpJobDisplay::SetIsWithinGracePeriod(const bool& _isWithinGracePeriod)
{
    m_isWithinGracePeriod = _isWithinGracePeriod;
    m_isWithinGracePeriodHasBeenSet = true;
}

bool BackUpJobDisplay::IsWithinGracePeriodHasBeenSet() const
{
    return m_isWithinGracePeriodHasBeenSet;
}

bool BackUpJobDisplay::GetUseManagedBucket() const
{
    return m_useManagedBucket;
}

void BackUpJobDisplay::SetUseManagedBucket(const bool& _useManagedBucket)
{
    m_useManagedBucket = _useManagedBucket;
    m_useManagedBucketHasBeenSet = true;
}

bool BackUpJobDisplay::UseManagedBucketHasBeenSet() const
{
    return m_useManagedBucketHasBeenSet;
}

string BackUpJobDisplay::GetInstanceId() const
{
    return m_instanceId;
}

void BackUpJobDisplay::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackUpJobDisplay::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackUpJobDisplay::GetInstanceName() const
{
    return m_instanceName;
}

void BackUpJobDisplay::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BackUpJobDisplay::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string BackUpJobDisplay::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void BackUpJobDisplay::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool BackUpJobDisplay::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string BackUpJobDisplay::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void BackUpJobDisplay::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool BackUpJobDisplay::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

string BackUpJobDisplay::GetDataRemoteRegion() const
{
    return m_dataRemoteRegion;
}

void BackUpJobDisplay::SetDataRemoteRegion(const string& _dataRemoteRegion)
{
    m_dataRemoteRegion = _dataRemoteRegion;
    m_dataRemoteRegionHasBeenSet = true;
}

bool BackUpJobDisplay::DataRemoteRegionHasBeenSet() const
{
    return m_dataRemoteRegionHasBeenSet;
}

BucketEncryptionInfo BackUpJobDisplay::GetBucketEncryption() const
{
    return m_bucketEncryption;
}

void BackUpJobDisplay::SetBucketEncryption(const BucketEncryptionInfo& _bucketEncryption)
{
    m_bucketEncryption = _bucketEncryption;
    m_bucketEncryptionHasBeenSet = true;
}

bool BackUpJobDisplay::BucketEncryptionHasBeenSet() const
{
    return m_bucketEncryptionHasBeenSet;
}

string BackUpJobDisplay::GetEncryption() const
{
    return m_encryption;
}

void BackUpJobDisplay::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool BackUpJobDisplay::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

bool BackUpJobDisplay::GetEncryptionEnabled() const
{
    return m_encryptionEnabled;
}

void BackUpJobDisplay::SetEncryptionEnabled(const bool& _encryptionEnabled)
{
    m_encryptionEnabled = _encryptionEnabled;
    m_encryptionEnabledHasBeenSet = true;
}

bool BackUpJobDisplay::EncryptionEnabledHasBeenSet() const
{
    return m_encryptionEnabledHasBeenSet;
}

