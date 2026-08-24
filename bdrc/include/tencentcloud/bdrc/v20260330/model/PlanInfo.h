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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/AspInfo.h>
#include <tencentcloud/bdrc/v20260330/model/FlowControlRule.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份计划详情
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取计划关联的实例ID
                     * @return ResourceIds 计划关联的实例ID
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置计划关联的实例ID
                     * @param _resourceIds 计划关联的实例ID
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupPaths 备份路径列表，1~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置备份路径列表，1~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupPaths 备份路径列表，1~20 个
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeFileTypes 包含文件类型，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置包含文件类型，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeFileTypes 包含文件类型，0~20 个
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
                     * 获取排除文件路径列表，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePatterns 排除文件路径列表，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置排除文件路径列表，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePatterns 排除文件路径列表，0~20 个
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
                     * 获取备份计划状态
                     * @return Status 备份计划状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份计划状态
                     * @param _status 备份计划状态
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
                     * 获取策略ID
                     * @return AspId 策略ID
                     * 
                     */
                    std::string GetAspId() const;

                    /**
                     * 设置策略ID
                     * @param _aspId 策略ID
                     * 
                     */
                    void SetAspId(const std::string& _aspId);

                    /**
                     * 判断参数 AspId 是否已赋值
                     * @return AspId 是否已赋值
                     * 
                     */
                    bool AspIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return AspName 策略名称
                     * 
                     */
                    std::string GetAspName() const;

                    /**
                     * 设置策略名称
                     * @param _aspName 策略名称
                     * 
                     */
                    void SetAspName(const std::string& _aspName);

                    /**
                     * 判断参数 AspName 是否已赋值
                     * @return AspName 是否已赋值
                     * 
                     */
                    bool AspNameHasBeenSet() const;

                    /**
                     * 获取策略详情
                     * @return AspPolicy 策略详情
                     * 
                     */
                    AspInfo GetAspPolicy() const;

                    /**
                     * 设置策略详情
                     * @param _aspPolicy 策略详情
                     * 
                     */
                    void SetAspPolicy(const AspInfo& _aspPolicy);

                    /**
                     * 判断参数 AspPolicy 是否已赋值
                     * @return AspPolicy 是否已赋值
                     * 
                     */
                    bool AspPolicyHasBeenSet() const;

                    /**
                     * 获取最近一次执行时间
                     * @return LastExecuteTime 最近一次执行时间
                     * 
                     */
                    std::string GetLastExecuteTime() const;

                    /**
                     * 设置最近一次执行时间
                     * @param _lastExecuteTime 最近一次执行时间
                     * 
                     */
                    void SetLastExecuteTime(const std::string& _lastExecuteTime);

                    /**
                     * 判断参数 LastExecuteTime 是否已赋值
                     * @return LastExecuteTime 是否已赋值
                     * 
                     */
                    bool LastExecuteTimeHasBeenSet() const;

                    /**
                     * 获取下次触发时间
                     * @return NextTriggerTime 下次触发时间
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置下次触发时间
                     * @param _nextTriggerTime 下次触发时间
                     * 
                     */
                    void SetNextTriggerTime(const std::string& _nextTriggerTime);

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

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
                     * 获取最近一次执行错误信息
                     * @return LastTriggerError 最近一次执行错误信息
                     * 
                     */
                    std::string GetLastTriggerError() const;

                    /**
                     * 设置最近一次执行错误信息
                     * @param _lastTriggerError 最近一次执行错误信息
                     * 
                     */
                    void SetLastTriggerError(const std::string& _lastTriggerError);

                    /**
                     * 判断参数 LastTriggerError 是否已赋值
                     * @return LastTriggerError 是否已赋值
                     * 
                     */
                    bool LastTriggerErrorHasBeenSet() const;

                    /**
                     * 获取备份数量
                     * @return BackupCount 备份数量
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 设置备份数量
                     * @param _backupCount 备份数量
                     * 
                     */
                    void SetBackupCount(const int64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取流控信息
                     * @return FlowControlSettings 流控信息
                     * 
                     */
                    std::vector<FlowControlRule> GetFlowControlSettings() const;

                    /**
                     * 设置流控信息
                     * @param _flowControlSettings 流控信息
                     * 
                     */
                    void SetFlowControlSettings(const std::vector<FlowControlRule>& _flowControlSettings);

                    /**
                     * 判断参数 FlowControlSettings 是否已赋值
                     * @return FlowControlSettings 是否已赋值
                     * 
                     */
                    bool FlowControlSettingsHasBeenSet() const;

                private:

                    /**
                     * 备份计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 计划关联的实例ID
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 备份路径列表，1~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * 包含文件类型，0~20 个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * 排除文件路径列表，0~20 个
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
                     * 备份计划状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_aspId;
                    bool m_aspIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_aspName;
                    bool m_aspNameHasBeenSet;

                    /**
                     * 策略详情
                     */
                    AspInfo m_aspPolicy;
                    bool m_aspPolicyHasBeenSet;

                    /**
                     * 最近一次执行时间
                     */
                    std::string m_lastExecuteTime;
                    bool m_lastExecuteTimeHasBeenSet;

                    /**
                     * 下次触发时间
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最近一次执行错误信息
                     */
                    std::string m_lastTriggerError;
                    bool m_lastTriggerErrorHasBeenSet;

                    /**
                     * 备份数量
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 流控信息
                     */
                    std::vector<FlowControlRule> m_flowControlSettings;
                    bool m_flowControlSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_
