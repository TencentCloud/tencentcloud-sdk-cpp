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
                     * 获取<p>备份点ID</p>
                     * @return BackupId <p>备份点ID</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>备份点ID</p>
                     * @param _backupId <p>备份点ID</p>
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
                     * 获取<p>备份名称</p>
                     * @return BackupName <p>备份名称</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>备份名称</p>
                     * @param _backupName <p>备份名称</p>
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
                     * 获取<p>所属计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanId <p>所属计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>所属计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planId <p>所属计划ID</p>
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
                     * 获取<p>策略ID</p>
                     * @return AspInstanceId <p>策略ID</p>
                     * 
                     */
                    std::string GetAspInstanceId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _aspInstanceId <p>策略ID</p>
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
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>备份状态，取值如下：<br>0 备份完成<br>1 创建中（备份进行中）<br>2 部分成功（指定的备份路径中部分目录不存在）<br>3 恢复中（该备份点正在被恢复任务使用）<br>92  已取消<br>98 创建失败<br>99 已删除<br>100 删除中</p>
                     * @return Status <p>备份状态，取值如下：<br>0 备份完成<br>1 创建中（备份进行中）<br>2 部分成功（指定的备份路径中部分目录不存在）<br>3 恢复中（该备份点正在被恢复任务使用）<br>92  已取消<br>98 创建失败<br>99 已删除<br>100 删除中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>备份状态，取值如下：<br>0 备份完成<br>1 创建中（备份进行中）<br>2 部分成功（指定的备份路径中部分目录不存在）<br>3 恢复中（该备份点正在被恢复任务使用）<br>92  已取消<br>98 创建失败<br>99 已删除<br>100 删除中</p>
                     * @param _status <p>备份状态，取值如下：<br>0 备份完成<br>1 创建中（备份进行中）<br>2 部分成功（指定的备份路径中部分目录不存在）<br>3 恢复中（该备份点正在被恢复任务使用）<br>92  已取消<br>98 创建失败<br>99 已删除<br>100 删除中</p>
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
                     * 获取<p>备份路径</p>
                     * @return BackupPaths <p>备份路径</p>
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置<p>备份路径</p>
                     * @param _backupPaths <p>备份路径</p>
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
                     * 获取<p>包含文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeFileTypes <p>包含文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置<p>包含文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeFileTypes <p>包含文件类型</p>
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
                     * 获取<p>排除路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePatterns <p>排除路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置<p>排除路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePatterns <p>排除路径</p>
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
                     * 获取<p>是否排除系统目录</p>
                     * @return ExcludeSystemDirectories <p>是否排除系统目录</p>
                     * 
                     */
                    bool GetExcludeSystemDirectories() const;

                    /**
                     * 设置<p>是否排除系统目录</p>
                     * @param _excludeSystemDirectories <p>是否排除系统目录</p>
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
                     * 获取<p>备份库ID</p>
                     * @return VaultId <p>备份库ID</p>
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>备份库ID</p>
                     * @param _vaultId <p>备份库ID</p>
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
                     * 获取<p>扫描文件数</p>
                     * @return ScannedFileCount <p>扫描文件数</p>
                     * 
                     */
                    int64_t GetScannedFileCount() const;

                    /**
                     * 设置<p>扫描文件数</p>
                     * @param _scannedFileCount <p>扫描文件数</p>
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
                     * 获取<p>扫描大小(字节)</p>
                     * @return ScannedSize <p>扫描大小(字节)</p>
                     * 
                     */
                    int64_t GetScannedSize() const;

                    /**
                     * 设置<p>扫描大小(字节)</p>
                     * @param _scannedSize <p>扫描大小(字节)</p>
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
                     * 获取<p>扫描大小(格式化)</p>
                     * @return ScannedSizeFormatted <p>扫描大小(格式化)</p>
                     * 
                     */
                    std::string GetScannedSizeFormatted() const;

                    /**
                     * 设置<p>扫描大小(格式化)</p>
                     * @param _scannedSizeFormatted <p>扫描大小(格式化)</p>
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
                     * 获取<p>已备份文件数量</p>
                     * @return BackupFileCount <p>已备份文件数量</p>
                     * 
                     */
                    int64_t GetBackupFileCount() const;

                    /**
                     * 设置<p>已备份文件数量</p>
                     * @param _backupFileCount <p>已备份文件数量</p>
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
                     * 获取<p>已备份大小(字节)</p>
                     * @return BackupSize <p>已备份大小(字节)</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>已备份大小(字节)</p>
                     * @param _backupSize <p>已备份大小(字节)</p>
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
                     * 获取<p>已备份大小(格式化)</p>
                     * @return BackupSizeFormatted <p>已备份大小(格式化)</p>
                     * 
                     */
                    std::string GetBackupSizeFormatted() const;

                    /**
                     * 设置<p>已备份大小(格式化)</p>
                     * @param _backupSizeFormatted <p>已备份大小(格式化)</p>
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
                     * 获取<p>备份进度(0-100)</p>
                     * @return Progress <p>备份进度(0-100)</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>备份进度(0-100)</p>
                     * @param _progress <p>备份进度(0-100)</p>
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
                     * 获取<p>任务ID</p>
                     * @return JobId <p>任务ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _jobId <p>任务ID</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
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
                     * 获取<p>是否为永久保留</p>
                     * @return IsPermanent <p>是否为永久保留</p>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>是否为永久保留</p>
                     * @param _isPermanent <p>是否为永久保留</p>
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
                     * 获取<p>到期时间</p>
                     * @return Deadline <p>到期时间</p>
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置<p>到期时间</p>
                     * @param _deadline <p>到期时间</p>
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
                     * 获取<p>不存在的路径信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonExistSourcePaths <p>不存在的路径信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNonExistSourcePaths() const;

                    /**
                     * 设置<p>不存在的路径信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonExistSourcePaths <p>不存在的路径信息</p>
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
                     * 获取<p>备份失败原因</p>
                     * @return FailReason <p>备份失败原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>备份失败原因</p>
                     * @param _failReason <p>备份失败原因</p>
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
                     * 获取<p>备份所属AppId</p>
                     * @return AppId <p>备份所属AppId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>备份所属AppId</p>
                     * @param _appId <p>备份所属AppId</p>
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
                     * 获取<p>备份类型</p>
                     * @return ResourceType <p>备份类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>备份类型</p>
                     * @param _resourceType <p>备份类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>cos备份场景使用，标识是否清单生成中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInventoryPending <p>cos备份场景使用，标识是否清单生成中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsInventoryPending() const;

                    /**
                     * 设置<p>cos备份场景使用，标识是否清单生成中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInventoryPending <p>cos备份场景使用，标识是否清单生成中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInventoryPending(const bool& _isInventoryPending);

                    /**
                     * 判断参数 IsInventoryPending 是否已赋值
                     * @return IsInventoryPending 是否已赋值
                     * 
                     */
                    bool IsInventoryPendingHasBeenSet() const;

                    /**
                     * 获取<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableObjectAcl() const;

                    /**
                     * 设置<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableObjectAcl(const bool& _enableObjectAcl);

                    /**
                     * 判断参数 EnableObjectAcl 是否已赋值
                     * @return EnableObjectAcl 是否已赋值
                     * 
                     */
                    bool EnableObjectAclHasBeenSet() const;

                    /**
                     * 获取<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableObjectTags() const;

                    /**
                     * 设置<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableObjectTags(const bool& _enableObjectTags);

                    /**
                     * 判断参数 EnableObjectTags 是否已赋值
                     * @return EnableObjectTags 是否已赋值
                     * 
                     */
                    bool EnableObjectTagsHasBeenSet() const;

                    /**
                     * 获取<p>云上资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudResourceId <p>云上资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloudResourceId() const;

                    /**
                     * 设置<p>云上资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudResourceId <p>云上资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudResourceId(const std::string& _cloudResourceId);

                    /**
                     * 判断参数 CloudResourceId 是否已赋值
                     * @return CloudResourceId 是否已赋值
                     * 
                     */
                    bool CloudResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>产品存储类型</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductType <p>产品存储类型</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>产品存储类型</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productType <p>产品存储类型</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份点ID</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>备份名称</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>所属计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_aspInstanceId;
                    bool m_aspInstanceIdHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>备份状态，取值如下：<br>0 备份完成<br>1 创建中（备份进行中）<br>2 部分成功（指定的备份路径中部分目录不存在）<br>3 恢复中（该备份点正在被恢复任务使用）<br>92  已取消<br>98 创建失败<br>99 已删除<br>100 删除中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备份路径</p>
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * <p>包含文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * <p>排除路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * <p>是否排除系统目录</p>
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * <p>备份库ID</p>
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>扫描文件数</p>
                     */
                    int64_t m_scannedFileCount;
                    bool m_scannedFileCountHasBeenSet;

                    /**
                     * <p>扫描大小(字节)</p>
                     */
                    int64_t m_scannedSize;
                    bool m_scannedSizeHasBeenSet;

                    /**
                     * <p>扫描大小(格式化)</p>
                     */
                    std::string m_scannedSizeFormatted;
                    bool m_scannedSizeFormattedHasBeenSet;

                    /**
                     * <p>已备份文件数量</p>
                     */
                    int64_t m_backupFileCount;
                    bool m_backupFileCountHasBeenSet;

                    /**
                     * <p>已备份大小(字节)</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>已备份大小(格式化)</p>
                     */
                    std::string m_backupSizeFormatted;
                    bool m_backupSizeFormattedHasBeenSet;

                    /**
                     * <p>备份进度(0-100)</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>是否为永久保留</p>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>到期时间</p>
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>不存在的路径信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nonExistSourcePaths;
                    bool m_nonExistSourcePathsHasBeenSet;

                    /**
                     * <p>备份失败原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>备份所属AppId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>备份类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>cos备份场景使用，标识是否清单生成中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isInventoryPending;
                    bool m_isInventoryPendingHasBeenSet;

                    /**
                     * <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableObjectAcl;
                    bool m_enableObjectAclHasBeenSet;

                    /**
                     * <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableObjectTags;
                    bool m_enableObjectTagsHasBeenSet;

                    /**
                     * <p>云上资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloudResourceId;
                    bool m_cloudResourceIdHasBeenSet;

                    /**
                     * <p>产品存储类型</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINFO_H_
