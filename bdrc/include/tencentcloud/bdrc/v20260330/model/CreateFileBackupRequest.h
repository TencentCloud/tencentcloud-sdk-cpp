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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateFileBackup请求参数结构体
                */
                class CreateFileBackupRequest : public AbstractModel
                {
                public:
                    CreateFileBackupRequest();
                    ~CreateFileBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源ID列表</p>
                     * @return ResourceId <p>资源ID列表</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID列表</p>
                     * @param _resourceId <p>资源ID列表</p>
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
                     * 获取<p>计划ID</p>
                     * @return PlanId <p>计划ID</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>计划ID</p>
                     * @param _planId <p>计划ID</p>
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
                     * 获取<p>备份路径列表，1~20 个</p>
                     * @return BackupPaths <p>备份路径列表，1~20 个</p>
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置<p>备份路径列表，1~20 个</p>
                     * @param _backupPaths <p>备份路径列表，1~20 个</p>
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
                     * 获取<p>包含文件类型，0~20 个</p>
                     * @return IncludeFileTypes <p>包含文件类型，0~20 个</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置<p>包含文件类型，0~20 个</p>
                     * @param _includeFileTypes <p>包含文件类型，0~20 个</p>
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
                     * 获取<p>排除文件路径列表，0~20 个</p>
                     * @return ExcludePatterns <p>排除文件路径列表，0~20 个</p>
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置<p>排除文件路径列表，0~20 个</p>
                     * @param _excludePatterns <p>排除文件路径列表，0~20 个</p>
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
                     * 获取<p>备份库ID，此参数必填。</p>
                     * @return BackupStorageId <p>备份库ID，此参数必填。</p>
                     * 
                     */
                    std::string GetBackupStorageId() const;

                    /**
                     * 设置<p>备份库ID，此参数必填。</p>
                     * @param _backupStorageId <p>备份库ID，此参数必填。</p>
                     * 
                     */
                    void SetBackupStorageId(const std::string& _backupStorageId);

                    /**
                     * 判断参数 BackupStorageId 是否已赋值
                     * @return BackupStorageId 是否已赋值
                     * 
                     */
                    bool BackupStorageIdHasBeenSet() const;

                    /**
                     * 获取<p>备份到期时间</p>
                     * @return Deadline <p>备份到期时间</p>
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置<p>备份到期时间</p>
                     * @param _deadline <p>备份到期时间</p>
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
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
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
                     * 获取<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @return EnableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableObjectAcl() const;

                    /**
                     * 设置<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @param _enableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
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
                     * 获取<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @return EnableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableObjectTags() const;

                    /**
                     * 设置<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * @param _enableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetEnableObjectTags(const bool& _enableObjectTags);

                    /**
                     * 判断参数 EnableObjectTags 是否已赋值
                     * @return EnableObjectTags 是否已赋值
                     * 
                     */
                    bool EnableObjectTagsHasBeenSet() const;

                private:

                    /**
                     * <p>资源ID列表</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>计划ID</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>备份路径列表，1~20 个</p>
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * <p>包含文件类型，0~20 个</p>
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * <p>排除文件路径列表，0~20 个</p>
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * <p>是否排除系统目录</p>
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * <p>备份库ID，此参数必填。</p>
                     */
                    std::string m_backupStorageId;
                    bool m_backupStorageIdHasBeenSet;

                    /**
                     * <p>备份到期时间</p>
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>备份名称</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     */
                    bool m_enableObjectAcl;
                    bool m_enableObjectAclHasBeenSet;

                    /**
                     * <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul><p>默认值：false</p>
                     */
                    bool m_enableObjectTags;
                    bool m_enableObjectTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPREQUEST_H_
