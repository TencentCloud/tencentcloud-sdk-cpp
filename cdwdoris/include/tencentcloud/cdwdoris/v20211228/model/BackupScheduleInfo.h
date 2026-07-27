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
                     * 获取<p>迁移类型：<br>1-远端集群迁移；2-COS迁移</p>
                     * @return BackupType <p>迁移类型：<br>1-远端集群迁移；2-COS迁移</p>
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置<p>迁移类型：<br>1-远端集群迁移；2-COS迁移</p>
                     * @param _backupType <p>迁移类型：<br>1-远端集群迁移；2-COS迁移</p>
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
                     * 获取<p>当前任务现存实例数</p>
                     * @return ExistCount <p>当前任务现存实例数</p>
                     * 
                     */
                    int64_t GetExistCount() const;

                    /**
                     * 设置<p>当前任务现存实例数</p>
                     * @param _existCount <p>当前任务现存实例数</p>
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
                     * 获取<p>cos信息</p>
                     * @return CosSourceInfo <p>cos信息</p>
                     * 
                     */
                    std::string GetCosSourceInfo() const;

                    /**
                     * 设置<p>cos信息</p>
                     * @param _cosSourceInfo <p>cos信息</p>
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
                     * 获取<p>doris信息</p>
                     * @return DorisSourceInfo <p>doris信息</p>
                     * 
                     */
                    std::string GetDorisSourceInfo() const;

                    /**
                     * 设置<p>doris信息</p>
                     * @param _dorisSourceInfo <p>doris信息</p>
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
                     * 获取<p>恢复类型</p>
                     * @return RestoreType <p>恢复类型</p>
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置<p>恢复类型</p>
                     * @param _restoreType <p>恢复类型</p>
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
                     * 获取<p>快照保留策略</p>
                     * @return SnapshotRemainPolicy <p>快照保留策略</p>
                     * 
                     */
                    SnapshotRemainPolicy GetSnapshotRemainPolicy() const;

                    /**
                     * 设置<p>快照保留策略</p>
                     * @param _snapshotRemainPolicy <p>快照保留策略</p>
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
                     * 获取<p>远程备份地域</p>
                     * @return DataRemoteRegion <p>远程备份地域</p>
                     * 
                     */
                    std::string GetDataRemoteRegion() const;

                    /**
                     * 设置<p>远程备份地域</p>
                     * @param _dataRemoteRegion <p>远程备份地域</p>
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
                     * 获取<p>是否在宽限期内</p>
                     * @return IsWithinGracePeriod <p>是否在宽限期内</p>
                     * 
                     */
                    bool GetIsWithinGracePeriod() const;

                    /**
                     * 设置<p>是否在宽限期内</p>
                     * @param _isWithinGracePeriod <p>是否在宽限期内</p>
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
                     * 获取<p>宽限期（天数）</p>
                     * @return GracePeriod <p>宽限期（天数）</p>
                     * 
                     */
                    int64_t GetGracePeriod() const;

                    /**
                     * 设置<p>宽限期（天数）</p>
                     * @param _gracePeriod <p>宽限期（天数）</p>
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
                     * 获取<p>宽限开始时间</p>
                     * @return GraceStartTime <p>宽限开始时间</p>
                     * 
                     */
                    std::string GetGraceStartTime() const;

                    /**
                     * 设置<p>宽限开始时间</p>
                     * @param _graceStartTime <p>宽限开始时间</p>
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
                     * 获取<p>托管桶类型：standard-标准，多可用区-MAZ</p>
                     * @return BucketType <p>托管桶类型：standard-标准，多可用区-MAZ</p>
                     * 
                     */
                    std::string GetBucketType() const;

                    /**
                     * 设置<p>托管桶类型：standard-标准，多可用区-MAZ</p>
                     * @param _bucketType <p>托管桶类型：standard-标准，多可用区-MAZ</p>
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
                     * 获取<p>是否开启安全锁：0-未开启，1-已开启</p>
                     * @return EnableSecurityLock <p>是否开启安全锁：0-未开启，1-已开启</p>
                     * 
                     */
                    uint64_t GetEnableSecurityLock() const;

                    /**
                     * 设置<p>是否开启安全锁：0-未开启，1-已开启</p>
                     * @param _enableSecurityLock <p>是否开启安全锁：0-未开启，1-已开启</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
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
                     * 获取<p>实例状态</p>
                     * @return InstanceStatus <p>实例状态</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _instanceStatus <p>实例状态</p>
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
                     * 获取<p>实例状态描述</p>
                     * @return InstanceStatusDesc <p>实例状态描述</p>
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置<p>实例状态描述</p>
                     * @param _instanceStatusDesc <p>实例状态描述</p>
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
                     * 获取<p>桶加密状态信息</p>
                     * @return BucketEncryption <p>桶加密状态信息</p>
                     * 
                     */
                    BucketEncryptionInfo GetBucketEncryption() const;

                    /**
                     * 设置<p>桶加密状态信息</p>
                     * @param _bucketEncryption <p>桶加密状态信息</p>
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
                     * <p>迁移类型：<br>1-远端集群迁移；2-COS迁移</p>
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>当前任务现存实例数</p>
                     */
                    int64_t m_existCount;
                    bool m_existCountHasBeenSet;

                    /**
                     * <p>cos信息</p>
                     */
                    std::string m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                    /**
                     * <p>doris信息</p>
                     */
                    std::string m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * <p>恢复类型</p>
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * <p>快照保留策略</p>
                     */
                    SnapshotRemainPolicy m_snapshotRemainPolicy;
                    bool m_snapshotRemainPolicyHasBeenSet;

                    /**
                     * <p>远程备份地域</p>
                     */
                    std::string m_dataRemoteRegion;
                    bool m_dataRemoteRegionHasBeenSet;

                    /**
                     * <p>是否在宽限期内</p>
                     */
                    bool m_isWithinGracePeriod;
                    bool m_isWithinGracePeriodHasBeenSet;

                    /**
                     * <p>宽限期（天数）</p>
                     */
                    int64_t m_gracePeriod;
                    bool m_gracePeriodHasBeenSet;

                    /**
                     * <p>宽限开始时间</p>
                     */
                    std::string m_graceStartTime;
                    bool m_graceStartTimeHasBeenSet;

                    /**
                     * <p>托管桶类型：standard-标准，多可用区-MAZ</p>
                     */
                    std::string m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                    /**
                     * <p>是否开启安全锁：0-未开启，1-已开启</p>
                     */
                    uint64_t m_enableSecurityLock;
                    bool m_enableSecurityLockHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>实例状态描述</p>
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * <p>桶加密状态信息</p>
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSCHEDULEINFO_H_
