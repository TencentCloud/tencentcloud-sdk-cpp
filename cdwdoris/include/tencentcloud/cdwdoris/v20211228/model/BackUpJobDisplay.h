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
                     * 获取<p>备份实例id</p>
                     * @return JobId <p>备份实例id</p>
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置<p>备份实例id</p>
                     * @param _jobId <p>备份实例id</p>
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
                     * 获取<p>备份实例名</p>
                     * @return Snapshot <p>备份实例名</p>
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置<p>备份实例名</p>
                     * @param _snapshot <p>备份实例名</p>
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
                     * 获取<p>备份数据量</p>
                     * @return BackUpSize <p>备份数据量</p>
                     * 
                     */
                    int64_t GetBackUpSize() const;

                    /**
                     * 设置<p>备份数据量</p>
                     * @param _backUpSize <p>备份数据量</p>
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
                     * 获取<p>备份单副本数据量</p>
                     * @return BackUpSingleSize <p>备份单副本数据量</p>
                     * 
                     */
                    int64_t GetBackUpSingleSize() const;

                    /**
                     * 设置<p>备份单副本数据量</p>
                     * @param _backUpSingleSize <p>备份单副本数据量</p>
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
                     * 获取<p>实例创建时间</p>
                     * @return BackUpTime <p>实例创建时间</p>
                     * 
                     */
                    std::string GetBackUpTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _backUpTime <p>实例创建时间</p>
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
                     * 获取<p>实例过期时间</p>
                     * @return ExpireTime <p>实例过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>实例过期时间</p>
                     * @param _expireTime <p>实例过期时间</p>
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
                     * 获取<p>实例状态</p>
                     * @return JobStatus <p>实例状态</p>
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _jobStatus <p>实例状态</p>
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
                     * 获取<p>0为默认。1时是对远端的doris进行备份，不周期，一次性</p>
                     * @return BackupType <p>0为默认。1时是对远端的doris进行备份，不周期，一次性</p>
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置<p>0为默认。1时是对远端的doris进行备份，不周期，一次性</p>
                     * @param _backupType <p>0为默认。1时是对远端的doris进行备份，不周期，一次性</p>
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
                     * 获取<p>0为默认。1时是立即备份。2时是迁移</p>
                     * @return BackupTimeType <p>0为默认。1时是立即备份。2时是迁移</p>
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置<p>0为默认。1时是立即备份。2时是迁移</p>
                     * @param _backupTimeType <p>0为默认。1时是立即备份。2时是迁移</p>
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
                     * 获取<p>远端doris的连接信息</p>
                     * @return DorisSourceInfo <p>远端doris的连接信息</p>
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置<p>远端doris的连接信息</p>
                     * @param _dorisSourceInfo <p>远端doris的连接信息</p>
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
                     * 获取<p>实例状态对应的数值</p>
                     * @return JobStatusNum <p>实例状态对应的数值</p>
                     * 
                     */
                    int64_t GetJobStatusNum() const;

                    /**
                     * 设置<p>实例状态对应的数值</p>
                     * @param _jobStatusNum <p>实例状态对应的数值</p>
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
                     * 获取<p>备份实例中关于cos的信息</p>
                     * @return BackupCosInfo <p>备份实例中关于cos的信息</p>
                     * 
                     */
                    BackupCosInfo GetBackupCosInfo() const;

                    /**
                     * 设置<p>备份实例中关于cos的信息</p>
                     * @param _backupCosInfo <p>备份实例中关于cos的信息</p>
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
                     * 获取<p>是否使用的自定义桶</p>
                     * @return IsUserDefineBucket <p>是否使用的自定义桶</p>
                     * 
                     */
                    bool GetIsUserDefineBucket() const;

                    /**
                     * 设置<p>是否使用的自定义桶</p>
                     * @param _isUserDefineBucket <p>是否使用的自定义桶</p>
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
                     * 获取<p>错误原因</p>
                     * @return ErrorReason <p>错误原因</p>
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置<p>错误原因</p>
                     * @param _errorReason <p>错误原因</p>
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
                     * 获取<p>隔离次数</p>
                     * @return IsolationCount <p>隔离次数</p>
                     * 
                     */
                    int64_t GetIsolationCount() const;

                    /**
                     * 设置<p>隔离次数</p>
                     * @param _isolationCount <p>隔离次数</p>
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
                     * 获取<p>是否开启安全锁</p>
                     * @return EnableSecurityLock <p>是否开启安全锁</p>
                     * 
                     */
                    uint64_t GetEnableSecurityLock() const;

                    /**
                     * 设置<p>是否开启安全锁</p>
                     * @param _enableSecurityLock <p>是否开启安全锁</p>
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
                     * 获取<p>宽限期天数</p>
                     * @return GracePeriod <p>宽限期天数</p>
                     * 
                     */
                    uint64_t GetGracePeriod() const;

                    /**
                     * 设置<p>宽限期天数</p>
                     * @param _gracePeriod <p>宽限期天数</p>
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
                     * 获取<p>宽限期开始时间</p>
                     * @return GraceStartTime <p>宽限期开始时间</p>
                     * 
                     */
                    std::string GetGraceStartTime() const;

                    /**
                     * 设置<p>宽限期开始时间</p>
                     * @param _graceStartTime <p>宽限期开始时间</p>
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
                     * 获取<p>是否使用托管桶</p>
                     * @return UseManagedBucket <p>是否使用托管桶</p>
                     * 
                     */
                    bool GetUseManagedBucket() const;

                    /**
                     * 设置<p>是否使用托管桶</p>
                     * @param _useManagedBucket <p>是否使用托管桶</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>备份远程桶地域</p>
                     * @return DataRemoteRegion <p>备份远程桶地域</p>
                     * 
                     */
                    std::string GetDataRemoteRegion() const;

                    /**
                     * 设置<p>备份远程桶地域</p>
                     * @param _dataRemoteRegion <p>备份远程桶地域</p>
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

                    /**
                     * 获取<p>备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled</p>
                     * @return Encryption <p>备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled</p>
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置<p>备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled</p>
                     * @param _encryption <p>备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled</p>
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
                     * 获取<p>是否开通加密存储：0-未开通，1-已开通</p>
                     * @return EncryptionEnabled <p>是否开通加密存储：0-未开通，1-已开通</p>
                     * 
                     */
                    bool GetEncryptionEnabled() const;

                    /**
                     * 设置<p>是否开通加密存储：0-未开通，1-已开通</p>
                     * @param _encryptionEnabled <p>是否开通加密存储：0-未开通，1-已开通</p>
                     * 
                     */
                    void SetEncryptionEnabled(const bool& _encryptionEnabled);

                    /**
                     * 判断参数 EncryptionEnabled 是否已赋值
                     * @return EncryptionEnabled 是否已赋值
                     * 
                     */
                    bool EncryptionEnabledHasBeenSet() const;

                    /**
                     * 获取<p>任务调度id</p>
                     * @return ScheduleId <p>任务调度id</p>
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置<p>任务调度id</p>
                     * @param _scheduleId <p>任务调度id</p>
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取<p>总任务数（库数）</p>
                     * @return TotalTasks <p>总任务数（库数）</p>
                     * 
                     */
                    int64_t GetTotalTasks() const;

                    /**
                     * 设置<p>总任务数（库数）</p>
                     * @param _totalTasks <p>总任务数（库数）</p>
                     * 
                     */
                    void SetTotalTasks(const int64_t& _totalTasks);

                    /**
                     * 判断参数 TotalTasks 是否已赋值
                     * @return TotalTasks 是否已赋值
                     * 
                     */
                    bool TotalTasksHasBeenSet() const;

                    /**
                     * 获取<p>已完成任务数</p>
                     * @return CompletedTasks <p>已完成任务数</p>
                     * 
                     */
                    int64_t GetCompletedTasks() const;

                    /**
                     * 设置<p>已完成任务数</p>
                     * @param _completedTasks <p>已完成任务数</p>
                     * 
                     */
                    void SetCompletedTasks(const int64_t& _completedTasks);

                    /**
                     * 判断参数 CompletedTasks 是否已赋值
                     * @return CompletedTasks 是否已赋值
                     * 
                     */
                    bool CompletedTasksHasBeenSet() const;

                    /**
                     * 获取<p>失败任务数</p>
                     * @return FailedTasks <p>失败任务数</p>
                     * 
                     */
                    int64_t GetFailedTasks() const;

                    /**
                     * 设置<p>失败任务数</p>
                     * @param _failedTasks <p>失败任务数</p>
                     * 
                     */
                    void SetFailedTasks(const int64_t& _failedTasks);

                    /**
                     * 判断参数 FailedTasks 是否已赋值
                     * @return FailedTasks 是否已赋值
                     * 
                     */
                    bool FailedTasksHasBeenSet() const;

                    /**
                     * 获取<p>备份进度描述，如 3/5</p>
                     * @return BackupProgress <p>备份进度描述，如 3/5</p>
                     * 
                     */
                    std::string GetBackupProgress() const;

                    /**
                     * 设置<p>备份进度描述，如 3/5</p>
                     * @param _backupProgress <p>备份进度描述，如 3/5</p>
                     * 
                     */
                    void SetBackupProgress(const std::string& _backupProgress);

                    /**
                     * 判断参数 BackupProgress 是否已赋值
                     * @return BackupProgress 是否已赋值
                     * 
                     */
                    bool BackupProgressHasBeenSet() const;

                private:

                    /**
                     * <p>备份实例id</p>
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>备份实例名</p>
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * <p>备份数据量</p>
                     */
                    int64_t m_backUpSize;
                    bool m_backUpSizeHasBeenSet;

                    /**
                     * <p>备份单副本数据量</p>
                     */
                    int64_t m_backUpSingleSize;
                    bool m_backUpSingleSizeHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_backUpTime;
                    bool m_backUpTimeHasBeenSet;

                    /**
                     * <p>实例过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * <p>0为默认。1时是对远端的doris进行备份，不周期，一次性</p>
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>0为默认。1时是立即备份。2时是迁移</p>
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * <p>远端doris的连接信息</p>
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * <p>实例状态对应的数值</p>
                     */
                    int64_t m_jobStatusNum;
                    bool m_jobStatusNumHasBeenSet;

                    /**
                     * <p>备份实例中关于cos的信息</p>
                     */
                    BackupCosInfo m_backupCosInfo;
                    bool m_backupCosInfoHasBeenSet;

                    /**
                     * <p>是否使用的自定义桶</p>
                     */
                    bool m_isUserDefineBucket;
                    bool m_isUserDefineBucketHasBeenSet;

                    /**
                     * <p>错误原因</p>
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * <p>快照保留策略</p>
                     */
                    SnapshotRemainPolicy m_snapshotRemainPolicy;
                    bool m_snapshotRemainPolicyHasBeenSet;

                    /**
                     * <p>隔离次数</p>
                     */
                    int64_t m_isolationCount;
                    bool m_isolationCountHasBeenSet;

                    /**
                     * <p>是否开启安全锁</p>
                     */
                    uint64_t m_enableSecurityLock;
                    bool m_enableSecurityLockHasBeenSet;

                    /**
                     * <p>宽限期天数</p>
                     */
                    uint64_t m_gracePeriod;
                    bool m_gracePeriodHasBeenSet;

                    /**
                     * <p>宽限期开始时间</p>
                     */
                    std::string m_graceStartTime;
                    bool m_graceStartTimeHasBeenSet;

                    /**
                     * <p>是否在宽限期内</p>
                     */
                    bool m_isWithinGracePeriod;
                    bool m_isWithinGracePeriodHasBeenSet;

                    /**
                     * <p>是否使用托管桶</p>
                     */
                    bool m_useManagedBucket;
                    bool m_useManagedBucketHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
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
                     * <p>备份远程桶地域</p>
                     */
                    std::string m_dataRemoteRegion;
                    bool m_dataRemoteRegionHasBeenSet;

                    /**
                     * <p>桶加密状态信息</p>
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                    /**
                     * <p>备份任务创建时记录的加密类型：SSE-COS/SSE-KMS/disabled</p>
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>是否开通加密存储：0-未开通，1-已开通</p>
                     */
                    bool m_encryptionEnabled;
                    bool m_encryptionEnabledHasBeenSet;

                    /**
                     * <p>任务调度id</p>
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>总任务数（库数）</p>
                     */
                    int64_t m_totalTasks;
                    bool m_totalTasksHasBeenSet;

                    /**
                     * <p>已完成任务数</p>
                     */
                    int64_t m_completedTasks;
                    bool m_completedTasksHasBeenSet;

                    /**
                     * <p>失败任务数</p>
                     */
                    int64_t m_failedTasks;
                    bool m_failedTasksHasBeenSet;

                    /**
                     * <p>备份进度描述，如 3/5</p>
                     */
                    std::string m_backupProgress;
                    bool m_backupProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
