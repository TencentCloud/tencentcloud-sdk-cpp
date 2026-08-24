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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份点信息
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份点ID
                     * @return BackupId 备份点ID
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份点ID
                     * @param _backupId 备份点ID
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份名称
                     * @return BackupName 备份名称
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份名称
                     * @param _backupName 备份名称
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取所属计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanId 所属计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置所属计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planId 所属计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return AspInstanceId 策略ID
                     * 
                     */
                    std::string GetAspInstanceId() const;

                    /**
                     * 设置策略ID
                     * @param _aspInstanceId 策略ID
                     * 
                     */
                    void SetAspInstanceId(const std::string& _aspInstanceId);

                    /**
                     * 判断参数 AspInstanceId 是否已赋值
                     * @return AspInstanceId 是否已赋值
                     * 
                     */
                    bool AspInstanceIdHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取备份状态，取值如下：
0 备份完成
1 创建中（备份进行中）
2 部分成功（指定的备份路径中部分目录不存在）
3 恢复中（该备份点正在被恢复任务使用）
92  已取消
98 创建失败
99 已删除
100 删除中

                     * @return Status 备份状态，取值如下：
0 备份完成
1 创建中（备份进行中）
2 部分成功（指定的备份路径中部分目录不存在）
3 恢复中（该备份点正在被恢复任务使用）
92  已取消
98 创建失败
99 已删除
100 删除中

                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置备份状态，取值如下：
0 备份完成
1 创建中（备份进行中）
2 部分成功（指定的备份路径中部分目录不存在）
3 恢复中（该备份点正在被恢复任务使用）
92  已取消
98 创建失败
99 已删除
100 删除中

                     * @param _status 备份状态，取值如下：
0 备份完成
1 创建中（备份进行中）
2 部分成功（指定的备份路径中部分目录不存在）
3 恢复中（该备份点正在被恢复任务使用）
92  已取消
98 创建失败
99 已删除
100 删除中

                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份路径
                     * @return BackupPaths 备份路径
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置备份路径
                     * @param _backupPaths 备份路径
                     * 
                     */
                    void SetBackupPaths(const std::vector<std::string>& _backupPaths);

                    /**
                     * 判断参数 BackupPaths 是否已赋值
                     * @return BackupPaths 是否已赋值
                     * 
                     */
                    bool BackupPathsHasBeenSet() const;

                    /**
                     * 获取包含文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeFileTypes 包含文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置包含文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeFileTypes 包含文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeFileTypes(const std::vector<std::string>& _includeFileTypes);

                    /**
                     * 判断参数 IncludeFileTypes 是否已赋值
                     * @return IncludeFileTypes 是否已赋值
                     * 
                     */
                    bool IncludeFileTypesHasBeenSet() const;

                    /**
                     * 获取排除路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePatterns 排除路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置排除路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePatterns 排除路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludePatterns(const std::vector<std::string>& _excludePatterns);

                    /**
                     * 判断参数 ExcludePatterns 是否已赋值
                     * @return ExcludePatterns 是否已赋值
                     * 
                     */
                    bool ExcludePatternsHasBeenSet() const;

                    /**
                     * 获取是否排除系统目录
                     * @return ExcludeSystemDirectories 是否排除系统目录
                     * 
                     */
                    bool GetExcludeSystemDirectories() const;

                    /**
                     * 设置是否排除系统目录
                     * @param _excludeSystemDirectories 是否排除系统目录
                     * 
                     */
                    void SetExcludeSystemDirectories(const bool& _excludeSystemDirectories);

                    /**
                     * 判断参数 ExcludeSystemDirectories 是否已赋值
                     * @return ExcludeSystemDirectories 是否已赋值
                     * 
                     */
                    bool ExcludeSystemDirectoriesHasBeenSet() const;

                    /**
                     * 获取备份库ID
                     * @return VaultId 备份库ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份库ID
                     * @param _vaultId 备份库ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取扫描文件数
                     * @return ScannedFileCount 扫描文件数
                     * 
                     */
                    int64_t GetScannedFileCount() const;

                    /**
                     * 设置扫描文件数
                     * @param _scannedFileCount 扫描文件数
                     * 
                     */
                    void SetScannedFileCount(const int64_t& _scannedFileCount);

                    /**
                     * 判断参数 ScannedFileCount 是否已赋值
                     * @return ScannedFileCount 是否已赋值
                     * 
                     */
                    bool ScannedFileCountHasBeenSet() const;

                    /**
                     * 获取扫描大小(字节)
                     * @return ScannedSize 扫描大小(字节)
                     * 
                     */
                    int64_t GetScannedSize() const;

                    /**
                     * 设置扫描大小(字节)
                     * @param _scannedSize 扫描大小(字节)
                     * 
                     */
                    void SetScannedSize(const int64_t& _scannedSize);

                    /**
                     * 判断参数 ScannedSize 是否已赋值
                     * @return ScannedSize 是否已赋值
                     * 
                     */
                    bool ScannedSizeHasBeenSet() const;

                    /**
                     * 获取扫描大小(格式化)
                     * @return ScannedSizeFormatted 扫描大小(格式化)
                     * 
                     */
                    std::string GetScannedSizeFormatted() const;

                    /**
                     * 设置扫描大小(格式化)
                     * @param _scannedSizeFormatted 扫描大小(格式化)
                     * 
                     */
                    void SetScannedSizeFormatted(const std::string& _scannedSizeFormatted);

                    /**
                     * 判断参数 ScannedSizeFormatted 是否已赋值
                     * @return ScannedSizeFormatted 是否已赋值
                     * 
                     */
                    bool ScannedSizeFormattedHasBeenSet() const;

                    /**
                     * 获取已备份文件数量
                     * @return BackupFileCount 已备份文件数量
                     * 
                     */
                    int64_t GetBackupFileCount() const;

                    /**
                     * 设置已备份文件数量
                     * @param _backupFileCount 已备份文件数量
                     * 
                     */
                    void SetBackupFileCount(const int64_t& _backupFileCount);

                    /**
                     * 判断参数 BackupFileCount 是否已赋值
                     * @return BackupFileCount 是否已赋值
                     * 
                     */
                    bool BackupFileCountHasBeenSet() const;

                    /**
                     * 获取已备份大小(字节)
                     * @return BackupSize 已备份大小(字节)
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置已备份大小(字节)
                     * @param _backupSize 已备份大小(字节)
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取已备份大小(格式化)
                     * @return BackupSizeFormatted 已备份大小(格式化)
                     * 
                     */
                    std::string GetBackupSizeFormatted() const;

                    /**
                     * 设置已备份大小(格式化)
                     * @param _backupSizeFormatted 已备份大小(格式化)
                     * 
                     */
                    void SetBackupSizeFormatted(const std::string& _backupSizeFormatted);

                    /**
                     * 判断参数 BackupSizeFormatted 是否已赋值
                     * @return BackupSizeFormatted 是否已赋值
                     * 
                     */
                    bool BackupSizeFormattedHasBeenSet() const;

                    /**
                     * 获取备份进度(0-100)
                     * @return Progress 备份进度(0-100)
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置备份进度(0-100)
                     * @param _progress 备份进度(0-100)
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务ID
                     * @param _jobId 任务ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取是否为永久保留
                     * @return IsPermanent 是否为永久保留
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置是否为永久保留
                     * @param _isPermanent 是否为永久保留
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return Deadline 到期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置到期时间
                     * @param _deadline 到期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取不存在的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonExistSourcePaths 不存在的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNonExistSourcePaths() const;

                    /**
                     * 设置不存在的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonExistSourcePaths 不存在的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonExistSourcePaths(const std::vector<std::string>& _nonExistSourcePaths);

                    /**
                     * 判断参数 NonExistSourcePaths 是否已赋值
                     * @return NonExistSourcePaths 是否已赋值
                     * 
                     */
                    bool NonExistSourcePathsHasBeenSet() const;

                    /**
                     * 获取备份失败原因
                     * @return FailReason 备份失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置备份失败原因
                     * @param _failReason 备份失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取备份所属AppId
                     * @return AppId 备份所属AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置备份所属AppId
                     * @param _appId 备份所属AppId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取备份类型
                     * @return ResourceType 备份类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置备份类型
                     * @param _resourceType 备份类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 备份点ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份名称
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 所属计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_aspInstanceId;
                    bool m_aspInstanceIdHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 备份状态，取值如下：
0 备份完成
1 创建中（备份进行中）
2 部分成功（指定的备份路径中部分目录不存在）
3 恢复中（该备份点正在被恢复任务使用）
92  已取消
98 创建失败
99 已删除
100 删除中

                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份路径
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * 包含文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * 排除路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * 是否排除系统目录
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * 备份库ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 扫描文件数
                     */
                    int64_t m_scannedFileCount;
                    bool m_scannedFileCountHasBeenSet;

                    /**
                     * 扫描大小(字节)
                     */
                    int64_t m_scannedSize;
                    bool m_scannedSizeHasBeenSet;

                    /**
                     * 扫描大小(格式化)
                     */
                    std::string m_scannedSizeFormatted;
                    bool m_scannedSizeFormattedHasBeenSet;

                    /**
                     * 已备份文件数量
                     */
                    int64_t m_backupFileCount;
                    bool m_backupFileCountHasBeenSet;

                    /**
                     * 已备份大小(字节)
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 已备份大小(格式化)
                     */
                    std::string m_backupSizeFormatted;
                    bool m_backupSizeFormattedHasBeenSet;

                    /**
                     * 备份进度(0-100)
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 是否为永久保留
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 不存在的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nonExistSourcePaths;
                    bool m_nonExistSourcePathsHasBeenSet;

                    /**
                     * 备份失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 备份所属AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 备份类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINFO_H_
