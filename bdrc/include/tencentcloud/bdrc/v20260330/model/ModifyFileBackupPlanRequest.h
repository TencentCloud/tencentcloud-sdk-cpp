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
                     * 获取备份计划ID
                     * @return PlanId 备份计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置备份计划ID
                     * @param _planId 备份计划ID
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
                     * 获取备份策略ID
                     * @return PolicyId 备份策略ID
                     * @deprecated
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置备份策略ID
                     * @param _policyId 备份策略ID
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
                     * 获取计划名称
                     * @return PlanName 计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置计划名称
                     * @param _planName 计划名称
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
                     * 获取备份路径列表，1~20 个
                     * @return BackupPaths 备份路径列表，1~20 个
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置备份路径列表，1~20 个
                     * @param _backupPaths 备份路径列表，1~20 个
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
                     * 获取包含文件类型，0~20 个
                     * @return IncludeFileTypes 包含文件类型，0~20 个
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置包含文件类型，0~20 个
                     * @param _includeFileTypes 包含文件类型，0~20 个
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
                     * 获取排除文件路径列表，0~20 个
                     * @return ExcludePatterns 排除文件路径列表，0~20 个
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置排除文件路径列表，0~20 个
                     * @param _excludePatterns 排除文件路径列表，0~20 个
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
                     * @return BackupStorageId 备份库ID
                     * @deprecated
                     */
                    std::string GetBackupStorageId() const;

                    /**
                     * 设置备份库ID
                     * @param _backupStorageId 备份库ID
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
                     * 获取计划状态，可选值：normal（正常）、paused（暂停）
                     * @return Status 计划状态，可选值：normal（正常）、paused（暂停）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置计划状态，可选值：normal（正常）、paused（暂停）
                     * @param _status 计划状态，可选值：normal（正常）、paused（暂停）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 备份计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 备份策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 备份路径列表，1~20 个
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * 包含文件类型，0~20 个
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * 排除文件路径列表，0~20 个
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
                    std::string m_backupStorageId;
                    bool m_backupStorageIdHasBeenSet;

                    /**
                     * 计划状态，可选值：normal（正常）、paused（暂停）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYFILEBACKUPPLANREQUEST_H_
