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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSCHEDULEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 备份、迁移任务信息
                */
                class BackupScheduleInfo : public AbstractModel
                {
                public:
                    BackupScheduleInfo();
                    ~BackupScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移类型：
1-远端集群迁移；2-COS迁移
                     * @return BackupType 迁移类型：
1-远端集群迁移；2-COS迁移
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置迁移类型：
1-远端集群迁移；2-COS迁移
                     * @param _backupType 迁移类型：
1-远端集群迁移；2-COS迁移
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
                     * 获取当前任务现存实例数
                     * @return ExistCount 当前任务现存实例数
                     * 
                     */
                    int64_t GetExistCount() const;

                    /**
                     * 设置当前任务现存实例数
                     * @param _existCount 当前任务现存实例数
                     * 
                     */
                    void SetExistCount(const int64_t& _existCount);

                    /**
                     * 判断参数 ExistCount 是否已赋值
                     * @return ExistCount 是否已赋值
                     * 
                     */
                    bool ExistCountHasBeenSet() const;

                    /**
                     * 获取cos信息
                     * @return CosSourceInfo cos信息
                     * 
                     */
                    std::string GetCosSourceInfo() const;

                    /**
                     * 设置cos信息
                     * @param _cosSourceInfo cos信息
                     * 
                     */
                    void SetCosSourceInfo(const std::string& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * 
                     */
                    bool CosSourceInfoHasBeenSet() const;

                    /**
                     * 获取doris信息
                     * @return DorisSourceInfo doris信息
                     * 
                     */
                    std::string GetDorisSourceInfo() const;

                    /**
                     * 设置doris信息
                     * @param _dorisSourceInfo doris信息
                     * 
                     */
                    void SetDorisSourceInfo(const std::string& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取恢复类型
                     * @return RestoreType 恢复类型
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置恢复类型
                     * @param _restoreType 恢复类型
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

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
                     * 获取远程备份地域
                     * @return DataRemoteRegion 远程备份地域
                     * 
                     */
                    std::string GetDataRemoteRegion() const;

                    /**
                     * 设置远程备份地域
                     * @param _dataRemoteRegion 远程备份地域
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
                     * 获取宽限期（天数）
                     * @return GracePeriod 宽限期（天数）
                     * 
                     */
                    int64_t GetGracePeriod() const;

                    /**
                     * 设置宽限期（天数）
                     * @param _gracePeriod 宽限期（天数）
                     * 
                     */
                    void SetGracePeriod(const int64_t& _gracePeriod);

                    /**
                     * 判断参数 GracePeriod 是否已赋值
                     * @return GracePeriod 是否已赋值
                     * 
                     */
                    bool GracePeriodHasBeenSet() const;

                    /**
                     * 获取宽限开始时间
                     * @return GraceStartTime 宽限开始时间
                     * 
                     */
                    std::string GetGraceStartTime() const;

                    /**
                     * 设置宽限开始时间
                     * @param _graceStartTime 宽限开始时间
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
                     * 获取托管桶类型：standard-标准，多可用区-MAZ
                     * @return BucketType 托管桶类型：standard-标准，多可用区-MAZ
                     * 
                     */
                    std::string GetBucketType() const;

                    /**
                     * 设置托管桶类型：standard-标准，多可用区-MAZ
                     * @param _bucketType 托管桶类型：standard-标准，多可用区-MAZ
                     * 
                     */
                    void SetBucketType(const std::string& _bucketType);

                    /**
                     * 判断参数 BucketType 是否已赋值
                     * @return BucketType 是否已赋值
                     * 
                     */
                    bool BucketTypeHasBeenSet() const;

                    /**
                     * 获取是否开启安全锁：0-未开启，1-已开启
                     * @return EnableSecurityLock 是否开启安全锁：0-未开启，1-已开启
                     * 
                     */
                    uint64_t GetEnableSecurityLock() const;

                    /**
                     * 设置是否开启安全锁：0-未开启，1-已开启
                     * @param _enableSecurityLock 是否开启安全锁：0-未开启，1-已开启
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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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

                private:

                    /**
                     * 迁移类型：
1-远端集群迁移；2-COS迁移
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 当前任务现存实例数
                     */
                    int64_t m_existCount;
                    bool m_existCountHasBeenSet;

                    /**
                     * cos信息
                     */
                    std::string m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                    /**
                     * doris信息
                     */
                    std::string m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * 恢复类型
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 快照保留策略
                     */
                    SnapshotRemainPolicy m_snapshotRemainPolicy;
                    bool m_snapshotRemainPolicyHasBeenSet;

                    /**
                     * 远程备份地域
                     */
                    std::string m_dataRemoteRegion;
                    bool m_dataRemoteRegionHasBeenSet;

                    /**
                     * 是否在宽限期内
                     */
                    bool m_isWithinGracePeriod;
                    bool m_isWithinGracePeriodHasBeenSet;

                    /**
                     * 宽限期（天数）
                     */
                    int64_t m_gracePeriod;
                    bool m_gracePeriodHasBeenSet;

                    /**
                     * 宽限开始时间
                     */
                    std::string m_graceStartTime;
                    bool m_graceStartTimeHasBeenSet;

                    /**
                     * 托管桶类型：standard-标准，多可用区-MAZ
                     */
                    std::string m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                    /**
                     * 是否开启安全锁：0-未开启，1-已开启
                     */
                    uint64_t m_enableSecurityLock;
                    bool m_enableSecurityLockHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
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
                     * 桶加密状态信息
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSCHEDULEINFO_H_
