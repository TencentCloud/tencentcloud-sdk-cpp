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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYFILEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYFILEBACKUPPLANREQUEST_H_

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
                * ModifyFileBackupPlan请求参数结构体
                */
                class ModifyFileBackupPlanRequest : public AbstractModel
                {
                public:
                    ModifyFileBackupPlanRequest();
                    ~ModifyFileBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份计划ID，此参数必填。</p>
                     * @return PlanId <p>备份计划ID，此参数必填。</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>备份计划ID，此参数必填。</p>
                     * @param _planId <p>备份计划ID，此参数必填。</p>
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
                     * 获取<p>备份策略ID</p>
                     * @return PolicyId <p>备份策略ID</p>
                     * @deprecated
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>备份策略ID</p>
                     * @param _policyId <p>备份策略ID</p>
                     * @deprecated
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * @deprecated
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>计划名称</p>
                     * @return PlanName <p>计划名称</p>
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置<p>计划名称</p>
                     * @param _planName <p>计划名称</p>
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

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
                     * 获取<p>备份库ID</p>
                     * @return BackupStorageId <p>备份库ID</p>
                     * @deprecated
                     */
                    std::string GetBackupStorageId() const;

                    /**
                     * 设置<p>备份库ID</p>
                     * @param _backupStorageId <p>备份库ID</p>
                     * @deprecated
                     */
                    void SetBackupStorageId(const std::string& _backupStorageId);

                    /**
                     * 判断参数 BackupStorageId 是否已赋值
                     * @return BackupStorageId 是否已赋值
                     * @deprecated
                     */
                    bool BackupStorageIdHasBeenSet() const;

                    /**
                     * 获取<p>计划状态，可选值：normal（正常）、paused（暂停）</p>
                     * @return Status <p>计划状态，可选值：normal（正常）、paused（暂停）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>计划状态，可选值：normal（正常）、paused（暂停）</p>
                     * @param _status <p>计划状态，可选值：normal（正常）、paused（暂停）</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return EnableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetEnableObjectAcl() const;

                    /**
                     * 设置<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _enableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
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
                     * @return EnableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetEnableObjectTags() const;

                    /**
                     * 设置<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _enableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
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
                     * <p>备份计划ID，此参数必填。</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>备份策略ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>计划名称</p>
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

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
                     * <p>备份库ID</p>
                     */
                    std::string m_backupStorageId;
                    bool m_backupStorageIdHasBeenSet;

                    /**
                     * <p>计划状态，可选值：normal（正常）、paused（暂停）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_enableObjectAcl;
                    bool m_enableObjectAclHasBeenSet;

                    /**
                     * <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_enableObjectTags;
                    bool m_enableObjectTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYFILEBACKUPPLANREQUEST_H_
