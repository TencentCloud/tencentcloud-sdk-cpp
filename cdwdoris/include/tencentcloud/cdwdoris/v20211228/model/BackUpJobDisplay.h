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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupCosInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/SnapshotRemainPolicy.h>
#include <tencentcloud/cdwdoris/v20211228/model/BucketEncryptionInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 备份实例详情
                */
                class BackUpJobDisplay : public AbstractModel
                {
                public:
                    BackUpJobDisplay();
                    ~BackUpJobDisplay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份实例id
                     * @return JobId 备份实例id
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置备份实例id
                     * @param _jobId 备份实例id
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取备份实例名
                     * @return Snapshot 备份实例名
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置备份实例名
                     * @param _snapshot 备份实例名
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取备份数据量
                     * @return BackUpSize 备份数据量
                     * 
                     */
                    int64_t GetBackUpSize() const;

                    /**
                     * 设置备份数据量
                     * @param _backUpSize 备份数据量
                     * 
                     */
                    void SetBackUpSize(const int64_t& _backUpSize);

                    /**
                     * 判断参数 BackUpSize 是否已赋值
                     * @return BackUpSize 是否已赋值
                     * 
                     */
                    bool BackUpSizeHasBeenSet() const;

                    /**
                     * 获取备份单副本数据量
                     * @return BackUpSingleSize 备份单副本数据量
                     * 
                     */
                    int64_t GetBackUpSingleSize() const;

                    /**
                     * 设置备份单副本数据量
                     * @param _backUpSingleSize 备份单副本数据量
                     * 
                     */
                    void SetBackUpSingleSize(const int64_t& _backUpSingleSize);

                    /**
                     * 判断参数 BackUpSingleSize 是否已赋值
                     * @return BackUpSingleSize 是否已赋值
                     * 
                     */
                    bool BackUpSingleSizeHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return BackUpTime 实例创建时间
                     * 
                     */
                    std::string GetBackUpTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _backUpTime 实例创建时间
                     * 
                     */
                    void SetBackUpTime(const std::string& _backUpTime);

                    /**
                     * 判断参数 BackUpTime 是否已赋值
                     * @return BackUpTime 是否已赋值
                     * 
                     */
                    bool BackUpTimeHasBeenSet() const;

                    /**
                     * 获取实例过期时间
                     * @return ExpireTime 实例过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置实例过期时间
                     * @param _expireTime 实例过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return JobStatus 实例状态
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 设置实例状态
                     * @param _jobStatus 实例状态
                     * 
                     */
                    void SetJobStatus(const std::string& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @return BackupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @param _backupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是立即备份。2时是迁移
                     * @return BackupTimeType 0为默认。1时是立即备份。2时是迁移
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置0为默认。1时是立即备份。2时是迁移
                     * @param _backupTimeType 0为默认。1时是立即备份。2时是迁移
                     * 
                     */
                    void SetBackupTimeType(const int64_t& _backupTimeType);

                    /**
                     * 判断参数 BackupTimeType 是否已赋值
                     * @return BackupTimeType 是否已赋值
                     * 
                     */
                    bool BackupTimeTypeHasBeenSet() const;

                    /**
                     * 获取远端doris的连接信息
                     * @return DorisSourceInfo 远端doris的连接信息
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置远端doris的连接信息
                     * @param _dorisSourceInfo 远端doris的连接信息
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取实例状态对应的数值
                     * @return JobStatusNum 实例状态对应的数值
                     * 
                     */
                    int64_t GetJobStatusNum() const;

                    /**
                     * 设置实例状态对应的数值
                     * @param _jobStatusNum 实例状态对应的数值
                     * 
                     */
                    void SetJobStatusNum(const int64_t& _jobStatusNum);

                    /**
                     * 判断参数 JobStatusNum 是否已赋值
                     * @return JobStatusNum 是否已赋值
                     * 
                     */
                    bool JobStatusNumHasBeenSet() const;

                    /**
                     * 获取备份实例中关于cos的信息	
                     * @return BackupCosInfo 备份实例中关于cos的信息	
                     * 
                     */
                    BackupCosInfo GetBackupCosInfo() const;

                    /**
                     * 设置备份实例中关于cos的信息	
                     * @param _backupCosInfo 备份实例中关于cos的信息	
                     * 
                     */
                    void SetBackupCosInfo(const BackupCosInfo& _backupCosInfo);

                    /**
                     * 判断参数 BackupCosInfo 是否已赋值
                     * @return BackupCosInfo 是否已赋值
                     * 
                     */
                    bool BackupCosInfoHasBeenSet() const;

                    /**
                     * 获取是否使用的自定义桶
                     * @return IsUserDefineBucket 是否使用的自定义桶
                     * 
                     */
                    bool GetIsUserDefineBucket() const;

                    /**
                     * 设置是否使用的自定义桶
                     * @param _isUserDefineBucket 是否使用的自定义桶
                     * 
                     */
                    void SetIsUserDefineBucket(const bool& _isUserDefineBucket);

                    /**
                     * 判断参数 IsUserDefineBucket 是否已赋值
                     * @return IsUserDefineBucket 是否已赋值
                     * 
                     */
                    bool IsUserDefineBucketHasBeenSet() const;

                    /**
                     * 获取错误原因
                     * @return ErrorReason 错误原因
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置错误原因
                     * @param _errorReason 错误原因
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                    /**
                     * 获取快照保留策略
                     * @return SnapshotRemainPolicy 快照保留策略
                     * 
                     */
                    SnapshotRemainPolicy GetSnapshotRemainPolicy() const;

                    /**
                     * 设置快照保留策略
                     * @param _snapshotRemainPolicy 快照保留策略
                     * 
                     */
                    void SetSnapshotRemainPolicy(const SnapshotRemainPolicy& _snapshotRemainPolicy);

                    /**
                     * 判断参数 SnapshotRemainPolicy 是否已赋值
                     * @return SnapshotRemainPolicy 是否已赋值
                     * 
                     */
                    bool SnapshotRemainPolicyHasBeenSet() const;

                    /**
                     * 获取隔离次数
                     * @return IsolationCount 隔离次数
                     * 
                     */
                    int64_t GetIsolationCount() const;

                    /**
                     * 设置隔离次数
                     * @param _isolationCount 隔离次数
                     * 
                     */
                    void SetIsolationCount(const int64_t& _isolationCount);

                    /**
                     * 判断参数 IsolationCount 是否已赋值
                     * @return IsolationCount 是否已赋值
                     * 
                     */
                    bool IsolationCountHasBeenSet() const;

                    /**
                     * 获取是否开启安全锁
                     * @return EnableSecurityLock 是否开启安全锁
                     * 
                     */
                    uint64_t GetEnableSecurityLock() const;

                    /**
                     * 设置是否开启安全锁
                     * @param _enableSecurityLock 是否开启安全锁
                     * 
                     */
                    void SetEnableSecurityLock(const uint64_t& _enableSecurityLock);

                    /**
                     * 判断参数 EnableSecurityLock 是否已赋值
                     * @return EnableSecurityLock 是否已赋值
                     * 
                     */
                    bool EnableSecurityLockHasBeenSet() const;

                    /**
                     * 获取宽限期天数
                     * @return GracePeriod 宽限期天数
                     * 
                     */
                    uint64_t GetGracePeriod() const;

                    /**
                     * 设置宽限期天数
                     * @param _gracePeriod 宽限期天数
                     * 
                     */
                    void SetGracePeriod(const uint64_t& _gracePeriod);

                    /**
                     * 判断参数 GracePeriod 是否已赋值
                     * @return GracePeriod 是否已赋值
                     * 
                     */
                    bool GracePeriodHasBeenSet() const;

                    /**
                     * 获取宽限期开始时间
                     * @return GraceStartTime 宽限期开始时间
                     * 
                     */
                    std::string GetGraceStartTime() const;

                    /**
                     * 设置宽限期开始时间
                     * @param _graceStartTime 宽限期开始时间
                     * 
                     */
                    void SetGraceStartTime(const std::string& _graceStartTime);

                    /**
                     * 判断参数 GraceStartTime 是否已赋值
                     * @return GraceStartTime 是否已赋值
                     * 
                     */
                    bool GraceStartTimeHasBeenSet() const;

                    /**
                     * 获取是否在宽限期内
                     * @return IsWithinGracePeriod 是否在宽限期内
                     * 
                     */
                    bool GetIsWithinGracePeriod() const;

                    /**
                     * 设置是否在宽限期内
                     * @param _isWithinGracePeriod 是否在宽限期内
                     * 
                     */
                    void SetIsWithinGracePeriod(const bool& _isWithinGracePeriod);

                    /**
                     * 判断参数 IsWithinGracePeriod 是否已赋值
                     * @return IsWithinGracePeriod 是否已赋值
                     * 
                     */
                    bool IsWithinGracePeriodHasBeenSet() const;

                    /**
                     * 获取是否使用托管桶
                     * @return UseManagedBucket 是否使用托管桶
                     * 
                     */
                    bool GetUseManagedBucket() const;

                    /**
                     * 设置是否使用托管桶
                     * @param _useManagedBucket 是否使用托管桶
                     * 
                     */
                    void SetUseManagedBucket(const bool& _useManagedBucket);

                    /**
                     * 判断参数 UseManagedBucket 是否已赋值
                     * @return UseManagedBucket 是否已赋值
                     * 
                     */
                    bool UseManagedBucketHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatus 实例状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return InstanceStatusDesc 实例状态描述
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param _instanceStatusDesc 实例状态描述
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取备份远程桶地域
                     * @return DataRemoteRegion 备份远程桶地域
                     * 
                     */
                    std::string GetDataRemoteRegion() const;

                    /**
                     * 设置备份远程桶地域
                     * @param _dataRemoteRegion 备份远程桶地域
                     * 
                     */
                    void SetDataRemoteRegion(const std::string& _dataRemoteRegion);

                    /**
                     * 判断参数 DataRemoteRegion 是否已赋值
                     * @return DataRemoteRegion 是否已赋值
                     * 
                     */
                    bool DataRemoteRegionHasBeenSet() const;

                    /**
                     * 获取桶加密状态信息
                     * @return BucketEncryption 桶加密状态信息
                     * 
                     */
                    BucketEncryptionInfo GetBucketEncryption() const;

                    /**
                     * 设置桶加密状态信息
                     * @param _bucketEncryption 桶加密状态信息
                     * 
                     */
                    void SetBucketEncryption(const BucketEncryptionInfo& _bucketEncryption);

                    /**
                     * 判断参数 BucketEncryption 是否已赋值
                     * @return BucketEncryption 是否已赋值
                     * 
                     */
                    bool BucketEncryptionHasBeenSet() const;

                    /**
                     * 获取备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled
                     * @return Encryption 备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled
                     * @param _encryption 备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取是否开通加密存储：0-未开通，1-已开通
                     * @return EncryptionEnabled 是否开通加密存储：0-未开通，1-已开通
                     * 
                     */
                    bool GetEncryptionEnabled() const;

                    /**
                     * 设置是否开通加密存储：0-未开通，1-已开通
                     * @param _encryptionEnabled 是否开通加密存储：0-未开通，1-已开通
                     * 
                     */
                    void SetEncryptionEnabled(const bool& _encryptionEnabled);

                    /**
                     * 判断参数 EncryptionEnabled 是否已赋值
                     * @return EncryptionEnabled 是否已赋值
                     * 
                     */
                    bool EncryptionEnabledHasBeenSet() const;

                private:

                    /**
                     * 备份实例id
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 备份实例名
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * 备份数据量
                     */
                    int64_t m_backUpSize;
                    bool m_backUpSizeHasBeenSet;

                    /**
                     * 备份单副本数据量
                     */
                    int64_t m_backUpSingleSize;
                    bool m_backUpSingleSizeHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_backUpTime;
                    bool m_backUpTimeHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 0为默认。1时是立即备份。2时是迁移
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * 远端doris的连接信息
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * 实例状态对应的数值
                     */
                    int64_t m_jobStatusNum;
                    bool m_jobStatusNumHasBeenSet;

                    /**
                     * 备份实例中关于cos的信息	
                     */
                    BackupCosInfo m_backupCosInfo;
                    bool m_backupCosInfoHasBeenSet;

                    /**
                     * 是否使用的自定义桶
                     */
                    bool m_isUserDefineBucket;
                    bool m_isUserDefineBucketHasBeenSet;

                    /**
                     * 错误原因
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * 快照保留策略
                     */
                    SnapshotRemainPolicy m_snapshotRemainPolicy;
                    bool m_snapshotRemainPolicyHasBeenSet;

                    /**
                     * 隔离次数
                     */
                    int64_t m_isolationCount;
                    bool m_isolationCountHasBeenSet;

                    /**
                     * 是否开启安全锁
                     */
                    uint64_t m_enableSecurityLock;
                    bool m_enableSecurityLockHasBeenSet;

                    /**
                     * 宽限期天数
                     */
                    uint64_t m_gracePeriod;
                    bool m_gracePeriodHasBeenSet;

                    /**
                     * 宽限期开始时间
                     */
                    std::string m_graceStartTime;
                    bool m_graceStartTimeHasBeenSet;

                    /**
                     * 是否在宽限期内
                     */
                    bool m_isWithinGracePeriod;
                    bool m_isWithinGracePeriodHasBeenSet;

                    /**
                     * 是否使用托管桶
                     */
                    bool m_useManagedBucket;
                    bool m_useManagedBucketHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例状态描述
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * 备份远程桶地域
                     */
                    std::string m_dataRemoteRegion;
                    bool m_dataRemoteRegionHasBeenSet;

                    /**
                     * 桶加密状态信息
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                    /**
                     * 备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 是否开通加密存储：0-未开通，1-已开通
                     */
                    bool m_encryptionEnabled;
                    bool m_encryptionEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
